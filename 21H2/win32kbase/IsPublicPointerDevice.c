/*
 * XREFs of IsPublicPointerDevice @ 0x1C01E8040
 * Callers:
 *     ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C01E2610 (-OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C01E27F0 (-OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C01F8448 (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPublicPointerDevice(__int64 a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
    return *(_DWORD *)(*(_QWORD *)(a1 + 472) + 24LL) != 7;
  return result;
}
