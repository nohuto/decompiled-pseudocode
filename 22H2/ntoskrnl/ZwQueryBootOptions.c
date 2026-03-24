/*
 * XREFs of ZwQueryBootOptions @ 0x1403FC240
 * Callers:
 *     BiQueryBootOptions @ 0x140972984 (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140973FF8 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryBootOptions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
