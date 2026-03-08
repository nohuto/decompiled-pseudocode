/*
 * XREFs of PfSnQueryPrefetcherInformation @ 0x140787F0C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PfSnGetCompletedTrace @ 0x140788154 (PfSnGetCompletedTrace.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfSnQueryPrefetcherInformation(__int64 a1, __int128 *a2, int a3, KPROCESSOR_MODE a4, _DWORD *a5)
{
  unsigned int v8; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _OWORD *v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  _OWORD *v16; // rcx
  _OWORD *v17; // rax
  __int128 v18; // [rsp+20h] [rbp-1D8h]
  __int128 v19; // [rsp+30h] [rbp-1C8h]
  _BYTE v20[416]; // [rsp+50h] [rbp-1A8h] BYREF

  v8 = 0;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
    return (unsigned int)-1073741790;
  if ( a3 != 32 )
  {
    v8 = -1073741820;
    *a5 = 32;
    return v8;
  }
  v18 = *a2;
  v19 = a2[1];
  if ( *(_QWORD *)a2 != 0x6B75684300000001LL )
    return (unsigned int)-1073741811;
  if ( DWORD2(v18) == 1 )
    return (unsigned int)PfSnGetCompletedTrace(v19, DWORD2(v19), a5);
  if ( DWORD2(v18) != 2 )
    return (unsigned int)-1073741821;
  if ( DWORD2(v19) != 408 )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)qword_140C64C08, 0LL);
  v11 = v20;
  v12 = &qword_140C64A70;
  v13 = 3LL;
  v14 = 3LL;
  do
  {
    *v11 = *(_OWORD *)v12;
    v11[1] = *((_OWORD *)v12 + 1);
    v11[2] = *((_OWORD *)v12 + 2);
    v11[3] = *((_OWORD *)v12 + 3);
    v11[4] = *((_OWORD *)v12 + 4);
    v11[5] = *((_OWORD *)v12 + 5);
    v11[6] = *((_OWORD *)v12 + 6);
    v11 += 8;
    *(v11 - 1) = *((_OWORD *)v12 + 7);
    v12 += 16;
    --v14;
  }
  while ( v14 );
  *v11 = *(_OWORD *)v12;
  *((_QWORD *)v11 + 2) = v12[2];
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140C64C08, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)qword_140C64C08);
  KeAbPostRelease((ULONG_PTR)qword_140C64C08);
  KeLeaveCriticalRegion();
  if ( a4 )
  {
    v15 = v19;
    if ( (v19 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)v19 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v15 = *(_BYTE *)v15;
    *(_BYTE *)(v15 + 407) = *(_BYTE *)(v15 + 407);
  }
  v16 = (_OWORD *)v19;
  v17 = v20;
  do
  {
    *v16 = *v17;
    v16[1] = v17[1];
    v16[2] = v17[2];
    v16[3] = v17[3];
    v16[4] = v17[4];
    v16[5] = v17[5];
    v16[6] = v17[6];
    v16 += 8;
    *(v16 - 1) = v17[7];
    v17 += 8;
    --v13;
  }
  while ( v13 );
  *v16 = *v17;
  *((_QWORD *)v16 + 2) = *((_QWORD *)v17 + 2);
  *a5 = 408;
  return v8;
}
