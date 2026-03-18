/*
 * XREFs of PiDqQueryIsObjectInResultSet @ 0x1407E21F4
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x1407871A4 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14022CF30 (RtlLookupElementGenericTableAvl.c)
 */

bool __fastcall PiDqQueryIsObjectInResultSet(__int64 a1, __int64 a2)
{
  __int64 Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  return RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) != 0LL;
}
