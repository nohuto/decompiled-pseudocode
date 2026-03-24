/*
 * XREFs of IsPointerDeviceAccessible @ 0x1C011E290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPointerDeviceAccessible(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 24) != 7 || (*((_DWORD *)gptiCurrent + 308) & 0x10000) != 0 )
    return 1;
  return v1;
}
