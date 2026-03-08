/*
 * XREFs of MiCreateFileOnlyImageFixupList @ 0x140A30D1C
 * Callers:
 *     MiRelocateImage @ 0x1407F2760 (MiRelocateImage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetControlAreaPartition @ 0x14031F9F0 (MiGetControlAreaPartition.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MiUpdateControlAreaCommitCount @ 0x140368568 (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionFromPte @ 0x14064BC7C (MiGetSubsectionFromPte.c)
 *     MiPageHasRelocations @ 0x14069F28C (MiPageHasRelocations.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateFileOnlyImageFixupList(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // ebp
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int HasRelocations; // eax
  unsigned int v10; // ecx
  _QWORD *Pool; // r14
  unsigned __int64 v13; // r12
  unsigned int v14; // esi
  unsigned int v15; // edi
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v25; // [rsp+20h] [rbp-48h]
  __int64 ControlAreaPartition; // [rsp+28h] [rbp-40h]
  __int64 v27; // [rsp+78h] [rbp+10h]

  v3 = 0;
  *a3 = 0LL;
  v6 = *(_DWORD *)(a2 + 56);
  LODWORD(v7) = 0;
  v8 = 0;
  if ( !v6 )
    return 0LL;
  do
  {
    HasRelocations = MiPageHasRelocations((__int64 *)a2, v8, 1);
    v10 = v7 + 1;
    if ( !HasRelocations )
      v10 = v7;
    ++v8;
    v7 = v10;
  }
  while ( v8 < v6 );
  if ( !v10 )
    return 0LL;
  Pool = MiAllocatePool(64, 8LL * (v10 + 1), 0x7052694Du);
  if ( Pool )
  {
    ControlAreaPartition = MiGetControlAreaPartition(a1);
    v13 = v7;
    if ( (unsigned int)MiChargeCommit(ControlAreaPartition, v7, 0LL) )
    {
      v14 = 0;
      v25 = *(_QWORD *)a1;
      v15 = 0;
      v27 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
      while ( 1 )
      {
        if ( (unsigned int)MiPageHasRelocations((__int64 *)a2, v15, 1) )
        {
          v17 = MI_READ_PTE_LOCK_FREE(v27 + 8LL * v15);
          if ( (v17 & 0x400) != 0 )
          {
            v3 = -1073740023;
            goto LABEL_35;
          }
          if ( (v17 & 0x800) != 0 )
          {
            if ( qword_140C657C0 )
            {
              if ( (v17 & 0x10) != 0 )
                v17 &= ~0x10uLL;
              else
                v17 &= ~qword_140C657C0;
            }
            v18 = 48 * ((v17 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            if ( (*(_DWORD *)(v18 + 16) & 0x400LL) == 0
              || (*(_BYTE *)(MiGetSubsectionFromPte(*(_QWORD *)(v18 + 16)) + 34) & 2) == 0 )
            {
              v19 = v14++;
              Pool[v19] = v27 + 8LL * v15;
            }
          }
        }
        if ( ++v15 >= v6 )
        {
          if ( v14 )
          {
            CurrentThread = KeGetCurrentThread();
            v21 = (unsigned __int64 *)(v25 + 40);
            --CurrentThread->SpecialApcDisable;
            v22 = KeAbPreAcquire(v25 + 40, 0LL);
            v23 = v22;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 40), 0LL) )
              ExfAcquirePushLockExclusiveEx(v21, v22, (__int64)v21);
            if ( v23 )
              *(_BYTE *)(v23 + 18) = 1;
            MiUpdateControlAreaCommitCount(a1, v13);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v21);
            KeAbPostRelease((ULONG_PTR)v21);
            if ( CurrentThread->SpecialApcDisable++ == -1
              && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            *a3 = Pool;
            return 0LL;
          }
LABEL_35:
          MiReturnCommit(ControlAreaPartition, v13, v16);
          ExFreePoolWithTag(Pool, 0);
          return v3;
        }
      }
    }
    ExFreePoolWithTag(Pool, 0);
  }
  return 3221225626LL;
}
