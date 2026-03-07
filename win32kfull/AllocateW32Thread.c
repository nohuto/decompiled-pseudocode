__int64 __fastcall AllocateW32Thread(__int64 a1)
{
  _QWORD *Pool2; // rbx
  _QWORD *v3; // rdi

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 200LL, 1853125461LL);
  if ( Pool2 )
  {
    v3 = (_QWORD *)Win32AllocPoolWithQuotaZInit(W32ThreadSize, 1769239381LL);
    if ( v3 )
    {
      ExInitializeFastOwnerEntry(Pool2 + 7);
      ExInitializeFastOwnerEntry(Pool2 + 16);
      *v3 = a1;
      *Pool2 = v3;
      PsSetThreadWin32Thread(a1, Pool2, 0LL);
      ReferenceW32Thread(v3);
      return 0LL;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  return 3221225495LL;
}
