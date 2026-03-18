/*
 * XREFs of CmCallbackReleaseKeyObjectIDEx @ 0x1406D4CE0
 * Callers:
 *     <none>
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14022CEF4 (CmpFreeTransientPoolWithTag.c)
 */

void __fastcall CmCallbackReleaseKeyObjectIDEx(void *a1)
{
  CmpFreeTransientPoolWithTag(a1, 0x624E4D43u);
}
