__int64 __fastcall IrqArbUpdateInterruptProperties(int a1, int a2, int a3)
{
  PVOID v6; // rdi
  PRTL_RANGE v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  PRTL_RANGE v10; // rbx
  PRTL_RANGE v11; // rax
  _OWORD v13[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v14; // [rsp+40h] [rbp-30h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+50h] [rbp-20h] BYREF
  PRTL_RANGE Range; // [rsp+A8h] [rbp+38h] BYREF

  Range = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  v6 = 0LL;
  RtlGetFirstRange(RangeList, &Iterator, &Range);
  v7 = Range;
  if ( !Range )
    return 3221226021LL;
  do
  {
    if ( (unsigned int)IrqArbGsivFromIrq(LODWORD(v7->Start)) == a1 )
    {
      v6 = *(PVOID *)(v9 + 24);
      *(_DWORD *)(v8 + 48) = a2;
      *(_DWORD *)(v8 + 44) = a3;
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
    v7 = Range;
  }
  while ( Range );
  if ( !v6 )
    return 3221226021LL;
  v13[0] = 0LL;
  v10 = 0LL;
  v14 = 0LL;
  RtlGetFirstRange(RangeList, &Iterator, &Range);
  v11 = Range;
  if ( !Range )
    return 3221226021LL;
  do
  {
    if ( v11->Owner == v6 )
    {
      if ( !v10 )
      {
        v10 = v11;
        v13[0] = *(_OWORD *)&Iterator.RangeListHead;
        v14 = *(_OWORD *)&Iterator.Current;
      }
      *((_DWORD *)v11->UserData + 1) |= 1u;
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
    v11 = Range;
  }
  while ( Range );
  if ( !v10 )
    return 3221226021LL;
  v13[1] = v14;
  return IrqArbpSetDeviceProperties(v10, v13);
}
