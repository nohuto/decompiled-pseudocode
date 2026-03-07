__int64 __fastcall RtlCreateUserProcessEx(__int64 a1, __int64 a2)
{
  int v2; // r9d
  unsigned int v3; // r10d
  int v4; // edx
  int v5; // r8d
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = a2;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v3 = *(_DWORD *)(a2 + 8);
  if ( (v3 & 1) == 0 )
  {
    v7 = *(_QWORD *)(a2 + 64);
    if ( v7 )
      *(_QWORD *)(a2 + 64) = a2 + v7;
    v8 = *(_QWORD *)(a2 + 88);
    if ( v8 )
      *(_QWORD *)(a2 + 88) = a2 + v8;
    v9 = *(_QWORD *)(a2 + 104);
    if ( v9 )
      *(_QWORD *)(a2 + 104) = a2 + v9;
    v10 = *(_QWORD *)(a2 + 120);
    if ( v10 )
      *(_QWORD *)(a2 + 120) = a2 + v10;
    v11 = *(_QWORD *)(a2 + 184);
    if ( v11 )
      *(_QWORD *)(a2 + 184) = a2 + v11;
    v12 = *(_QWORD *)(a2 + 200);
    if ( v12 )
      *(_QWORD *)(a2 + 200) = a2 + v12;
    v13 = *(_QWORD *)(a2 + 216);
    if ( v13 )
      *(_QWORD *)(a2 + 216) = a2 + v13;
    v14 = *(_QWORD *)(a2 + 232);
    if ( v14 )
      *(_QWORD *)(a2 + 232) = a2 + v14;
    v15 = *(_QWORD *)(a2 + 1048);
    if ( v15 )
      *(_QWORD *)(a2 + 1048) = a2 + v15;
    v3 |= 1u;
    *(_DWORD *)(a2 + 8) = v3;
  }
  *(_QWORD *)(a2 + 72) = 0LL;
  v4 = (v3 >> 11) & 0x80 | 0x40;
  if ( (v3 & 0x400000) == 0 )
    v4 = (v3 >> 11) & 0x80;
  v5 = v4 | 0x40000;
  if ( (v3 & 0x800000) == 0 )
    v5 = v4;
  return RtlpCreateUserProcess(a1, v2, v5, v2);
}
