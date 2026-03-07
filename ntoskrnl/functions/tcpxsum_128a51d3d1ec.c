__int64 __fastcall tcpxsum(__int16 a1, const char *a2, unsigned int a3)
{
  char v3; // r11
  const char *v5; // r10
  unsigned int v6; // ecx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // r8d
  bool v10; // cf
  unsigned int v11; // edx
  unsigned __int64 v13; // rax
  _BOOL8 v14; // rtt
  unsigned __int64 v15; // rax
  _BOOL8 v16; // rtt
  unsigned __int64 v17; // rax
  _BOOL8 v18; // rtt
  unsigned __int64 v19; // rax
  _BOOL8 v20; // rtt
  unsigned __int64 v21; // rax
  _BOOL8 v22; // rtt
  unsigned __int64 v23; // rax
  _BOOL8 v24; // rtt
  __int64 v25; // rax
  _BOOL8 v26; // rtt
  __int64 v27; // rax
  _BOOL8 v28; // rtt
  __int64 v29; // rax
  _BOOL8 v30; // rtt
  __int64 v31; // rax
  _BOOL8 v32; // rtt
  __int64 v33; // rax
  _BOOL8 v34; // rtt
  __int64 v35; // rax
  _BOOL8 v36; // rtt
  __int64 v37; // rax
  _BOOL8 v38; // rtt
  __int64 v39; // rax
  _BOOL8 v40; // rtt
  __int64 v41; // rax
  _BOOL8 v42; // rtt
  __int64 v43; // rax
  _BOOL8 v44; // rtt
  int i; // ecx

  _mm_prefetch(a2, 0);
  _mm_prefetch(a2 + 64, 0);
  _mm_prefetch(a2 + 127, 0);
  v3 = (char)a2;
  v5 = a2;
  v6 = a3;
  v7 = 0LL;
  if ( a3 )
  {
    if ( ((unsigned __int8)a2 & 1) == 0 || (BYTE1(v7) = *a2, v5 = a2 + 1, v6 = a3 - 1, a3 != 1) )
    {
      v10 = v6 & 1;
      v8 = v6 >> 1;
      if ( !v10 || (LOBYTE(v7) = v5[2 * (unsigned int)v8], (_DWORD)v8) )
      {
        if ( ((unsigned __int8)v5 & 6) != 0 )
        {
          while ( 1 )
          {
            v10 = __CFADD__(*(_WORD *)v5, (_WORD)v7);
            LOWORD(v7) = *(_WORD *)v5 + v7;
            v7 = v10 + (unsigned int)v7;
            v5 += 2;
            v8 = (unsigned int)(v8 - 1);
            if ( !(_DWORD)v8 )
              break;
            if ( ((unsigned __int8)v5 & 6) == 0 )
              goto LABEL_9;
          }
        }
        else
        {
LABEL_9:
          if ( (unsigned int)v8 >> 2 )
          {
            v9 = (unsigned int)v8 >> 6;
            v11 = ((unsigned int)v8 >> 2) & 0xF;
            v10 = 0;
            if ( v11 )
              return ((__int64 (__fastcall *)(__int64, __int64, _QWORD))((char *)&tcpxsum_start + 4 * (16LL - v11)))(
                       v8,
                       16LL - v11,
                       v9 + 1);
            do
            {
              _mm_prefetch(v5 + 64, 0);
              _mm_prefetch(v5 + 127, 0);
              v14 = v10;
              v10 = __CFADD__(v10, v7);
              v13 = v14 + v7;
              v10 |= __CFADD__(*(_QWORD *)v5, v13);
              v13 += *(_QWORD *)v5;
              v16 = v10;
              v10 = __CFADD__(v10, v13);
              v15 = v16 + v13;
              v10 |= __CFADD__(*((_QWORD *)v5 + 1), v15);
              v15 += *((_QWORD *)v5 + 1);
              v18 = v10;
              v10 = __CFADD__(v10, v15);
              v17 = v18 + v15;
              v10 |= __CFADD__(*((_QWORD *)v5 + 2), v17);
              v17 += *((_QWORD *)v5 + 2);
              v20 = v10;
              v10 = __CFADD__(v10, v17);
              v19 = v20 + v17;
              v10 |= __CFADD__(*((_QWORD *)v5 + 3), v19);
              v19 += *((_QWORD *)v5 + 3);
              v22 = v10;
              v10 = __CFADD__(v10, v19);
              v21 = v22 + v19;
              v10 |= __CFADD__(*((_QWORD *)v5 + 4), v21);
              v21 += *((_QWORD *)v5 + 4);
              v24 = v10;
              v10 = __CFADD__(v10, v21);
              v23 = v24 + v21;
              v10 |= __CFADD__(*((_QWORD *)v5 + 5), v23);
              v23 += *((_QWORD *)v5 + 5);
              v26 = v10;
              v10 = __CFADD__(v10, v23);
              v25 = v26 + v23;
              v10 |= __CFADD__(*((_QWORD *)v5 + 6), v25);
              v25 += *((_QWORD *)v5 + 6);
              v28 = v10;
              v10 = __CFADD__(v10, v25);
              v27 = v28 + v25;
              v10 |= __CFADD__(*((_QWORD *)v5 + 7), v27);
              v27 += *((_QWORD *)v5 + 7);
              v30 = v10;
              v10 = __CFADD__(v10, v27);
              v29 = v30 + v27;
              v10 |= __CFADD__(*((_QWORD *)v5 + 8), v29);
              v29 += *((_QWORD *)v5 + 8);
              v32 = v10;
              v10 = __CFADD__(v10, v29);
              v31 = v32 + v29;
              v10 |= __CFADD__(*((_QWORD *)v5 + 9), v31);
              v31 += *((_QWORD *)v5 + 9);
              v34 = v10;
              v10 = __CFADD__(v10, v31);
              v33 = v34 + v31;
              v10 |= __CFADD__(*((_QWORD *)v5 + 10), v33);
              v33 += *((_QWORD *)v5 + 10);
              v36 = v10;
              v10 = __CFADD__(v10, v33);
              v35 = v36 + v33;
              v10 |= __CFADD__(*((_QWORD *)v5 + 11), v35);
              v35 += *((_QWORD *)v5 + 11);
              v38 = v10;
              v10 = __CFADD__(v10, v35);
              v37 = v38 + v35;
              v10 |= __CFADD__(*((_QWORD *)v5 + 12), v37);
              v37 += *((_QWORD *)v5 + 12);
              v40 = v10;
              v10 = __CFADD__(v10, v37);
              v39 = v40 + v37;
              v10 |= __CFADD__(*((_QWORD *)v5 + 13), v39);
              v39 += *((_QWORD *)v5 + 13);
              v42 = v10;
              v10 = __CFADD__(v10, v39);
              v41 = v42 + v39;
              v10 |= __CFADD__(*((_QWORD *)v5 + 14), v41);
              v41 += *((_QWORD *)v5 + 14);
              v44 = v10;
              v10 = __CFADD__(v10, v41);
              v43 = v44 + v41;
              v10 |= __CFADD__(*((_QWORD *)v5 + 15), v43);
              v7 = *((_QWORD *)v5 + 15) + v43;
              v5 += 128;
              --v9;
            }
            while ( v9 );
            v7 += v10;
          }
          for ( i = v8 & 3; i; --i )
          {
            LOWORD(v7) = __CFADD__(*(_WORD *)v5, (_WORD)v7) + *(_WORD *)v5 + v7;
            v5 += 2;
          }
        }
      }
    }
    v7 = (__ROR8__(v7, 32) + v7) >> 32;
    LODWORD(v7) = (unsigned int)(__ROR4__(v7, 16) + v7) >> 16;
    if ( (v3 & 1) != 0 )
      LOWORD(v7) = __ROR2__(v7, 8);
  }
  v10 = __CFADD__(a1, (_WORD)v7);
  LOWORD(v7) = a1 + v7;
  return v10 + (unsigned int)v7;
}
