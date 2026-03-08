/*
 * XREFs of RtlInsertDynamicFunctionTable @ 0x1402DDED4
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlInsertDynamicFunctionTable(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // eax
  __int64 v6; // r13
  unsigned int v7; // ebx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v9; // rdi
  unsigned int v10; // esi
  unsigned int v11; // ecx
  unsigned int v12; // r9d
  unsigned __int64 *v13; // rcx
  __int64 v14; // r14
  bool v15; // zf
  __int64 v16; // r14
  unsigned __int64 v17; // rcx
  __int64 Pool2; // rax
  _OWORD *v19; // rcx
  int v20; // [rsp+20h] [rbp-48h]
  int v21; // [rsp+24h] [rbp-44h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]
  unsigned __int64 v23; // [rsp+30h] [rbp-38h]
  _KPROCESS *Process; // [rsp+78h] [rbp+10h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v22 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 40);
  v23 = v2;
  if ( v2 < v22 )
    return 3221225621LL;
  v3 = v2 - v22;
  if ( v3 > 0xFFFFFFFF )
    return 3221225621LL;
  v21 = v3;
  v4 = *(_DWORD *)(a1 + 84);
  if ( v4 > 0x15555555 )
    return 3221225621LL;
  v20 = 12 * v4;
  v6 = 0LL;
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].UserCetLogging, 0LL);
  v9 = *(_QWORD *)&Process[1].PrimaryGroup;
  if ( v9 )
  {
    v10 = *(_DWORD *)v9;
    v11 = *(_DWORD *)(v9 + 4);
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  if ( v10 + 1 <= v11 )
    goto LABEL_11;
  v16 = v11 + 10;
  if ( (unsigned int)v16 < v11 || (v17 = 24 * v16 + 16, v17 >= 0xFFFFFFFF) )
  {
    v7 = -1073741675;
  }
  else
  {
    v6 = *(_QWORD *)&Process[1].PrimaryGroup;
    Pool2 = ExAllocatePool2(257LL, (unsigned int)v17, 1178891346LL);
    v9 = Pool2;
    if ( Pool2 )
    {
      v19 = (_OWORD *)(Pool2 + 16);
      if ( v10 )
      {
        memmove(v19, (const void *)(v6 + 16), 24LL * v10);
      }
      else
      {
        *v19 = 0LL;
        *(_QWORD *)(Pool2 + 32) = 0LL;
        v10 = 1;
      }
      *(_DWORD *)v9 = v10;
      *(_DWORD *)(v9 + 4) = v16;
      *(_BYTE *)(v9 + 12) = 0;
      *(_QWORD *)&Process[1].PrimaryGroup = v9;
LABEL_11:
      v12 = 1;
      if ( v10 > 1 )
      {
        v13 = (unsigned __int64 *)(v9 + 48);
        do
        {
          if ( v22 < *v13 )
            break;
          ++v12;
          v13 += 3;
        }
        while ( v12 < v10 );
      }
      if ( *(_QWORD *)(v9 + 24LL * (v12 - 1) + 24) + (unsigned __int64)*(unsigned int *)(v9 + 24LL * (v12 - 1) + 32) > v22
        || v12 < v10 && *(_QWORD *)(v9 + 24LL * v12 + 24) < v23 )
      {
        v7 = -1073741800;
      }
      else
      {
        v14 = 24LL * v12;
        if ( v12 != v10 )
          memmove(
            (void *)(v9 + 8 * (v12 + 1 + 2LL + 2LL * (v12 + 1))),
            (const void *)(v14 + v9 + 16),
            24LL * (v10 - v12));
        *(_QWORD *)(v14 + v9 + 16) = a1;
        *(_QWORD *)(v14 + v9 + 24) = v22;
        *(_DWORD *)(v14 + v9 + 32) = v21;
        *(_DWORD *)(v14 + v9 + 36) = v20;
        *(_DWORD *)v9 = v10 + 1;
      }
      goto LABEL_21;
    }
    v7 = -1073741670;
    v6 = 0LL;
  }
LABEL_21:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].UserCetLogging, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].UserCetLogging);
  KeAbPostRelease((ULONG_PTR)&Process[1].UserCetLogging);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v6 )
    ExFreePoolWithTag((PVOID)v6, 0x46447452u);
  return v7;
}
