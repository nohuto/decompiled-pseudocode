/*
 * XREFs of NtUserInitializePointerDeviceInjection @ 0x1C0172630
 * Callers:
 *     <none>
 * Callees:
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0172660 (NtUserInitializePointerDeviceInjectionEx.c)
 */

__int64 __fastcall NtUserInitializePointerDeviceInjection(int a1, int a2, int a3, int a4, __int64 a5)
{
  return NtUserInitializePointerDeviceInjectionEx(a1, a2, a3, a4, 0, a5);
}
