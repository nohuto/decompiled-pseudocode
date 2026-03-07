__int64 __fastcall RtlpHpLfhSubsegmentFree(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v7; // eax
  unsigned int v8; // ebp
  int v9; // ebx
  int EmptyUnits; // eax
  int v12; // [rsp+68h] [rbp+20h] BYREF

  _InterlockedDecrement64((volatile signed __int64 *)(a3 + 64));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 56), -*(__int16 *)(a2 + 34));
  v12 = 0;
  v7 = 0;
  v8 = *(unsigned __int8 *)(a2 + 45);
  v9 = 0;
  if ( *(_BYTE *)(a2 + 45) )
  {
    do
    {
      EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(a2, v7, &v12);
      if ( EmptyUnits == -1 )
        break;
      v9 += v12;
      v7 = v12 + EmptyUnits;
    }
    while ( v7 < v8 );
    if ( v9 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
        -(__int64)((unsigned __int64)(unsigned int)(v9 << *(_BYTE *)(a2 + 44)) >> 12));
  }
  return ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16)))(
           *(_QWORD *)a1,
           a2,
           *(unsigned __int8 *)(a2 + 45) << *(_BYTE *)(a2 + 44),
           a4 & 1);
}
