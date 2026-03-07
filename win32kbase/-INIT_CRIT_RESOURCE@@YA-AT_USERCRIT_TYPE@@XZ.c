PVOID *__fastcall INIT_CRIT_RESOURCE(PVOID *a1)
{
  struct _ERESOURCE *Pool2; // rax

  *a1 = 0LL;
  Pool2 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1919251285LL);
  *a1 = Pool2;
  if ( Pool2 && ExInitializeResourceLite(Pool2) < 0 )
  {
    ExFreePoolWithTag(*a1, 0);
    *a1 = 0LL;
  }
  return a1;
}
