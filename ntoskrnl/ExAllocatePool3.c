/*
 * XREFs of ExAllocatePool3 @ 0x140AAB320
 * Callers:
 *     KiAllocateLocalSharedReadyQueue @ 0x1403721F0 (KiAllocateLocalSharedReadyQueue.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403A28D0 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaInitialize @ 0x1403A5B5C (ExpSaInitialize.c)
 *     KeEtwInitializeCpuStarvationProvider @ 0x1403A807C (KeEtwInitializeCpuStarvationProvider.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403BFEBC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x1403C0224 (ExpSaBinaryArrayInsert.c)
 *     KiAllocateSchedulerSubNode @ 0x14056E238 (KiAllocateSchedulerSubNode.c)
 *     AstLogDeviceSDDLUpdated @ 0x14074EF88 (AstLogDeviceSDDLUpdated.c)
 *     IopAllocateMiniCompletionPacket @ 0x1407D0108 (IopAllocateMiniCompletionPacket.c)
 *     AstLogDeviceCreated @ 0x1407F0D60 (AstLogDeviceCreated.c)
 *     KiInitializeThreadCycleTable @ 0x140A89F10 (KiInitializeThreadCycleTable.c)
 *     IoVerifierCheckForSettingsChange @ 0x140ABDBF0 (IoVerifierCheckForSettingsChange.c)
 *     VerifierExAllocatePool3 @ 0x140ACDB20 (VerifierExAllocatePool3.c)
 *     VfHandlePoolAlloc @ 0x140ACDFB0 (VfHandlePoolAlloc.c)
 *     VfPendingCheckForChanges @ 0x140ACE7C0 (VfPendingCheckForChanges.c)
 *     VfKeCheckForChanges @ 0x140AD2BC0 (VfKeCheckForChanges.c)
 *     VfFaultsInitPhase0 @ 0x140AD2E18 (VfFaultsInitPhase0.c)
 *     ViPtInitCircularPoolTrace @ 0x140ADBE2C (ViPtInitCircularPoolTrace.c)
 *     ViIrqlInit @ 0x140AE5484 (ViIrqlInit.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140310130 (ExpAllocatePoolWithTagFromNode.c)
 *     MmResourcesAvailable @ 0x140311DB0 (MmResourcesAvailable.c)
 *     VslSecurePoolAllocate @ 0x14054A218 (VslSecurePoolAllocate.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140AAB128 (ExpAllocatePoolWithQuotaTag.c)
 */

__int64 __fastcall ExAllocatePool3(__int64 a1, ULONG_PTR a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbx
  char v6; // r15
  int v10; // esi
  __int64 v11; // r14
  char v12; // dl
  char v13; // r8
  __int64 v14; // rax
  int v15; // r9d
  int v16; // ecx
  POOL_TYPE v17; // ebp
  unsigned int v18; // r10d
  int *v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 PoolWithQuotaTag; // rax
  POOL_TYPE v25; // ecx
  int v26; // ecx
  unsigned int v27; // eax
  __int64 v28; // rdx
  struct _MDL *v29; // r9
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // [rsp+48h] [rbp-30h] BYREF

  v5 = 0LL;
  v6 = 0;
  v33 = 0LL;
  v10 = 16;
  LODWORD(v11) = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000;
  if ( a3 )
  {
    v12 = 0;
    v13 = 0;
    if ( (a1 & 0xFFFFF810) == 0 )
    {
      v14 = a1 & 0x1C0;
      switch ( v14 )
      {
        case 64LL:
          v15 = 512;
LABEL_5:
          if ( (a1 & 4) != 0 )
            v15 |= 0x20u;
          v16 = v15 | 0x400;
          if ( (a1 & 2) != 0 )
            v16 = v15;
          v17 = v16;
          if ( (a1 & 0x100000629LL) != 0 )
          {
            if ( (a1 & 8) != 0 )
              v17 = v16 | 4;
            if ( (a1 & 0x200) != 0 )
              v17 |= 0x80u;
            if ( (a1 & 0x400) != 0 )
              v17 |= 0x40u;
            v25 = v17;
            if ( (a1 & 1) != 0 )
            {
              v17 |= 8u;
              v12 = 1;
              if ( (a1 & 0x20) != 0 )
                v17 = v25;
            }
            else if ( (a1 & 0x20) != 0 )
            {
              v17 |= 0x10u;
            }
            if ( (a1 & 0x100000000LL) != 0 )
              v13 = 1;
          }
          v18 = 0;
          if ( !a5 )
          {
LABEL_20:
            if ( v13 )
            {
              v22 = 1;
              v10 |= 8u;
            }
            else
            {
              v22 = 0;
            }
            if ( v12 )
            {
              PoolWithQuotaTag = (__int64)ExpAllocatePoolWithQuotaTag(v17, a2, a3, v11);
            }
            else if ( v6 )
            {
              if ( v10 != 32 && !(unsigned int)MmResourcesAvailable(v17 & 0xDF, a2, v10) && a2 > 0xFE0 )
                goto LABEL_73;
              if ( (v10 & 8) != 0 )
                LODWORD(v5) = 1;
              PoolWithQuotaTag = ExpAllocatePoolWithTagFromNode(v17, a2, a3, v11, v5);
            }
            else
            {
              PoolWithQuotaTag = ExpAllocatePoolWithTagFromNode(v17, a2, a3, v11, v22);
            }
            v5 = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
              goto LABEL_73;
            return v5;
          }
          v19 = (int *)(a4 + 8);
          while ( 1 )
          {
            v20 = *((_QWORD *)v19 - 1);
            switch ( (unsigned __int8)v20 )
            {
              case 1u:
                if ( v12 )
                {
                  if ( (v20 & 0x100) == 0 )
                    goto LABEL_51;
                }
                else
                {
                  v10 = *v19;
                  if ( (*v19 & 0xFFFFFFCF) != 0 || v10 == 48 )
                    goto LABEL_51;
                  v6 = 1;
                }
                break;
              case 2u:
                if ( a1 != 64 )
                  goto LABEL_51;
                v21 = *(_QWORD *)v19;
                v33 = v21;
                if ( !v21 || a5 != 1 )
                  goto LABEL_51;
                goto LABEL_18;
              case 3u:
                v11 = (unsigned int)*v19;
                if ( (*v19 & 0x7FFFFFFFu) > (unsigned __int16)KeNumberNodes || v11 != *(_QWORD *)v19 || (a1 & 0x40) == 0 )
                  goto LABEL_51;
                break;
              default:
                if ( (v20 & 0x100) == 0 )
                  goto LABEL_51;
                break;
            }
            v21 = v33;
LABEL_18:
            ++v18;
            v19 += 4;
            if ( v18 >= a5 )
            {
              if ( !v21 )
                goto LABEL_20;
              v27 = *(_DWORD *)(v21 + 24);
              v28 = *(_QWORD *)(v21 + 16);
              v29 = *(struct _MDL **)(v21 + 8);
              v30 = *(_QWORD *)v21;
              v33 = 0LL;
              if ( !a2 || !v29 || !v30 )
                goto LABEL_73;
              v31 = VslSecurePoolAllocate(v30, a3, a2, v29, v28, v27, &v33);
              v32 = v33;
              if ( v31 < 0 )
                v32 = 0LL;
              v5 = v32;
              if ( !v32 )
              {
LABEL_73:
                v26 = -1073741670;
                goto LABEL_74;
              }
              return v5;
            }
          }
        case 128LL:
          v15 = 0;
          goto LABEL_5;
        case 256LL:
          v15 = 1;
          if ( (a1 & 0x10) != 0 )
            v15 = -2147483647;
          goto LABEL_5;
      }
    }
  }
LABEL_51:
  v26 = -1073741811;
LABEL_74:
  if ( (a1 & 0x20) != 0 )
    RtlRaiseStatus(v26);
  return v5;
}
