char __fastcall AcpiArblibIsAliasedRangeAvailable(__int64 a1, __int128 *a2)
{
  __int64 v4; // rdx
  UCHAR AttributeAvailableMask; // r14
  __int64 v6; // rcx
  __int128 v7; // xmm0
  ULONGLONG v8; // rdi
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int16 v11; // r12
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  int v15; // r15d
  __int64 v16; // rax
  char result; // al
  _OWORD v18[5]; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int8 Available; // [rsp+C8h] [rbp+6Fh] BYREF
  ULONGLONG Start; // [rsp+D0h] [rbp+77h] BYREF

  Available = 0;
  memset(v18, 0, sizeof(v18));
  v4 = *((_QWORD *)a2 + 4);
  AttributeAvailableMask = 0;
  if ( (*(_DWORD *)(v4 + 40) & 0xFFFFFFFD) == 0 || (*(_DWORD *)(v4 + 44) & 1) != 0 )
    AttributeAvailableMask = 1;
  v6 = *((_QWORD *)a2 + 5);
  v7 = *a2;
  v8 = *(_QWORD *)a2;
  v9 = a2[1];
  v10 = *(_QWORD *)(v6 + 40);
  Start = *(_QWORD *)a2;
  v11 = *(_WORD *)(v10 + 4);
  v18[0] = v7;
  v12 = a2[2];
  v18[1] = v9;
  v13 = a2[3];
  v18[2] = v12;
  v14 = a2[4];
  v18[3] = v13;
  v18[4] = v14;
  v15 = *(_DWORD *)(v6 + 36) & 1;
  while ( AcpiArblibGetNextAlias(v11, v8, &Start) )
  {
    v8 = Start;
    RtlIsRangeAvailable(
      *(PRTL_RANGE_LIST *)(a1 + 48),
      Start,
      *(_QWORD *)(*((_QWORD *)a2 + 5) + 16LL) + Start - 1,
      v15 + 2,
      AttributeAvailableMask,
      *(PVOID *)(a1 + 328),
      *(PRTL_CONFLICT_RANGE_CALLBACK *)(a1 + 336),
      &Available);
    if ( Available != 1 )
    {
      v16 = *((_QWORD *)a2 + 5);
      *(_QWORD *)&v18[1] = v8;
      *((_QWORD *)&v18[1] + 1) = *(_QWORD *)(v16 + 16) + v8 - 1;
      result = (*(__int64 (__fastcall **)(__int64, _OWORD *))(a1 + 272))(a1, v18);
      if ( !result )
        return result;
    }
  }
  return 1;
}
