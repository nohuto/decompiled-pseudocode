/*
 * XREFs of PiDqQueryDeleteObjectFromResultSet @ 0x1407E0334
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x1407871A4 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryFreeActiveData @ 0x1407E02C8 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14031E7F0 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x1406D6C18 (PiDmObjectRelease.c)
 */

void __fastcall PiDqQueryDeleteObjectFromResultSet(__int64 a1, char *a2)
{
  char *Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  if ( RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) )
    PiDmObjectRelease(Buffer);
}
