/*
 * XREFs of HUBMISC_TypeCCompanionHasIdenticalDeviceAttached @ 0x1C0034144
 * Callers:
 *     HUBDSM_AddingDeviceToGlobalChildList @ 0x1C0023150 (HUBDSM_AddingDeviceToGlobalChildList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     HUBCONNECTOR_GetCompanionPort @ 0x1C0082380 (HUBCONNECTOR_GetCompanionPort.c)
 */

bool __fastcall HUBMISC_TypeCCompanionHasIdenticalDeviceAttached(__int64 a1)
{
  __int64 v1; // rsi
  bool v2; // bl
  __int64 v4; // rax
  __int64 CompanionPort; // rax
  _WORD *v6; // rdx
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0;
  if ( !v1 || (*(_DWORD *)(v1 + 204) & 0x200) == 0 || *(_DWORD *)(v1 + 208) == 512 )
    return 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v4 + 56),
    0LL);
  CompanionPort = HUBCONNECTOR_GetCompanionPort(v1, 1LL);
  if ( CompanionPort )
  {
    if ( (*(_DWORD *)(CompanionPort + 1336) & 0x40) != 0 )
    {
      v6 = *(_WORD **)(CompanionPort + 1328);
      if ( v6 )
      {
        if ( v6[998] == *(_WORD *)(a1 + 1996) && v6[999] == *(_WORD *)(a1 + 1998) )
          v2 = v6[1000] == *(_WORD *)(a1 + 2000);
      }
    }
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v7 + 56));
  return v2;
}
