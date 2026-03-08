/*
 * XREFs of ZwLoadKeyEx @ 0x140414530
 * Callers:
 *     PiDrvDbLoadHive @ 0x140867788 (PiDrvDbLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKeyEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
