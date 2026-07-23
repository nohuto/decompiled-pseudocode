/*
 * XREFs of PfpRepurposeNameLoggingTrace @ 0x140634B24
 * Callers:
 *     PfTFreeTraceDump @ 0x14026E76C (PfTFreeTraceDump.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x14026E808 (PfFbBufferListInsertInFree.c)
 */

void __fastcall PfpRepurposeNameLoggingTrace(PVOID P)
{
  PfFbBufferListInsertInFree(
    (_SLIST_ENTRY *)&stru_140C4FCA0,
    (_SLIST_ENTRY *)P,
    *((_DWORD *)P + 13),
    *((_DWORD *)P + 14),
    1);
}
