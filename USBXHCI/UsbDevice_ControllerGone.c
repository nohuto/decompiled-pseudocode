/*
 * XREFs of UsbDevice_ControllerGone @ 0x1C0048450
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C0033990 (Controller_InitiateRecovery.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbDevice_ControllerGone(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v2 = a1 + 176;
  v3 = 31LL;
  do
  {
    if ( *(_QWORD *)v2 )
      ESM_AddEvent((KSPIN_LOCK *)(*(_QWORD *)v2 + 296LL), 19);
    v2 += 8LL;
    --v3;
  }
  while ( v3 );
  v4 = *(_QWORD *)(a1 + 424);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 424) = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
      WdfDriverGlobals,
      v4,
      *(_BYTE *)(a1 + 432) == 0 ? 0xC00000E5 : 0);
  }
}
