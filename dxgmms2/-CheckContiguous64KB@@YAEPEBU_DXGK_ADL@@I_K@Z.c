unsigned __int8 __fastcall CheckContiguous64KB(const struct _DXGK_ADL *a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 v5; // r10
  __int64 v6; // r9
  unsigned __int64 v7; // r9
  bool v8; // zf

  v3 = *(unsigned int *)a1;
  if ( a3 >= v3 )
    return 0;
  if ( (*((_DWORD *)a1 + 1) & 1) == 0 )
  {
    v5 = *((_QWORD *)a1 + 1);
    v6 = (unsigned int)(v3 - a3);
    if ( (unsigned int)v6 > a2 )
      v6 = a2;
    v7 = a3 + v6;
    while ( (unsigned int)a3 < v7 )
    {
      if ( (a3 & 0xF) != 0 )
        v8 = *(_QWORD *)(v5 + 8LL * (unsigned int)a3) == *(_QWORD *)(v5 + 8LL * (unsigned int)(a3 - 1)) + 1LL;
      else
        v8 = (*(_BYTE *)(v5 + 8LL * (unsigned int)a3) & 0xF) == 0;
      if ( !v8 )
        return 0;
      LODWORD(a3) = a3 + 1;
    }
  }
  return 1;
}
