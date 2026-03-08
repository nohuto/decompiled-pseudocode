/*
 * XREFs of PiDqQueryDeleteObjectFromResultSet @ 0x140791164
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x1406896F4 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryFreeActiveData @ 0x1407910F8 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140244F40 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 */

void __fastcall PiDqQueryDeleteObjectFromResultSet(__int64 a1, unsigned int *a2)
{
  unsigned int *Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  if ( RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) )
    PiDmObjectRelease(Buffer);
}
