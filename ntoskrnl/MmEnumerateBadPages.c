/*
 * XREFs of MmEnumerateBadPages @ 0x140A2CF14
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MiIterateOverPartitions @ 0x140626FE0 (MiIterateOverPartitions.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x1406279E8 (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiSortPageFramesRemoveDuplicates @ 0x140628888 (MiSortPageFramesRemoveDuplicates.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmEnumerateBadPages(__int64 **a1)
{
  __int64 *v2; // rdi
  char *v3; // r14
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // r15
  bool v8; // zf
  _QWORD *Pool; // rax
  const void **v10; // rbx
  __int64 v11; // rax
  __int64 result; // rax
  PVOID P[2]; // [rsp+20h] [rbp-20h] BYREF
  int v14; // [rsp+30h] [rbp-10h]
  int v15; // [rsp+34h] [rbp-Ch]
  size_t v16; // [rsp+38h] [rbp-8h]

  *a1 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v14 = 0;
  P[1] = P;
  v2 = 0LL;
  P[0] = P;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire((__int64)&qword_140C67008, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C67008, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140C67008, v6, (__int64)&qword_140C67008);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  MiIterateOverPartitions(MiEnumeratePartitionBadPages, (__int64)P);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C67008, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C67008);
  KeAbPostRelease((ULONG_PTR)&qword_140C67008);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  MiEnumerateQuarantinedBadHugeRangePages((__int64)P);
  if ( v14 >= 0 )
  {
    if ( v16 )
    {
      if ( v16 + 1 >= v16
        && v16 + 1 <= 0x1FFFFFFFFFFFFFFFLL
        && (Pool = MiAllocatePool(64, 8 * v16 + 8, 0x61426D4Du), (v2 = Pool) != 0LL) )
      {
        v3 = (char *)(Pool + 1);
      }
      else
      {
        v5 = -1073741670;
      }
    }
  }
  else
  {
    v5 = v14;
  }
  while ( 1 )
  {
    v10 = (const void **)P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v11 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v11 + 8) = P;
    if ( v3 )
    {
      memmove(v3, v10[3], 8LL * (_QWORD)v10[2]);
      v3 += 8 * (_QWORD)v10[2];
    }
    ExFreePoolWithTag(v10, 0);
  }
  if ( v2 )
    *v2 = MiSortPageFramesRemoveDuplicates(v2 + 1, v16);
  result = v5;
  *a1 = v2;
  return result;
}
