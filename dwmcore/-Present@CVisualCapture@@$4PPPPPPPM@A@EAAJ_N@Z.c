/*
 * XREFs of ?Present@CVisualCapture@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x18011A3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualCapture::Present(__int64 a1, bool a2)
{
  return CVisualCapture::Present((CVisualCapture *)(a1 - *(int *)(a1 - 4)), a2);
}
