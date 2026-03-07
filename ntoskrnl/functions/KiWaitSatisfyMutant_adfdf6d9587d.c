_QWORD *__fastcall KiWaitSatisfyMutant(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r9
  char v4; // al
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  _QWORD *result; // rax
  int v9; // [rsp+0h] [rbp-28h]

  v3 = 0;
  if ( *(_BYTE *)(a1 + 49) )
    --*(_WORD *)(a2 + 484);
  if ( *(_QWORD *)(a3 + 8) == a2 )
    v3 = *(_BYTE *)(a3 + 13242);
  v9 = *(_DWORD *)a1;
  BYTE2(v9) = v3;
  *(_DWORD *)a1 = v9;
  v4 = *(_BYTE *)(a1 + 48);
  *(_QWORD *)(a1 + 40) = a2;
  if ( (v4 & 1) != 0 )
  {
    *(_BYTE *)(a1 + 48) = v4 & 0xFE;
    *(_QWORD *)(a2 + 200) |= 0x80uLL;
  }
  v5 = a1 & -(__int64)((*(_BYTE *)(a1 + 48) & 2) != 0);
  v6 = (_QWORD *)(a1 + 24);
  *(_QWORD *)(a2 + 976) = v5;
  v7 = a2 + 776;
  result = *(_QWORD **)(v7 + 8);
  if ( *result != v7 )
    __fastfail(3u);
  *v6 = v7;
  v6[1] = result;
  *result = v6;
  *(_QWORD *)(v7 + 8) = v6;
  return result;
}
