/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00C32AC
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0019760 (McGenControlCallbackV2.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkEtwEnableCallback()
{
  bool v0; // al

  v0 = (qword_1C0076010 & 0x461C8ED7) != 0 && (qword_1C0076018 & 0xFFFFFFFFB9E37128uLL) == 0;
  bTracingEnabled = v0;
}
