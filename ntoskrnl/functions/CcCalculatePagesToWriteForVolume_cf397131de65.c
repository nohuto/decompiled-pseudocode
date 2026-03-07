__int64 __fastcall CcCalculatePagesToWriteForVolume(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rsi
  __int64 v6; // r8
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx

  v2 = 0LL;
  if ( (unsigned int)(a2 - 1) <= 1 || a2 == 16 )
  {
    v4 = *(_QWORD *)(a1 + 992);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 992);
    if ( !v4 )
      return (unsigned int)v4;
    v5 = *(_QWORD *)(a1 + 1000);
    v6 = *(unsigned int *)(a1 + 1008);
    v7 = *(unsigned int *)(a1 + 1040);
    v8 = *(_QWORD *)(a1 + 992);
    v9 = v4 / *(unsigned int *)(a1 + 1536);
    if ( v9 <= (unsigned int)CcMaxLazyWritePages )
      v9 = *(_QWORD *)(a1 + 992);
    v10 = 0LL;
    if ( v6 + v4 > v5 )
      v10 = v4 + (unsigned int)v6 - v5;
    v11 = v10 + v4 - v9;
    if ( v11 > v7 )
    {
      v2 = v11 - v7;
      v12 = (v11 - v7) / *(unsigned int *)(a1 + 1540);
      if ( v12 )
        v2 = v12;
    }
    v4 = v9 + v2;
    if ( EnableFeatureServicing_45016043 )
    {
      v13 = *(_QWORD *)(a1 + 1016);
      if ( v8 > v13 && v8 - v13 > v4 )
        v4 = v8 - v13;
    }
    if ( v4 > v8 )
      v4 = v8;
  }
  if ( v4 > 0xFFFFFFFF )
    LODWORD(v4) = -1;
  return (unsigned int)v4;
}
