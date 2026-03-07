_BYTE *__fastcall RtlpCreateRangeListEntry(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  _BYTE *result; // rax

  result = ExAllocateFromNPagedLookasideList(&RtlpRangeListEntryLookasideList);
  if ( result )
  {
    result[33] = 0;
    *((_WORD *)result + 17) = 0;
    *((_QWORD *)result + 3) = a5;
    *(_QWORD *)result = a1;
    *((_QWORD *)result + 1) = a2;
    result[32] = a3;
    *((_QWORD *)result + 2) = a4;
  }
  return result;
}
