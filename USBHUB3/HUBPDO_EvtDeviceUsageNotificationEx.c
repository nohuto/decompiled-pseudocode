/*
 * XREFs of HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C001CA80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBPDO_AllocateForwardProgressResources @ 0x1C001C944 (HUBPDO_AllocateForwardProgressResources.c)
 *     HUBMISC_DbgBreak @ 0x1C0032F4C (HUBMISC_DbgBreak.c)
 *     HUBBOOT_RegisterBootDevice @ 0x1C003F9F8 (HUBBOOT_RegisterBootDevice.c)
 *     HUBBOOT_IsBootDeviceExternal @ 0x1C003FAF4 (HUBBOOT_IsBootDeviceExternal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     HUBREG_UpdateSqmFlags @ 0x1C0088158 (HUBREG_UpdateSqmFlags.c)
 *     WMI_RegisterSurpriseRemovalNotificationInstance @ 0x1C008C2C4 (WMI_RegisterSurpriseRemovalNotificationInstance.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceUsageNotificationEx(__int64 a1, int a2, char a3)
{
  bool v6; // r14
  __int64 v7; // rbx
  unsigned int ForwardProgressResources; // esi
  __int64 v9; // rax
  int v10; // edi
  int v11; // edi
  __int64 v12; // r10
  char IsBootDeviceExternal; // al
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax

  v6 = RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A0F8);
  ForwardProgressResources = 0;
  v9 = *(_QWORD *)(v7 + 24);
  if ( (*(_DWORD *)(v9 + 1640) & 0x10) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v9 + 1640), 0x10u);
    HUBREG_UpdateSqmFlags(*(_QWORD *)(v7 + 24));
  }
  v10 = a2 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
      if ( !a3 )
        return ForwardProgressResources;
LABEL_28:
      *(_BYTE *)(*(_QWORD *)(v7 + 24) + 1512LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1280LL) = 1;
      return ForwardProgressResources;
    }
    if ( v11 != 2 )
      return ForwardProgressResources;
  }
  else
  {
    IsBootDeviceExternal = HUBBOOT_IsBootDeviceExternal(a1);
    if ( !v6 && IsBootDeviceExternal && (*(_DWORD *)(v7 + 32) & 0x20) == 0 )
      return (unsigned int)-1073741637;
  }
  if ( (*(_DWORD *)(v7 + 32) & 0x20) != 0 )
    return ForwardProgressResources;
  ForwardProgressResources = HUBPDO_AllocateForwardProgressResources(*(_QWORD **)(v7 + 24));
  if ( (ForwardProgressResources & 0x80000000) != 0 )
    return ForwardProgressResources;
  v12 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL);
  if ( (*(_DWORD *)(v12 + 1336) & 1) != 0 )
  {
    if ( !v6 )
    {
      if ( (unsigned __int8)HUBBOOT_IsBootDeviceExternal(a1) )
      {
        v14 = HUBBOOT_RegisterBootDevice(*(_QWORD *)(v7 + 24), *(_QWORD *)(v7 + 24) + 2232LL);
        v15 = *(unsigned int *)(*(_QWORD *)(v7 + 24) + 1632LL);
        if ( (v15 & 2) == 0 )
          WMI_RegisterSurpriseRemovalNotificationInstance(a1);
        if ( v14 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    WdfDriverGlobals->Driver,
                    off_1C006A1E8);
            WPP_RECORDER_SF_d(
              *(_QWORD *)(v16 + 64),
              2u,
              2u,
              0x99u,
              (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
              v14);
          }
          HUBMISC_DbgBreak("ExRegisterBootDevice Failed", v15);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                WdfDriverGlobals->Driver,
                off_1C006A1E8);
        WPP_RECORDER_SF_(
          *(_QWORD *)(v17 + 64),
          2u,
          2u,
          0x9Au,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
      }
      _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x20u);
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1336LL), 2u);
    }
    goto LABEL_28;
  }
  ForwardProgressResources = -1073741810;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v12 + 1432),
      2u,
      5u,
      0x98u,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
      -1073741810);
  return ForwardProgressResources;
}
