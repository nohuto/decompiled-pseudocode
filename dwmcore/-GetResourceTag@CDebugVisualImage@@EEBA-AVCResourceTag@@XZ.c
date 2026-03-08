/*
 * XREFs of ?GetResourceTag@CDebugVisualImage@@EEBA?AVCResourceTag@@XZ @ 0x180106540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDebugVisualImage::GetResourceTag(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 8) = 22;
  *(_QWORD *)a2 = "DWM Debug Visual Image";
  return a2;
}
