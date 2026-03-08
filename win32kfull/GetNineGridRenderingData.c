/*
 * XREFs of GetNineGridRenderingData @ 0x1C00F5540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNineGridRenderingData(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rcx
  __int64 result; // rax

  v8 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  *a1 = v8 + 8752;
  *a2 = v8 + 9280;
  *a3 = v8 + 9264;
  result = v8 + 9288;
  *a4 = v8 + 9288;
  return result;
}
