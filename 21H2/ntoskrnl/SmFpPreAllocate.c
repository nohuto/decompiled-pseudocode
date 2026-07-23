/*
 * XREFs of SmFpPreAllocate @ 0x1403C9134
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140293AF8 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1402A2388 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403C90A0 (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x14028FD10 (SmAcquireReleaseCharges.c)
 *     SmKmAllocateMdlForLock @ 0x140290FCC (SmKmAllocateMdlForLock.c)
 *     SmFpCleanup @ 0x14029FC64 (SmFpCleanup.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     MmAllocateMappingAddress @ 0x14060CD20 (MmAllocateMappingAddress.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SmFpPreAllocate(PEX_SPIN_LOCK SpinLock, unsigned int *a2, unsigned int a3)
{
  __int64 v4; // rbx
  unsigned int *v6; // r12
  unsigned int v7; // ecx
  unsigned int v8; // r15d
  __int64 v9; // rbx
  _OWORD *PoolWithTag; // rax
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned int v13; // eax
  void *MappingAddress; // rax
  unsigned int v15; // eax
  KIRQL v16; // al
  __int128 v17; // xmm1
  int v18; // edx
  unsigned __int64 v19; // rbx
  __int128 v20; // xmm0
  unsigned int v21; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  _OWORD v28[7]; // [rsp+20h] [rbp-49h] BYREF

  v4 = a3;
  memset(v28, 0, sizeof(v28));
  HIDWORD(v28[0]) = 0;
  *((_QWORD *)&v28[1] + 1) = &v28[1];
  v6 = &a2[v4];
  WORD4(v28[0]) = 1;
  *(_QWORD *)&v28[1] = &v28[1];
  BYTE10(v28[0]) = 6;
  while ( a2 < v6 )
  {
    v7 = *a2;
    v8 = 0;
    v9 = *a2 & 0xF;
    *((_WORD *)&v28[5] + v9 + 4) = *a2 >> 4;
    if ( (v7 & 0xFF00000) != 0 )
    {
      while ( 1 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x70466D73u);
        v11 = PoolWithTag;
        if ( !PoolWithTag )
        {
LABEL_19:
          SmFpCleanup((__int64)v28);
          v21 = -1073741670;
          if ( v11 )
            ExFreePoolWithTag(v11, 0);
          return v21;
        }
        *PoolWithTag = 0LL;
        v12 = *a2;
        v13 = *a2 & 0xF;
        if ( v13 == 2 )
          break;
        if ( v13 != 3 )
        {
          if ( v13 >= 5 )
            MappingAddress = MmAllocateMappingAddress((unsigned __int16)((unsigned int)v12 >> 4) << 12, 0x6D526D73u);
          else
            MappingAddress = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)(v12 >> 4), 0x70466D73u);
LABEL_9:
          if ( !MappingAddress )
            goto LABEL_19;
          goto LABEL_10;
        }
        if ( !(unsigned int)SmAcquireReleaseCharges((unsigned __int64)(unsigned __int16)(v12 >> 4) << 12, 1, 0) )
          goto LABEL_19;
        MappingAddress = (void *)(8LL * (v8 + 1));
LABEL_10:
        v11[1] = MappingAddress;
        ++v8;
        *v11 = *((_QWORD *)&v28[2] + v9);
        v15 = (unsigned __int8)(*a2 >> 20);
        *((_QWORD *)&v28[2] + v9) = v11;
        if ( v8 >= v15 )
          goto LABEL_11;
      }
      MappingAddress = SmKmAllocateMdlForLock((unsigned __int64)(unsigned __int16)(v12 >> 4) << 12);
      goto LABEL_9;
    }
LABEL_11:
    ++a2;
  }
  v16 = ExAcquireSpinLockExclusive(SpinLock);
  v17 = v28[3];
  v18 = v28[6];
  *((_QWORD *)SpinLock + 11) = *((_QWORD *)&v28[5] + 1);
  *((_OWORD *)SpinLock + 2) = v28[2];
  v19 = v16;
  v20 = v28[4];
  *((_OWORD *)SpinLock + 3) = v17;
  *((_DWORD *)SpinLock + 24) = v18;
  *((_OWORD *)SpinLock + 4) = v20;
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
        v27 = (v26 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v26;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v19);
  return 0;
}
