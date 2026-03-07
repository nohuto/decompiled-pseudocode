__int64 __fastcall sub_14014C218(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  __int64 *v6; // rsi
  _QWORD *Pool2; // rax
  __int64 *v8; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // r8
  __int64 v22; // rdx

  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_1400736C0(Pool2, (__int64)L"framework::WolPatternsEventViewerLogger::GetArmedWakeString", (__int64)a1);
      if ( v8 )
        v6 = v8;
    }
  }
  *(_WORD *)(a2 + 8) = 0;
  *(_QWORD *)a2 = &off_1400D41D0;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  if ( a3[1] )
  {
    sub_1400011A8((_QWORD *)a2, a1[67], a1[68]);
    v9 = a1[63];
    v10 = a1[62];
    if ( *(_QWORD *)(a2 + 16) )
      sub_140001480((_QWORD *)a2, v10, v9);
    else
      sub_1400011A8((_QWORD *)a2, v10, v9);
  }
  if ( *a3 )
  {
    v11 = a1[78];
    v12 = a1[77];
    if ( *(_QWORD *)(a2 + 16) )
      sub_140001480((_QWORD *)a2, v12, v11);
    else
      sub_1400011A8((_QWORD *)a2, v12, v11);
    v13 = a1[63];
    v14 = a1[62];
    if ( *(_QWORD *)(a2 + 16) )
      sub_140001480((_QWORD *)a2, v14, v13);
    else
      sub_1400011A8((_QWORD *)a2, v14, v13);
  }
  if ( a3[3] )
  {
    v15 = a1[73];
    v16 = a1[72];
    if ( *(_QWORD *)(a2 + 16) )
      sub_140001480((_QWORD *)a2, v16, v15);
    else
      sub_1400011A8((_QWORD *)a2, v16, v15);
    v17 = a1[63];
    v18 = a1[62];
    if ( *(_QWORD *)(a2 + 16) )
      sub_140001480((_QWORD *)a2, v18, v17);
    else
      sub_1400011A8((_QWORD *)a2, v18, v17);
  }
  if ( a3[2] )
  {
    v19 = a1[83];
    v20 = a1[82];
    if ( *(_QWORD *)(a2 + 16) )
      sub_140001480((_QWORD *)a2, v20, v19);
    else
      sub_1400011A8((_QWORD *)a2, v20, v19);
    v21 = a1[63];
    v22 = a1[62];
    if ( *(_QWORD *)(a2 + 16) )
      sub_140001480((_QWORD *)a2, v22, v21);
    else
      sub_1400011A8((_QWORD *)a2, v22, v21);
  }
  if ( v6 )
  {
    sub_140073F78(v6);
    ExFreePool(v6);
  }
  return a2;
}
