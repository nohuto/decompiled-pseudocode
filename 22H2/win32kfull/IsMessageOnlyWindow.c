/*
 * XREFs of IsMessageOnlyWindow @ 0x1C00424C0
 * Callers:
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0010D74 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C003AFE4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0041F3C (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00423D8 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C00BAFA0 (NtUserSetBrokeredForeground.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0121240 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C645C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z @ 0x1C023A8A8 (-SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsMessageOnlyWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  if ( v1 )
    v2 = *(_QWORD *)(v1 + 104);
  return *(_QWORD *)(a1 + 104) == v2;
}
