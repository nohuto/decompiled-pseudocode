/*
 * XREFs of KiAttemptBugcheckRecovery @ 0x140524CC4
 * Callers:
 *     KeBugCheck2 @ 0x140516A10 (KeBugCheck2.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402D0E60 (KeAreInterruptsEnabled.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035C8F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035CA50 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x1405024E0 (IoSaveBugCheckRecoveryStatus.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x140517FC4 (KiBugcheckUnloadDebugSymbols.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405186E8 (KiInvokeBugCheckEntryCallbacks.c)
 *     KiGetRecoveryInformation @ 0x140525020 (KiGetRecoveryInformation.c)
 *     KiRecordRecoveryFailure @ 0x14052509C (KiRecordRecoveryFailure.c)
 *     ExRebootSystemForRecovery @ 0x1405B2554 (ExRebootSystemForRecovery.c)
 */

void KiAttemptBugcheckRecovery()
{
  unsigned __int8 CurrentIrql; // si
  __int64 v1; // rcx
  bool v2; // r14
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *SchedulerAssist; // rcx
  bool v5; // zf
  struct _KPRCB *v6; // rax
  char v7; // cl
  struct _KPRCB *v8; // r9
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  unsigned __int8 v11; // cl
  _DWORD *v12; // r9
  unsigned __int8 v13; // cl
  struct _KPRCB *v14; // rax
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-60h] BYREF
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  __int128 v17; // [rsp+40h] [rbp-40h]
  __int128 v18; // [rsp+50h] [rbp-30h]
  __int64 v19; // [rsp+60h] [rbp-20h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-18h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( KiRecoveryCallbackCount > 0 )
  {
    if ( (_DWORD)KiBugCheckData == 127
      || (_DWORD)KiBugCheckData == 251
      || (_DWORD)KiBugCheckData == 265
      || (_DWORD)KiBugCheckData == 273
      || (_DWORD)KiBugCheckData == 313
      || (_DWORD)KiBugCheckData == 395
      || (_DWORD)KiBugCheckData == 131073 )
    {
      v1 = 1LL;
      goto LABEL_39;
    }
    CurrentIrql = KeGetCurrentIrql();
    KiGetRecoveryInformation(&KiBugcheckRecoveryInformation);
    v16 = 0LL;
    BYTE8(v16) = CurrentIrql;
    v17 = 0LL;
    v19 = 0LL;
    v18 = 0LL;
    IoSaveBugCheckRecoveryStatus((int *)&v16);
    KiInvokeBugCheckEntryCallbacks(0x3FFu, (__int64)&KiBugcheckRecoveryInformation, 0x20u);
    BYTE8(v16) = byte_140C2B047;
    LODWORD(v16) = 1;
    IoSaveBugCheckRecoveryStatus((int *)&v16);
    if ( !byte_140C2B047 )
    {
      v1 = 2LL;
LABEL_39:
      KiRecordRecoveryFailure(v1);
      return;
    }
    v2 = KeAreInterruptsEnabled();
    _enable();
    if ( CurrentIrql > 2u )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v5 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
          SchedulerAssist[5] &= 0xFFFF0007;
          if ( v5 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(2uLL);
    }
    v6 = KeGetCurrentPrcb();
    *(_DWORD *)Affinity.Reserved = 0;
    Affinity.Reserved[2] = 0;
    v7 = KiProcessorIndexToNumberMappingTable[v6->Number] & 0x3F;
    Affinity.Group = (unsigned int)KiProcessorIndexToNumberMappingTable[v6->Number] >> 6;
    Affinity.Mask = 1LL << v7;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v8 = KeGetCurrentPrcb();
        v9 = v8->SchedulerAssist;
        v5 = (v9[5] & 0xFFFF0001) == 0;
        v9[5] &= 0xFFFF0001;
        if ( v5 )
          KiRemoveSystemWorkPriorityKick((__int64)v8);
      }
    }
    __writecr8(0LL);
    KiRecoveryInProgress = 1;
    KiInvokeBugCheckEntryCallbacks(0x400u, (__int64)&KiBugcheckRecoveryInformation, 0x20u);
    KiRecoveryInProgress = 0;
    v17 = KiBugCheckData;
    LODWORD(v16) = 2;
    v19 = qword_140C2B560;
    BYTE8(v16) = byte_140C2B044;
    v18 = xmmword_140C2B550;
    IoSaveBugCheckRecoveryStatus((int *)&v16);
    if ( byte_140C2B044 )
    {
      KiBugcheckUnloadDebugSymbols();
      LOBYTE(v10) = CurrentIrql;
      ExRebootSystemForRecovery(v10);
    }
    else
    {
      KiRecordRecoveryFailure(3LL);
    }
    v11 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v11 <= 0xFu )
    {
      v12 = KeGetCurrentPrcb()->SchedulerAssist;
      v12[5] |= (-1 << (v11 + 1)) & 4;
    }
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    if ( CurrentIrql > 2u )
    {
      v13 = KeGetCurrentIrql();
      __writecr8(CurrentIrql);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu )
        {
          v14 = KeGetCurrentPrcb();
          *((_DWORD *)v14->SchedulerAssist + 5) |= ((1LL << (CurrentIrql + 1)) - 1) & ~((1LL << (v13 + 1)) - 1) & 0xFFFFFFFC;
        }
      }
    }
    if ( !v2 )
      _disable();
  }
}
