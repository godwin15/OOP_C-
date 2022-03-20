class Learn:

    raise_amount = 1.05

    def __init__(self, work, time, result, salary):
        self.work = work
        self.time = time
        self.result = result
        self.salary = salary

    def Atwork(self):
        return self.work

    def duration(self):
        return self.time

    def accomplishment(self):
        return self.result

    def pay(self):
        return self.salary

    def apply_raise(self):
        return int(self.salary*self.raise_amount)

def main():
    first = Learn("Computer Engineer", "60 hours a week", "improved security systems", 250000)
    a = first.Atwork()
    print("I am a "+first.Atwork()+ " and I work "+first.duration()+" to deliver "+first.accomplishment())
    a = first.apply_raise()
    print ("My current salary is ${} per year.".format(a))
    #a = {" ":1}
    print(a)

if __name__ == "__main__":
    main()
