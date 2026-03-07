_QWORD *__fastcall SmmCoalesceBlocks(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *result; // rax

  do
  {
    SmmRemoveBlockFromPool(a1 + 24 * ((a3[4] >> 53) & 0x3FLL), a3);
    v7 = a3[4];
    if ( (v7 & 0xFFFFFFFFFFFFFuLL) >= (a2[4] & 0xFFFFFFFFFFFFFuLL) )
      v7 = a2[4];
    v6 = a3[4];
    a3[4] = v6 ^ (v6 ^ v7) & 0xFFFFFFFFFFFFFLL ^ (v6 ^ (v6 ^ v7) & 0xFFFFFFFFFFFFFLL ^ ((v6 ^ (v6 ^ v7) & 0xFFFFFFFFFFFFFLL)
                                                                                      + 0x20000000000000LL)) & 0x7E0000000000000LL;
    v8 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 )
      goto LABEL_14;
    v9 = (_QWORD *)a2[1];
    if ( (_QWORD *)*v9 != a2 )
      goto LABEL_14;
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    ExFreePoolWithTag(a2, 0);
    a2 = a3;
    v10 = a3[4] >> 53;
    v11 = a3[4] & 0xFFFFFFFFFFFFFLL;
    v12 = 1LL << (v10 & 0x3F);
    if ( ((2 * v12 - 1) & v11) != 0 )
    {
      a3 = (_QWORD *)a3[1];
    }
    else
    {
      if ( (unsigned __int64)(v11 + v12) >= *(_QWORD *)(a1 + 1248) >> 12 )
        break;
      a3 = (_QWORD *)*a3;
    }
  }
  while ( (((unsigned __int8)v10 ^ (unsigned __int8)(a3[4] >> 53)) & 0x3F) == 0
       && a3
       && (a3[4] & 0x10000000000000LL) == 0 );
  v13 = (_DWORD *)(a1 + 24 * (v10 & 0x3F));
  v14 = *(_QWORD *)v13;
  result = a2 + 2;
  if ( *(_DWORD **)(*(_QWORD *)v13 + 8LL) != v13 )
LABEL_14:
    __fastfail(3u);
  *result = v14;
  a2[3] = v13;
  *(_QWORD *)(v14 + 8) = result;
  *(_QWORD *)v13 = result;
  ++v13[4];
  return result;
}
