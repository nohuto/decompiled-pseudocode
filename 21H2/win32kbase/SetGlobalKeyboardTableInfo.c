/*
 * XREFs of SetGlobalKeyboardTableInfo @ 0x1C00090B0
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1C0007210 (xxxChangeForegroundKeyboardTable.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0008658 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C01AAD20 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetGlobalKeyboardTableInfo(__int64 a1)
{
  __int64 result; // rax

  gpKbdTbl = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  if ( gpKL != a1 )
    gpKL = a1;
  ghKbdTblBase = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
  guKbdTblSize = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL);
  result = *(_QWORD *)(a1 + 48);
  gpKbdNlsTbl = *(_QWORD *)(result + 48);
  return result;
}
