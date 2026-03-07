__int64 __fastcall RtlMarkExceptionHandlingPages(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        PRTL_BITMAP BitMapHeader)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r14
  unsigned __int64 v8; // rbx
  unsigned int v9; // esi
  unsigned __int64 v10; // r12
  unsigned int *v11; // rdi
  unsigned int *v12; // rbx
  int v13; // r15d
  unsigned __int64 v14; // rdx
  _BYTE *v15; // rbx
  int v16; // eax
  __int64 v17; // r8
  char v18; // al
  unsigned int *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // [rsp+60h] [rbp+8h]

  v5 = a3;
  v6 = a1 + a2;
  if ( a3 >= a1 )
  {
    v8 = a4;
    v22 = a4 + a3;
    if ( v22 <= v6 && a4 == 12 * (a4 / 0xCuLL) )
    {
      RtlSetBits(BitMapHeader, (a3 - a1) >> 12, ((a3 - a1 + a4 + 4095LL) >> 12) - ((a3 - a1) >> 12));
      v9 = 0;
      v10 = v8 / 0xC;
      if ( !(unsigned int)(v8 / 0xC) )
        return 0LL;
      v11 = (unsigned int *)v5;
LABEL_6:
      v12 = v11;
      while ( (v12[2] & 1) != 0 )
      {
        v21 = RtlpConvertFunctionEntry((__int64)v12, a1);
        v12 = (unsigned int *)v21;
        if ( v21 >= v5 && v21 + 12 <= v22 )
          break;
        if ( v21 < a1 || v21 > v6 - 12 )
          return 3221225727LL;
        RtlSetBits(
          BitMapHeader,
          (v21 - a1) >> 12,
          ((unsigned __int64)(((_WORD)v21 - (_WORD)a1) & 0xFFF) + 12 > 0x1000) + 1);
      }
      v13 = 0;
      while ( 1 )
      {
        v14 = v12[2];
        v15 = (_BYTE *)(v14 + a1);
        if ( v14 + a1 < a1 || (unsigned __int64)(v15 + 6) > v6 )
          break;
        v16 = (unsigned __int8)v15[2];
        v17 = (unsigned int)(2 * v16 + 8);
        if ( (v16 & 1) == 0 )
          v17 = (unsigned int)(2 * v16 + 6);
        v18 = *v15 >> 3;
        if ( (v18 & 4) != 0 )
        {
          v17 = (unsigned int)(v17 + 12);
        }
        else if ( (v18 & 3) != 0 )
        {
          v17 = (unsigned int)(v17 + 8);
        }
        if ( (unsigned __int64)&v15[v17] > v6 )
          break;
        RtlSetBits(BitMapHeader, v14 >> 12, ((v14 + v17 + 4095) >> 12) - (v14 >> 12));
        if ( (*v15 & 0x20) != 0 )
        {
          if ( (unsigned int)++v13 > 0x20 )
            return 3221225727LL;
          v12 = (unsigned int *)&v15[2 * (((unsigned __int8)v15[2] + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) + 4];
          v20 = RtlpSearchFunctionTable(a3, v10, a1 + *v12, a1);
          if ( !v20 || v20[2] != v12[2] )
            continue;
        }
        v5 = a3;
        ++v9;
        v11 += 3;
        if ( v9 < (unsigned int)v10 )
          goto LABEL_6;
        return 0LL;
      }
    }
  }
  return 3221225727LL;
}
