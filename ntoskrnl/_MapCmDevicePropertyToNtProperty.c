/*
 * XREFs of _MapCmDevicePropertyToNtProperty @ 0x140244CDC
 * Callers:
 *     _CmGetDeviceRegPropWorker @ 0x1406C9A04 (_CmGetDeviceRegPropWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapCmDevicePropertyToNtProperty(__int64 a1, int a2)
{
  int v2; // edx
  __int64 result; // rax
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx

  v2 = a2 - 15;
  if ( !v2 )
    return 1LL;
  result = 5LL;
  v4 = v2 - 5;
  if ( !v4 )
    return 2LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 3LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 4LL;
  v7 = v6 - 7;
  if ( v7 )
  {
    v8 = v7 - 2;
    if ( !v8 )
      return result;
    v9 = v8 - 1;
    if ( !v9 )
      return 6LL;
    v10 = v9 - 1;
    if ( !v10 )
      return 10LL;
    if ( v10 == 2 )
      return 11LL;
  }
  return 0LL;
}
