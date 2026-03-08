/*
 * XREFs of wil::scope_exit__lambda_3c37ad0d9e9c71fe69a6ff6ac7bd17c8___ @ 0x1C012FC1C
 * Callers:
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x1C027798C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit__lambda_3c37ad0d9e9c71fe69a6ff6ac7bd17c8___(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
