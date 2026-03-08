/*
 * XREFs of ObpDeleteDirectoryEntry @ 0x14076F100
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140696BDC (ObpInsertOrLocateNamedObject.c)
 *     ObpCloseHandle @ 0x1407C2500 (ObpCloseHandle.c)
 *     ObpDeleteNameCheck @ 0x1407D85E0 (ObpDeleteNameCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObpUnlockDirectory @ 0x140699588 (ObpUnlockDirectory.c)
 *     ObpDeleteDirectoryName @ 0x14076F180 (ObpDeleteDirectoryName.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall ObpDeleteDirectoryEntry(_QWORD *P, void **a2)
{
  char *v2; // rsi
  void *v4; // rdi

  v2 = (char *)P[1];
  v4 = *a2;
  ObpUnlockDirectory((__int64)a2);
  ExFreePoolWithTag(P, 0);
  ObfDereferenceObjectWithTag(v4, 0x6944624Fu);
  if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(v2 - 24) ^ ((unsigned __int16)((_WORD)v2 - 48) >> 8))) == ObpDirectoryObjectType->Index )
    return ObpDeleteDirectoryName(v2);
  else
    return ObfDereferenceObjectWithTag(v2, 0x6944624Fu);
}
