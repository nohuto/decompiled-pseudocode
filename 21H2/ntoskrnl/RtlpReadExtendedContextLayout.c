/*
 * XREFs of RtlpReadExtendedContextLayout @ 0x14063D2F0
 * Callers:
 *     RtlpReadExtendedContext @ 0x14063CFF0 (RtlpReadExtendedContext.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpReadExtendedContextLayout(__int64 a1, int a2, __int64 a3, int a4, int *a5)
{
  unsigned __int64 v5; // r10
  int v7; // r8d
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r11
  int v10; // r11d
  int v11; // r8d
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // r11d
  __int128 v16; // [rsp+20h] [rbp-28h]
  unsigned __int64 v17; // [rsp+30h] [rbp-18h]

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
  a5[1] = v5 - a3 + 24;
  if ( (a4 & 0xFFFFFFFE) == 0 )
    return 0LL;
  if ( (v5 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v16 = *(_OWORD *)v5;
  v17 = *(_QWORD *)(v5 + 16);
  v7 = *(_QWORD *)(v5 + 8);
  v8 = v7 + v5;
  if ( SDWORD2(v16) <= HIDWORD(v16) + DWORD2(v16) )
  {
    if ( v7 >= 0 )
    {
      if ( v8 < v5 )
        return 3221225485LL;
    }
    else if ( v8 >= v5 )
    {
      return 3221225485LL;
    }
    if ( v5 + SDWORD2(v16) + HIDWORD(*((_QWORD *)&v16 + 1)) < v8
      || a5[2] != v7
      || a5[3] > (unsigned int)HIDWORD(*(_QWORD *)(v5 + 8)) )
    {
      return 3221225485LL;
    }
    if ( (a4 & 2) != 0 )
    {
      v9 = (int)v17 + v5;
      if ( (int)v17 > HIDWORD(v17) + (int)v17 )
        return 3221225485LL;
      if ( (v17 & 0x80000000) != 0LL )
      {
        if ( v9 >= v5 )
          return 3221225485LL;
      }
      else if ( v9 < v5 )
      {
        return 3221225485LL;
      }
      if ( v5 + HIDWORD(v17) + (int)v17 < v9 )
        return 3221225485LL;
      *((_QWORD *)a5 + 2) = v17;
      v10 = a5[1];
      v11 = *a5;
      if ( *a5 + v10 > (int)v17 )
      {
        if ( (int)v17 + a5[5] > v11 )
          return 3221225485LL;
        a5[1] = v10 + v11 - v17;
        *a5 = v17;
      }
      else
      {
        a5[1] = v17 + a5[5] - v11;
      }
    }
    v12 = *a5;
    v13 = v12 + v5;
    v14 = (unsigned int)a5[1];
    v15 = v14 + v12;
    if ( (int)v12 <= (int)v14 + (int)v12 )
    {
      if ( (int)v12 >= 0 )
      {
        if ( v13 < v5 )
          return 3221225485LL;
      }
      else if ( v13 >= v5 )
      {
        return 3221225485LL;
      }
      if ( v5 + v12 + v14 >= v13 && (int)v12 >= (int)v16 && (int)v16 + DWORD1(v16) >= v15 && v13 <= v5 && v5 + v15 >= v5 )
        return 0LL;
    }
  }
  return 3221225485LL;
}
