__int64 __fastcall SepCreateAccessStateFromSubjectContext(_OWORD *a1, _QWORD *a2, _QWORD *a3, int a4, _DWORD *a5)
{
  int v5; // edi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 result; // rax

  v5 = a4;
  if ( (a4 & 0xF0000000) != 0 && a5 )
  {
    if ( a4 < 0 )
      v5 = *a5 | a4;
    if ( (v5 & 0x40000000) != 0 )
      v5 |= a5[1];
    if ( (v5 & 0x20000000) != 0 )
      v5 |= a5[2];
    if ( (v5 & 0x10000000) != 0 )
      v5 |= a5[3];
    v5 &= 0xFFFFFFFu;
  }
  memset(a2, 0, 0xA0uLL);
  memset(a3, 0, 0xE0uLL);
  a2[9] = a3;
  *((_OWORD *)a2 + 2) = *a1;
  *((_OWORD *)a2 + 3) = a1[1];
  v9 = a2[4];
  if ( v9 )
  {
    v11 = a2[4];
    v10 = v11;
  }
  else
  {
    v10 = a2[6];
    v11 = v10;
  }
  if ( (*(_DWORD *)(v10 + 64) & *(_DWORD *)(v11 + 72) & 0x800000) != 0 )
    *((_DWORD *)a2 + 3) = 1;
  if ( !v9 )
    v9 = a2[6];
  *((_DWORD *)a2 + 3) |= *(_DWORD *)(v9 + 200) & 0x810;
  *((_DWORD *)a2 + 4) = v5;
  *((_DWORD *)a2 + 6) = v5;
  *a3 = a2 + 10;
  *a2 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  result = 0LL;
  if ( a5 )
    *(_OWORD *)(a3 + 1) = *(_OWORD *)a5;
  return result;
}
