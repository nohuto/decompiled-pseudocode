/*
 * XREFs of RtlpReadExtendedContextLayout @ 0x1407EE7F0
 * Callers:
 *     RtlpReadExtendedContext @ 0x1407EDC30 (RtlpReadExtendedContext.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpReadExtendedContextLayout(__int64 a1, int a2, __int64 a3, int a4, int *a5)
{
  unsigned __int64 v5; // r11
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rbx
  int v9; // r9d
  int v10; // r8d
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r9d
  __int128 v15; // [rsp+20h] [rbp-28h]
  __int128 v16; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  if ( (a2 & 0x10000) != 0 )
  {
    v5 = a3 + 716;
    a5[2] = -716;
    a5[3] = 204;
    if ( (a2 & 0x10020) == 0x10020 )
      a5[3] = 716;
  }
  else
  {
    if ( (a2 & 0x100000) != 0 )
    {
      v5 = a3 + 1232;
      a5[3] = 1232;
LABEL_4:
      a5[2] = a3 - v5;
      goto LABEL_5;
    }
    if ( (a2 & 0x200000) != 0 )
    {
      v5 = a3 + 416;
      a5[3] = 416;
      goto LABEL_4;
    }
    if ( (a2 & 0x400000) != 0 )
    {
      v5 = a3 + 912;
      a5[3] = 912;
      goto LABEL_4;
    }
  }
LABEL_5:
  *a5 = a5[2];
  a5[1] = v5 - a3 + 32;
  if ( (a4 & 0xFFFFFFFE) == 0 )
    return 0LL;
  if ( (v5 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = *(_OWORD *)v5;
  v16 = *(_OWORD *)(v5 + 16);
  v7 = (int)*(_QWORD *)(v5 + 8) + v5;
  if ( SDWORD2(v15) <= HIDWORD(v15) + DWORD2(v15) )
  {
    if ( (SDWORD2(v15) & 0x80000000) == 0 )
    {
      if ( v7 < v5 )
        return 3221225485LL;
    }
    else if ( v7 >= v5 )
    {
      return 3221225485LL;
    }
    if ( v5 + SDWORD2(v15) + HIDWORD(*((_QWORD *)&v15 + 1)) < v7
      || a5[2] != DWORD2(v15)
      || a5[3] > (unsigned int)HIDWORD(*(_QWORD *)(v5 + 8)) )
    {
      return 3221225485LL;
    }
    if ( (a4 & 2) != 0 )
    {
      v8 = (int)v16 + v5;
      if ( (int)v16 > DWORD1(v16) + (int)v16 )
        return 3221225485LL;
      if ( (int)v16 < 0 )
      {
        if ( v8 >= v5 )
          return 3221225485LL;
      }
      else if ( v8 < v5 )
      {
        return 3221225485LL;
      }
      if ( v5 + (int)v16 + DWORD1(v16) < v8 )
        return 3221225485LL;
      *((_QWORD *)a5 + 2) = v16;
      v9 = a5[1];
      v10 = *a5;
      if ( *a5 + v9 > (int)v16 )
      {
        if ( (int)v16 + a5[5] > v10 )
          return 3221225485LL;
        a5[1] = v9 + v10 - v16;
        *a5 = v16;
      }
      else
      {
        a5[1] = a5[5] + v16 - v10;
      }
    }
    v11 = *a5;
    v12 = v11 + v5;
    v13 = (unsigned int)a5[1];
    v14 = v13 + v11;
    if ( (int)v11 <= (int)v13 + (int)v11 )
    {
      if ( (int)v11 >= 0 )
      {
        if ( v12 < v5 )
          return 3221225485LL;
      }
      else if ( v12 >= v5 )
      {
        return 3221225485LL;
      }
      if ( v5 + v11 + v13 >= v12 && (int)v11 >= (int)v15 && (int)v15 + DWORD1(v15) >= v14 && v12 <= v5 && v5 + v14 >= v5 )
        return 0LL;
    }
  }
  return 3221225485LL;
}
