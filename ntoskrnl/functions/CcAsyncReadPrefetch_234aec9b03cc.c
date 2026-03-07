char __fastcall CcAsyncReadPrefetch(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // r14
  int v5; // r13d
  struct _MDL *v6; // r10
  struct _KPROCESS *v7; // rdx
  KPROCESSOR_MODE v8; // r8
  __int64 v9; // r12
  _DWORD *v10; // rbx
  int v12; // [rsp+B0h] [rbp+8h]
  int v13; // [rsp+B8h] [rbp+10h]
  __int64 v14; // [rsp+C0h] [rbp+18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp+20h]

  v13 = 0;
  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD **)(a1 + 32);
  v14 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(a1 + 40);
  v4 = *(_QWORD **)(a1 + 48);
  v5 = *(_DWORD *)(a1 + 56);
  v6 = *(struct _MDL **)(a1 + 64);
  v7 = *(struct _KPROCESS **)(a1 + 88);
  v8 = *(_BYTE *)(a1 + 112);
  CurrentThread = *(struct _KTHREAD **)(a1 + 104);
  v9 = *(_QWORD *)(a1 + 152);
  if ( (v6->MdlFlags & 0x817) == 0 )
    MmProbeAndLockProcessPages(v6, v7, v8, IoWriteAccess);
  CurrentThread = KeGetCurrentThread();
  CurrentThread[1].Timer.DueTime.HighPart = 0;
  *v4 = 0LL;
  v12 = v3;
  if ( v14 < *(_QWORD *)(v1 + 8) )
  {
    KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)7;
    if ( v14 + v3 > *(_QWORD *)(v1 + 8) )
      v12 = *(_DWORD *)(v1 + 8) - v14;
    v13 = MmPrefetchForCacheManager(
            (_DWORD)v2,
            (unsigned int)v14 & 0xFFFFF000,
            0,
            ((v12 + v14 + 4095) & 0xFFFFF000) - (v14 & 0xFFFFF000),
            v5);
    KeGetCurrentThread()[1].TrapFrame = 0LL;
  }
  if ( v13 )
    ++CcNumberAsyncReadPrefetches;
  else
    ++CcNumberAsyncReadCacheHits;
  v10 = (_DWORD *)v2[6];
  if ( CcEnableReadAheadInAsyncRead && v13 )
  {
    if ( !v10 )
      return 1;
    if ( (*v10 & 0x20000) == 0 )
      CcScheduleReadAheadNuma(v2, v9);
  }
  if ( v10 )
    CcUpdateReadHistory(v2, &v14, (unsigned int)v3);
  return 1;
}
