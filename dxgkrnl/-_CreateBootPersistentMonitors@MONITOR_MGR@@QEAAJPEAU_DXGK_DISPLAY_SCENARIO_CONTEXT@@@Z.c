/*
 * XREFs of ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0215610
 * Callers:
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0215598 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0167EEC (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01F83FC (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C02156A4 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C343C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C03C3F00 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateBootPersistentMonitors(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v5; // rsi
  ULONG v7; // ebx
  _DWORD *v8; // rdi
  _DWORD *v9; // r12
  const WCHAR *v10; // r15
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  __int64 v17; // r8
  NTSTATUS v18; // eax
  __int64 v19; // r14
  __int64 v20; // r14
  int IsTargetForceable; // eax
  __int64 v22; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v23; // r14
  _QWORD *v24; // rbx
  __int64 v25; // rdx
  int v26; // edi
  NTSTATUS v27; // eax
  bool v28; // [rsp+30h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-81h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-79h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v31; // [rsp+48h] [rbp-71h] BYREF
  UNICODE_STRING String2; // [rsp+50h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  char KeyValueInformation[12]; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v35; // [rsp+7Ch] [rbp-3Dh]
  WCHAR SourceString[32]; // [rsp+90h] [rbp-29h] BYREF

  v31 = a2;
  v5 = 0LL;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  KeyHandle = 0LL;
  if ( MONITOR_MGR::_OpenPersistencyRegistry(this, 0x20019u, &KeyHandle) < 0 )
    return 0LL;
  if ( !KeyHandle )
    WdLogSingleEntry0(1LL);
  v7 = -1;
  ResultLength = 0;
  v8 = 0LL;
LABEL_6:
  ++v7;
  if ( !v8 )
    goto LABEL_25;
  do
  {
    v9 = v8 + 2;
    v8[2] = -1;
    v10 = (const WCHAR *)(v8 + 3);
    v11 = ZwEnumerateValueKey(KeyHandle, v7, KeyValueBasicInformation, v8 + 3, 0x4Eu, &ResultLength);
    if ( v11 == -2147483622 )
    {
      v22 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
      *(_QWORD *)(v22 + 24) = v7;
      *(_QWORD *)(v22 + 32) = this;
      operator delete(v8);
      if ( v5 )
      {
        v23 = v31;
        do
        {
          v24 = v5;
          v5 = (_QWORD *)*v5;
          v25 = *((unsigned int *)v24 + 2);
          if ( (_DWORD)v25 == -1 )
          {
            v27 = RtlDeleteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, (PCWSTR)v24 + 12);
            if ( v27 < 0 )
              WdLogSingleEntry1(2LL, v27);
          }
          else
          {
            v31 = 0LL;
            v26 = MONITOR_MGR::_HandleCreateSimulatedMonitor(this, v25, 2LL, 0LL, &v31, v23);
            if ( v26 >= 0 && !v31 )
              WdLogSingleEntry0(1LL);
            MONITOR_MGR::_LogMonitorPresentEvent((__int64)this, 1073741825, *((_DWORD *)v24 + 2), v26, 0LL);
          }
          operator delete(v24);
        }
        while ( v5 );
      }
      ZwClose(KeyHandle);
      return 0LL;
    }
    if ( v11 < 0 )
    {
      WdLogSingleEntry2(3LL, v7, v11);
      goto LABEL_6;
    }
    *((_WORD *)v8 + ((unsigned __int64)(unsigned int)v8[5] >> 1) + 12) = 0;
    *(_QWORD *)v8 = v5;
    v5 = v8;
    v16 = v8[4];
    v8 = 0LL;
    if ( v16 != 4 )
    {
      v17 = v16;
      goto LABEL_13;
    }
    v18 = ZwEnumerateValueKey(KeyHandle, v7, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
    v19 = v18;
    if ( v18 == -2147483622 )
    {
      WdLogSingleEntry0(1LL);
LABEL_12:
      v17 = v19;
LABEL_13:
      WdLogSingleEntry2(3LL, v7, v17);
      goto LABEL_24;
    }
    if ( v18 < 0 )
      goto LABEL_12;
    v20 = v35;
    v28 = 0;
    IsTargetForceable = DmmIsTargetForceable(*(DXGADAPTER **)(*((_QWORD *)this + 3) + 16LL), v35, &v28, 0);
    if ( IsTargetForceable < 0 )
    {
      if ( IsTargetForceable == -1071774971 )
LABEL_23:
        WdLogSingleEntry1(3LL, v20);
    }
    else
    {
      if ( !v28 )
        goto LABEL_23;
      if ( MONITOR_MGR::_PersistencyRegNameFromTargetID(0LL, v20, SourceString) < 0 )
        goto LABEL_6;
      DestinationString = 0LL;
      String2 = 0LL;
      RtlInitUnicodeString(&DestinationString, v10 + 6);
      RtlInitUnicodeString(&String2, SourceString);
      if ( RtlCompareUnicodeString(&DestinationString, &String2, 0) )
        WdLogSingleEntry0(3LL);
      else
        *v9 = v20;
    }
LABEL_24:
    ++v7;
LABEL_25:
    v8 = (_DWORD *)operator new[](0x60uLL, 0x4D677844u, 256LL);
  }
  while ( v8 );
  WdLogSingleEntry0(6LL);
  return 3221225495LL;
}
