/*
 * XREFs of PfpRepurposeNameLoggingTrace @ 0x1407E6908
 * Callers:
 *     PfTFreeTraceDump @ 0x14035BBA8 (PfTFreeTraceDump.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x14035B6E4 (PfFbBufferListInsertInFree.c)
 */

void __fastcall PfpRepurposeNameLoggingTrace(PVOID P)
{
  PfFbBufferListInsertInFree(
    (_SLIST_ENTRY *)&stru_140C64EA0,
    (struct _SLIST_ENTRY *)P,
    *((_DWORD *)P + 13),
    *((_DWORD *)P + 14),
    1);
}
