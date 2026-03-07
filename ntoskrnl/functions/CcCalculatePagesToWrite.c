__int64 __fastcall CcCalculatePagesToWrite(__int64 a1, int a2, __int64 a3, unsigned __int64 *a4, char a5)
{
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8

  if ( (unsigned int)(a2 - 1) <= 1 || a2 == 16 )
  {
    v7 = *(_QWORD *)a3;
  }
  else
  {
    v6 = *(_QWORD *)a3;
    v7 = v6;
    v8 = *(_QWORD *)(a3 + 8);
    v9 = *a4;
    v10 = a4[1];
    v11 = *(unsigned int *)(a3 + 16);
    v12 = *((unsigned int *)a4 + 6);
    if ( v6 > (unsigned int)CcMaxLazyWritePages || (a5 & 1) != 0 )
      v7 = v6 >> 3;
    v13 = 0LL;
    if ( v11 + v6 > v8 )
      v13 = v6 + v11 - v8;
    v14 = v13 + v6 - v7;
    if ( v14 > v12 )
    {
      v7 = v13 + v6 - v12;
      if ( v9 < v10 || *(_QWORD *)(**(_QWORD **)(a1 + 8) + 17216LL) < 0x1000uLL )
        v7 += 2 * (v14 - v12);
    }
    if ( v7 > v6 )
      v7 = v6;
  }
  if ( v7 > 0xFFFFFFFF )
    LODWORD(v7) = -1;
  return (unsigned int)v7;
}
