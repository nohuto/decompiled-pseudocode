struct _EX_RUNDOWN_REF *__fastcall ExAllocateCallBack(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _EX_RUNDOWN_REF *Pool2; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx

  Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(64LL, 24LL, 1651663427LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    Pool2[1].Count = a1;
    Pool2[2].Count = a2;
    ExInitializePushLock(Pool2);
  }
  return v5;
}
