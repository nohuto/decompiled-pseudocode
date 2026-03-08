/*
 * XREFs of VidMmSetVidSchDevice @ 0x1C0018B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmSetVidSchDevice(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 32) = a2;
}
