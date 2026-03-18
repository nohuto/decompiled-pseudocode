/*
 * XREFs of IsPointerDeviceAccessible @ 0x1C0149DD0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall IsPointerDeviceAccessible(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 24) != 7
    || (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1256) & 0x10000) != 0 )
  {
    return 1;
  }
  return v1;
}
