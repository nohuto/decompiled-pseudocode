/*
 * XREFs of GetgpniFontsDirectoryAndScratch @ 0x1C00F5F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgpniFontsDirectoryAndScratch(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // r9
  __int64 result; // rax

  v6 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  *a1 = v6 + 19912;
  *a2 = v6 + 19920;
  result = *(_QWORD *)(v6 + 19904);
  *a3 = result;
  return result;
}
