char __fastcall MmDiscardDriverSection(unsigned __int64 a1)
{
  _QWORD *v2; // rdi
  unsigned __int64 v3; // rbx
  int v4; // eax
  unsigned __int64 v5; // rsi
  struct _KTHREAD *Lock; // rbx
  unsigned __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  v2 = MiLookupDataTableEntry(a1, 1);
  v3 = v2[6];
  v4 = MI_IS_PHYSICAL_ADDRESS(v3);
  if ( !v4 || v3 == PsNtosImageBase || v3 == PsHalImageBase )
  {
    LOBYTE(v4) = MiSnapDriverRange((__int64)v2, 0, 0, a1, &v8, (unsigned __int64 *)&v9);
    v5 = v8;
    if ( v8 )
    {
      Lock = MmAcquireLoadLock();
      MiFreeInitializationCode((unsigned __int64)v2, v5, v9, 0);
      LOBYTE(v4) = MmReleaseLoadLock((__int64)Lock);
    }
  }
  return v4;
}
