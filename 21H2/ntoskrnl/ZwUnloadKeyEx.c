/*
 * XREFs of ZwUnloadKeyEx @ 0x1403FDD00
 * Callers:
 *     PiDrvDbUnloadHive @ 0x140726048 (PiDrvDbUnloadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKeyEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
