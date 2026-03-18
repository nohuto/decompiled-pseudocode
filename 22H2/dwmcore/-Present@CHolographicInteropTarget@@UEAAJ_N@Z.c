/*
 * XREFs of ?Present@CHolographicInteropTarget@@UEAAJ_N@Z @ 0x1802A97B0
 * Callers:
 *     ?Present@CHolographicInteropTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x180121820 (-Present@CHolographicInteropTarget@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicInteropTarget::Present(LARGE_INTEGER *this)
{
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  ++this[-13].HighPart;
  QueryPerformanceCounter(&PerformanceCount);
  this[-12] = PerformanceCount;
  return 0LL;
}
