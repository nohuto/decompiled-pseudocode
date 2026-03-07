void *__fastcall PnpGetProcessCommandLine(struct _EX_RUNDOWN_REF *a1)
{
  void *Pool2; // rbx
  int v3; // eax
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  Pool2 = 0LL;
  v3 = PsQueryProcessCommandLine(a1, 0LL, 0, 0, &v5);
  if ( v3 == -1073741820 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v5, 1332768336LL);
    if ( !Pool2 )
      return Pool2;
    v3 = PsQueryProcessCommandLine(a1, (__int64)Pool2, v5, 0, &v5);
  }
  if ( v3 < 0 && Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0x4F706E50u);
    return 0LL;
  }
  return Pool2;
}
