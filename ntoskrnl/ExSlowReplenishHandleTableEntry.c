/*
 * XREFs of ExSlowReplenishHandleTableEntry @ 0x1403126C0
 * Callers:
 *     NtWriteFile @ 0x1406B3A60 (NtWriteFile.c)
 *     PspReferenceCidTableEntry @ 0x1406DC0A0 (PspReferenceCidTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObWaitForMultipleObjects @ 0x1407D79B0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandle @ 0x1407DF424 (ObpReferenceObjectByHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExSlowReplenishHandleTableEntry(unsigned __int64 *a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  v1 = *a1;
  if ( (*a1 & 0x1FFFE) >= 0xFFFE )
    return 0LL;
  result = 0x7FFF - (unsigned int)(unsigned __int16)(v1 >> 1);
  *a1 = v1 & 0xFFFFFFFFFFFE0001uLL | 0xFFFE;
  return result;
}
