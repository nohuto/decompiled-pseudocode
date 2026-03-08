/*
 * XREFs of RIMAbIsDeviceArbitrationEnabled @ 0x1C00EF900
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01AA284 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMIsDeviceArbitrationEnabled @ 0x1C01AADA0 (RIMIsDeviceArbitrationEnabled.c)
 *     rimProcessPointerDeviceContact @ 0x1C01D9C8C (rimProcessPointerDeviceContact.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C01FE660 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMAbIsDeviceArbitrationEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 436) != 0;
}
