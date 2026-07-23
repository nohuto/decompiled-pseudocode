/*
 * XREFs of HvpGenerateLogEntryDirtyData @ 0x140331580
 * Callers:
 *     HvpGenerateLogEntry @ 0x140720D30 (HvpGenerateLogEntry.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140253090 (RtlNumberOfSetBits.c)
 *     HvpCopyDataToOffsetArray @ 0x1403331A0 (HvpCopyDataToOffsetArray.c)
 *     HvpFindNextDirtyBlock @ 0x1406BEED8 (HvpFindNextDirtyBlock.c)
 *     HvpCountSetRangesInVector @ 0x1406BF180 (HvpCountSetRangesInVector.c)
 *     CmpLogDirtyVectorUse @ 0x140720FB0 (CmpLogDirtyVectorUse.c)
 */

__int64 __fastcall HvpGenerateLogEntryDirtyData(
        ULONG_PTR BugCheckParameter2,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _RTL_BITMAP *v6; // rdi
  int v10; // r9d
  __int64 v11; // rbx
  ULONG v12; // ebx
  unsigned int v13; // eax
  __int64 v15; // [rsp+90h] [rbp+40h] BYREF

  LODWORD(v15) = 0;
  v6 = (_RTL_BITMAP *)(BugCheckParameter2 + 88);
  LODWORD(a6) = 0;
  if ( (unsigned __int8)HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&v15, (__int64)&a6, 0) )
  {
    v11 = a5;
    do
      HvpCopyDataToOffsetArray(0, v15, a2, v10, a4, v11);
    while ( (unsigned __int8)HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&v15, (__int64)&a6, 0) );
  }
  v12 = RtlNumberOfSetBits(v6);
  v13 = HvpCountSetRangesInVector(v6);
  return CmpLogDirtyVectorUse(BugCheckParameter2, 2LL, v13, v12);
}
