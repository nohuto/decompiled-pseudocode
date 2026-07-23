/*
 * XREFs of RtlMarkExceptionHandlingPages @ 0x14075E8B0
 * Callers:
 *     MiCaptureImageExceptionValues @ 0x14075E804 (MiCaptureImageExceptionValues.c)
 * Callees:
 *     RtlpConvertFunctionEntry @ 0x1402643E0 (RtlpConvertFunctionEntry.c)
 *     RtlSetBits @ 0x140363CC0 (RtlSetBits.c)
 *     RtlpSearchFunctionTable @ 0x140397640 (RtlpSearchFunctionTable.c)
 */

__int64 __fastcall RtlMarkExceptionHandlingPages(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        PRTL_BITMAP BitMapHeader)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v8; // r12
  unsigned int v9; // esi
  unsigned int v10; // r13d
  unsigned int *v11; // r15
  unsigned int v12; // eax
  unsigned int *i; // rbx
  int v14; // r12d
  _BYTE *v15; // rbx
  int v16; // eax
  bool v17; // zf
  unsigned int v18; // ecx
  __int64 v19; // rax
  char v20; // cl
  unsigned int *v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // [rsp+60h] [rbp+8h]

  v6 = a1 + a2;
  if ( a3 >= a1 )
  {
    v8 = a4 + a3;
    v24 = v8;
    if ( v8 <= v6 )
    {
      v9 = a4 / 0xC;
      if ( a4 == 12 * (a4 / 0xCuLL) )
      {
        RtlSetBits(BitMapHeader, (a3 - a1) >> 12, ((a3 - a1 + a4 + 4095LL) >> 12) - ((a3 - a1) >> 12));
        v10 = 0;
        if ( !v9 )
          return 0LL;
        v11 = (unsigned int *)a3;
LABEL_6:
        v12 = v11[2];
        for ( i = v11; (v12 & 1) != 0; v12 = i[2] )
        {
          v23 = RtlpConvertFunctionEntry((__int64)i, a1);
          i = (unsigned int *)v23;
          if ( v23 >= a3 && v23 + 12 <= v8 )
            break;
          if ( v23 < a1 || v23 > v6 - 12 )
            return 3221225727LL;
          RtlSetBits(
            BitMapHeader,
            (v23 - a1) >> 12,
            ((unsigned __int64)(((_WORD)v23 - (_WORD)a1) & 0xFFF) + 12 > 0x1000) + 1);
        }
        v14 = 0;
        while ( 1 )
        {
          v15 = (_BYTE *)(a1 + i[2]);
          if ( (unsigned __int64)v15 < a1 || (unsigned __int64)(v15 + 6) > v6 )
            break;
          v16 = (unsigned __int8)v15[2];
          v17 = (v16 & 1) == 0;
          v18 = 2 * v16 + 6;
          v19 = (unsigned int)(2 * v16 + 8);
          if ( v17 )
            v19 = v18;
          v20 = *v15 >> 3;
          if ( (v20 & 4) != 0 )
          {
            v19 = (unsigned int)(v19 + 12);
          }
          else if ( (v20 & 3) != 0 )
          {
            v19 = (unsigned int)(v19 + 8);
          }
          if ( (unsigned __int64)&v15[v19] > v6 )
            break;
          RtlSetBits(
            BitMapHeader,
            (unsigned __int64)&v15[-a1] >> 12,
            ((unsigned __int64)&v15[(unsigned int)v19 + 4095 - a1] >> 12) - ((unsigned __int64)&v15[-a1] >> 12));
          if ( (*v15 & 0x20) != 0 )
          {
            if ( (unsigned int)++v14 > 0x20 )
              return 3221225727LL;
            i = (unsigned int *)&v15[2 * (((unsigned __int8)v15[2] + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) + 4];
            v22 = RtlpSearchFunctionTable(a3, v9, a1 + *i, a1);
            if ( !v22 || v22[2] != i[2] )
              continue;
          }
          v8 = v24;
          ++v10;
          v11 += 3;
          if ( v10 < v9 )
            goto LABEL_6;
          return 0LL;
        }
      }
    }
  }
  return 3221225727LL;
}
