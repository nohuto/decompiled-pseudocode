__int64 __fastcall MmStoreProbeAndLockPages(ULONG_PTR BugCheckParameter4, int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  int v5; // eax
  unsigned int v6; // eax
  _QWORD *v7; // rcx
  int v8; // eax
  int v9; // edi
  ULONG_PTR v10; // rbx
  ULONG_PTR v11; // rcx
  signed __int32 BugCheckParameter4a; // [rsp+28h] [rbp-89h]
  ULONG_PTR v14[22]; // [rsp+48h] [rbp-69h] BYREF
  int v15; // [rsp+120h] [rbp+6Fh] BYREF

  memset(v14, 0, sizeof(v14));
  CurrentThread = KeGetCurrentThread();
  v5 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( a2 )
    v6 = v5 & 0xFFFFFFF3 | 8;
  else
    v6 = v5 & 0xFFFFFFF3 | 4;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v6;
  LOBYTE(BugCheckParameter4a) = 1;
  MiProbeAndLockPrepare(
    (__int64)v14,
    BugCheckParameter4,
    *(_QWORD *)(BugCheckParameter4 + 32) + *(unsigned int *)(BugCheckParameter4 + 44),
    *(unsigned int *)(BugCheckParameter4 + 40),
    BugCheckParameter4a,
    0,
    0);
  v7 = (_QWORD *)v14[7];
  do
  {
    *v7 = -1LL;
    v8 = MiProbeLeafFrame((__int64)v14);
    v9 = v8;
    if ( v8 == -1073741801 )
      break;
    if ( v8 < 0 )
      KeBugCheckEx(0x1Au, 0x6001uLL, v8, v14[1], BugCheckParameter4);
    v10 = 48 * v14[17] - 0x220000000000LL;
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v15);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v10 + 34) & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v9 = -1073740749;
      break;
    }
    MiReferencePageForModifiedWrite(v10, 13);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v11 = v14[7];
    v14[1] += 4096LL;
    *(_QWORD *)v14[7] = v14[17];
    v7 = (_QWORD *)(v11 + 8);
    v14[7] = (ULONG_PTR)v7;
    v14[3] += 8LL;
  }
  while ( v14[3] <= v14[4] );
  MiUnlockProbePacketWorkingSet((__int64)v14);
  if ( v9 >= 0 )
    MiStoreMarkLockedPagesModified((_DWORD *)BugCheckParameter4);
  else
    MiUnlockStoreLockedPages(BugCheckParameter4);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= 0xFFFFFFF3;
  return (unsigned int)v9;
}
