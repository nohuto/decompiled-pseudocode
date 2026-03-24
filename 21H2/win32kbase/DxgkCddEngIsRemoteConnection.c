/*
 * XREFs of DxgkCddEngIsRemoteConnection @ 0x1C007FA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCddEngIsRemoteConnection(_DWORD *a1, _QWORD *a2, int *a3)
{
  unsigned int v3; // r9d
  int v5; // ecx

  v3 = 0;
  if ( a1 )
    *a1 = gbConnected;
  if ( a2 )
    *a2 = gRemoteTerminalLuid;
  if ( a3 )
  {
    v5 = 1;
    if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu || !gRemoteSessionUseWddm )
      v5 = 0;
    *a3 = v5;
  }
  LOBYTE(v3) = gProtocolType != 0;
  return v3;
}
