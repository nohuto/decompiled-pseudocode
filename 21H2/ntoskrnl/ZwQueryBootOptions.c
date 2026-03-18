/*
 * XREFs of ZwQueryBootOptions @ 0x14041E040
 * Callers:
 *     DifZwQueryBootOptionsWrapper @ 0x140623A30 (DifZwQueryBootOptionsWrapper.c)
 *     BiQueryBootOptions @ 0x140A2089C (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140A22034 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryBootOptions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
