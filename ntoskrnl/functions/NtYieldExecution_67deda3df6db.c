void __noreturn NtYieldExecution()
{
  KeYieldExecution(0);
}
