/*
 * XREFs of ZwGetNlsSectionPtr @ 0x140414310
 * Callers:
 *     RtlpGetNormalization @ 0x1409C5918 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetNlsSectionPtr(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
