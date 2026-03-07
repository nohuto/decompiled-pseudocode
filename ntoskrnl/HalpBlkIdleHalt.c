void __noreturn HalpBlkIdleHalt()
{
  _enable();
  __halt();
}
