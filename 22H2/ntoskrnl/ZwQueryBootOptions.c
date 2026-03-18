/*
 * XREFs of ZwQueryBootOptions @ 0x14041CFC0
 * Callers:
 *     DifZwQueryBootOptionsWrapper @ 0x1405F3860 (DifZwQueryBootOptionsWrapper.c)
 *     BiQueryBootOptions @ 0x140804AD4 (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140A5FEA4 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryBootOptions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
