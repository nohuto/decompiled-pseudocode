/*
 * XREFs of ZwUnloadKeyEx @ 0x140415E30
 * Callers:
 *     PiDrvDbUnloadHive @ 0x14086773C (PiDrvDbUnloadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKeyEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
