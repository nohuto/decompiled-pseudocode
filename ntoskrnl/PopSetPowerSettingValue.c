/*
 * XREFs of PopSetPowerSettingValue @ 0x14068CFA0
 * Callers:
 *     PopScanIdleList @ 0x1402BC8E0 (PopScanIdleList.c)
 *     PopInitilizeAcDcSettings @ 0x140380E04 (PopInitilizeAcDcSettings.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopSetPowerSettingValueAcDc @ 0x14073BE70 (PopSetPowerSettingValueAcDc.c)
 *     PopSetSessionUserStatus @ 0x14073C8E4 (PopSetSessionUserStatus.c)
 *     PopSetSessionDisplayStatus @ 0x14079A2F0 (PopSetSessionDisplayStatus.c)
 *     PopSetNewPolicyValue @ 0x140825FDC (PopSetNewPolicyValue.c)
 * Callees:
 *     PopIncrementPowerSettingPendingUpdates @ 0x1402048C0 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x14020494C (PopDecrementPowerSettingPendingUpdates.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     PopSetNotificationWork @ 0x1402BCB00 (PopSetNotificationWork.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PopArePowerSettingsEqual @ 0x14068D3F8 (PopArePowerSettingsEqual.c)
 *     PopFindPowerSettingConfiguration @ 0x14068D434 (PopFindPowerSettingConfiguration.c)
 *     PopGetListHead @ 0x14068D4BC (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x14068D530 (PopStateIsSessionSpecific.c)
 *     PopValidatePowerSettingData @ 0x14068D570 (PopValidatePowerSettingData.c)
 *     PoRegisterPowerSettingCallback @ 0x14073B960 (PoRegisterPowerSettingCallback.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopSetPowerSettingValue(const GUID *a1, unsigned int a2, int a3, unsigned int a4, void *Src)
{
  size_t v5; // r13
  bool v6; // bp
  const GUID *v8; // r12
  _DWORD *v9; // r14
  void *v10; // r15
  __int64 v11; // rbx
  _DWORD *v12; // rbp
  __int64 v13; // rax
  _QWORD *v14; // rsi
  char v15; // r12
  __int64 i; // r15
  bool v17; // zf
  unsigned int v18; // edi
  _DWORD *v19; // rax
  char v20; // si
  signed __int32 v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *j; // rax
  __int64 Pool2; // rax
  __int64 ListHead; // rax
  __int64 *v32; // r8
  __int64 v33; // r10
  __int64 *v34; // rcx
  __int64 *v35; // r9
  __int64 v36; // rdx
  __int64 **v37; // rax
  __int64 **v38; // rdx
  __int64 *v39; // rdx
  __int64 *v40; // rax
  char IsSessionSpecific; // [rsp+40h] [rbp-68h]
  char v42; // [rsp+41h] [rbp-67h]
  char v43; // [rsp+42h] [rbp-66h]
  PVOID P; // [rsp+50h] [rbp-58h]
  __int64 PowerSettingConfiguration; // [rsp+60h] [rbp-48h]

  v5 = a4;
  v6 = 0;
  v42 = 0;
  v8 = a1;
  v9 = 0LL;
  v43 = 0;
  P = (PVOID)ExAllocatePool2(256LL, a4, 1952797520LL);
  v10 = P;
  if ( !P )
    return 3221225626LL;
  PopIncrementPowerSettingPendingUpdates(0);
  memmove(P, Src, (unsigned int)v5);
  PopValidatePowerSettingData(v8, (unsigned int)v5, P);
  IsSessionSpecific = PopStateIsSessionSpecific(v8);
  ExAcquireFastMutex(&PopSettingLock);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(v8, a2);
  v11 = PowerSettingConfiguration;
  if ( !PowerSettingConfiguration )
  {
    Pool2 = ExAllocatePool2(256LL, 88LL, 1952797520LL);
    PowerSettingConfiguration = Pool2;
    v11 = Pool2;
    if ( !Pool2 )
    {
      v18 = -1073741670;
      v20 = 0;
      goto LABEL_24;
    }
    *(GUID *)(Pool2 + 32) = *v8;
    ListHead = PopGetListHead(v8);
    v32 = (__int64 *)(v11 + 16);
    v33 = ListHead;
    *(_QWORD *)(v11 + 24) = v11 + 16;
    *(_QWORD *)(v11 + 16) = v11 + 16;
    if ( !IsSessionSpecific )
    {
      v34 = (__int64 *)PopRegisteredPowerSettingCallbacks;
      while ( v34 != &PopRegisteredPowerSettingCallbacks )
      {
        v35 = v34;
        v34 = (__int64 *)*v34;
        v36 = *(__int64 *)((char *)v35 + 36) - *(_QWORD *)&v8->Data1;
        if ( !v36 )
          v36 = *(__int64 *)((char *)v35 + 44) - *(_QWORD *)v8->Data4;
        if ( !v36 )
        {
          v37 = (__int64 **)v34[1];
          if ( *v37 != v34 )
            goto LABEL_61;
          v38 = (__int64 **)v37[1];
          if ( *v38 != (__int64 *)v37 )
            goto LABEL_61;
          v34[1] = (__int64)v38;
          *v38 = v34;
          v39 = *(__int64 **)(v11 + 24);
          if ( (__int64 *)*v39 != v32 )
            goto LABEL_61;
          *v37 = v32;
          v37[1] = v39;
          *v39 = (__int64)v37;
          *(_QWORD *)(v11 + 24) = v37;
        }
      }
      a2 = -1;
    }
    *(_DWORD *)(v11 + 48) = a2;
    v40 = *(__int64 **)(v33 + 8);
    if ( *v40 != v33 )
LABEL_61:
      __fastfail(3u);
    *(_QWORD *)(v11 + 8) = v40;
    *(_QWORD *)v11 = v33;
    *v40 = v11;
    *(_QWORD *)(v33 + 8) = v11;
    v42 = 1;
    if ( PopPopPowerSettingSetChangeNotification )
      v43 = 1;
  }
  v12 = *(_DWORD **)(v11 + 8LL * a3 + 64);
  if ( (unsigned __int8)PopArePowerSettingsEqual(v12, P, (unsigned int)v5) )
  {
    v6 = 0;
    v18 = 0;
  }
  else
  {
    v13 = a3;
    v14 = (_QWORD *)(v11 + 64);
    v15 = 0;
    for ( i = 0LL; i < 3; ++i )
    {
      if ( i != v13 )
      {
        if ( !v9 )
        {
          v17 = (unsigned __int8)PopArePowerSettingsEqual(*v14, P, (unsigned int)v5) == 0;
          v13 = a3;
          if ( !v17 )
          {
            v9 = (_DWORD *)*v14;
            ++*(_DWORD *)*v14;
          }
        }
        if ( (_DWORD *)*v14 == v12 )
          v15 = 1;
      }
      ++v14;
    }
    v18 = 0;
    if ( v9 )
    {
      v10 = P;
      v20 = 1;
    }
    else
    {
      v19 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(v5 + 12), 1952797520LL);
      v9 = v19;
      if ( !v19 )
      {
        v6 = 0;
        v18 = -1073741670;
        v10 = P;
        v8 = a1;
        v20 = 0;
        goto LABEL_24;
      }
      v20 = 1;
      v19[1] = v5;
      *v19 = 1;
      do
        v21 = _InterlockedIncrement(&PopPowerSettingChangeStamp);
      while ( !v21 );
      v10 = P;
      v9[2] = v21;
      memmove(v9 + 3, P, v5);
    }
    if ( v12 )
    {
      if ( !v15 )
      {
        for ( j = *(_QWORD **)(PowerSettingConfiguration + 16);
              j != (_QWORD *)(PowerSettingConfiguration + 16);
              j = (_QWORD *)*j )
        {
          if ( (_DWORD *)j[9] == v12 )
            j[9] = 0LL;
        }
      }
      v17 = (*v12)-- == 1;
      if ( v17 )
        ExFreePoolWithTag(v12, 0x74655350u);
    }
    v6 = 0;
    *(_QWORD *)(PowerSettingConfiguration + 8LL * a3 + 64) = v9;
    if ( dword_140C3D48C == a3 )
      v6 = IsSessionSpecific == 0;
    if ( *(_DWORD *)(PowerSettingConfiguration + 56) || *(_DWORD *)(PowerSettingConfiguration + 60) )
    {
      v8 = a1;
      *(_DWORD *)(PowerSettingConfiguration + 52) |= 1u;
      goto LABEL_24;
    }
    v8 = a1;
  }
  v20 = 0;
LABEL_24:
  ExReleaseFastMutex(&PopSettingLock);
  if ( v42 )
    PoRegisterPowerSettingCallback(0LL, v8, PopTracePowerSettingChange, 0LL, 0LL);
  ExFreePoolWithTag(v10, 0x74655350u);
  if ( (unsigned int)PopOsInitPhase >= 3 )
  {
    if ( v43 )
      ZwUpdateWnfStateData((__int64)&PopPopPowerSettingSetChangeNotification, 0LL);
    if ( v6 )
    {
      PopIncrementPowerSettingPendingUpdates(1);
      PopSetNotificationWork(0x20u, v26, v27, v28);
    }
    if ( v20 )
      PopSetNotificationWork(0x80u, v22, v23, v24);
  }
  PopDecrementPowerSettingPendingUpdates(0);
  return v18;
}
