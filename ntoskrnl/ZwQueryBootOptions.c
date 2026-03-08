/*
 * XREFs of ZwQueryBootOptions @ 0x140414C30
 * Callers:
 *     DifZwQueryBootOptionsWrapper @ 0x1405F13B0 (DifZwQueryBootOptionsWrapper.c)
 *     BiQueryBootOptions @ 0x14082BCCC (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140A5D1A4 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryBootOptions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
