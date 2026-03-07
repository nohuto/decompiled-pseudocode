void __fastcall RFONTOBJ::vXlatGlyphArray(
        RFONTOBJ *this,
        unsigned __int16 *a2,
        int a3,
        unsigned int *a4,
        unsigned int a5,
        int a6)
{
  __int64 v6; // r10
  RFONTOBJ *v10; // r11
  struct _FD_GLYPHSET *v11; // rbx
  ULONG cRuns; // edx
  int v13; // edx
  unsigned __int16 *p_wcLow; // r14
  unsigned int v15; // r10d
  int v16; // ebx
  __int64 v17; // r13
  __int64 v18; // rdi
  RFONTOBJ *v19; // rax
  RFONTOBJ *v20; // rcx
  int v21; // r9d
  int v22; // edx
  __int64 v23; // r8
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  unsigned __int16 *v31; // r8
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // r9d
  struct _FD_GLYPHSET *v36; // rax
  unsigned __int16 v37; // cx
  __int64 v38; // rcx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int IsSystemTTGlyph; // eax
  int v45; // ecx
  unsigned int v46; // [rsp+20h] [rbp-48h]
  int v47; // [rsp+24h] [rbp-44h]
  RFONTOBJ *v48; // [rsp+28h] [rbp-40h] BYREF
  RFONTOBJ *v49; // [rsp+30h] [rbp-38h]
  RFONTOBJ *v50; // [rsp+70h] [rbp+8h] BYREF

  v50 = this;
  v6 = *(_QWORD *)this;
  v10 = this;
  v47 = 0;
  v11 = *(struct _FD_GLYPHSET **)(*(_QWORD *)this + 472LL);
  v49 = 0LL;
  if ( a6 )
  {
    v35 = *(_DWORD *)(*(_QWORD *)(v6 + 120) + 8LL);
    if ( v35 )
    {
      if ( (v35 & 1) == 0 )
      {
        v49 = *(RFONTOBJ **)(*(_QWORD *)(v6 + 128) + 8LL * ((v35 - 1) & 0xFFFFFFFE) + 216);
        v48 = v49;
        if ( v49 )
        {
          v36 = PFEOBJ::pfdg((PFEOBJ *)&v48);
          v10 = v50;
          if ( v36 )
          {
            v47 = 1;
            v11 = v36;
          }
        }
      }
    }
  }
  cRuns = v11->cRuns;
  if ( !cRuns )
  {
    for ( ; a3; --a3 )
      *a4++ = *(_DWORD *)(*(_QWORD *)v10 + 460LL);
    return;
  }
  v13 = cRuns - 1;
  p_wcLow = &v11->awcrun[0].wcLow;
  if ( a5 == 1 )
    v15 = -1;
  else
    v15 = *(_DWORD *)(*(_QWORD *)v10 + 460LL);
  v16 = 0xFFFF;
  v46 = v15;
  if ( v13 > 0xFFFF )
  {
    v17 = 0xFFFFLL;
  }
  else
  {
    v17 = v13;
    v16 = v13;
    if ( (v13 & 0xF000) == 0 )
    {
      if ( (v13 & 0xF00) != 0 )
      {
        v18 = (unsigned int)*((unsigned __int8 *)&acBits + BYTE1(v13)) + 8;
      }
      else if ( (v13 & 0xF0) != 0 )
      {
        v18 = (unsigned int)*((unsigned __int8 *)&acBits + (unsigned __int8)((__int64)v13 >> 4)) + 4;
      }
      else
      {
        v18 = *((unsigned __int8 *)&acBits + v13);
      }
      goto LABEL_10;
    }
  }
  v18 = (unsigned int)*((unsigned __int8 *)&acBits + (unsigned __int8)(v17 >> 12)) + 12;
LABEL_10:
  v19 = (RFONTOBJ *)*((int *)&aiStart + v18);
  a6 = *((_DWORD *)&aiStart + v18);
  if ( !a3 )
    goto LABEL_57;
  v48 = v19;
LABEL_12:
  v20 = v19;
LABEL_13:
  while ( 1 )
  {
    v21 = *a2;
    if ( (unsigned __int16)v21 < *p_wcLow )
      break;
    v22 = (int)v19;
    v23 = (__int64)v20;
    if ( (_DWORD)v18 == 9 )
      goto LABEL_60;
    if ( (unsigned int)v18 > 9 )
    {
      if ( (_DWORD)v18 != 10 )
      {
        if ( (_DWORD)v18 != 11 )
        {
          if ( (_DWORD)v18 != 12 )
          {
            if ( (_DWORD)v18 != 13 )
            {
              if ( (_DWORD)v18 != 14 )
              {
                if ( (_DWORD)v18 != 15 )
                {
                  if ( (_DWORD)v18 != 16 )
                    goto LABEL_51;
                  v37 = p_wcLow[8 * (_QWORD)v48];
                  v22 = a6 + ((unsigned __int16)v21 < v37 ? -16384 : 0x4000);
                  v23 = (__int64)v48 + (-(__int64)((unsigned __int16)v21 < v37) & 0xFFFFFFFFFFFF8000uLL) + 0x4000;
                }
                if ( v23 > v17 || (v38 = 0x2000LL, (unsigned __int16)v21 < p_wcLow[8 * v23]) )
                  v38 = -8192LL;
                v22 += v38;
                v23 += v38;
              }
              if ( v23 > v17 || (v39 = 4096, (unsigned __int16)v21 < p_wcLow[8 * v23]) )
                v39 = -4096;
              v22 += v39;
            }
            if ( v22 > v16 || (v40 = 2048, (unsigned __int16)v21 < p_wcLow[8 * v22]) )
              v40 = -2048;
            v22 += v40;
          }
          if ( v22 > v16 || (v41 = 1024, (unsigned __int16)v21 < p_wcLow[8 * v22]) )
            v41 = -1024;
          v22 += v41;
        }
        if ( v22 > v16 || (v42 = 512, (unsigned __int16)v21 < p_wcLow[8 * v22]) )
          v42 = -512;
        v22 += v42;
      }
      if ( v22 > v16 || (v43 = 256, (unsigned __int16)v21 < p_wcLow[8 * v22]) )
        v43 = -256;
      v22 += v43;
LABEL_60:
      if ( v22 > v16 || (v33 = 128, (unsigned __int16)v21 < p_wcLow[8 * v22]) )
        v33 = -128;
      v22 += v33;
LABEL_64:
      if ( v22 > v16 || (v34 = 64, (unsigned __int16)v21 < p_wcLow[8 * v22]) )
        v34 = -64;
      v22 += v34;
LABEL_23:
      if ( v22 > v16 || (v24 = 32, (unsigned __int16)v21 < p_wcLow[8 * v22]) )
        v24 = -32;
      v22 += v24;
LABEL_27:
      if ( v22 > v16 || (v25 = 16, (unsigned __int16)v21 < p_wcLow[8 * v22]) )
        v25 = -16;
      v22 += v25;
LABEL_31:
      if ( v22 > v16 || (v26 = 8, (unsigned __int16)v21 < p_wcLow[8 * v22]) )
        v26 = -8;
      v22 += v26;
LABEL_35:
      if ( v22 > v16 || (v27 = 4, (unsigned __int16)v21 < p_wcLow[8 * v22]) )
        v27 = -4;
      v22 += v27;
LABEL_39:
      if ( v22 > v16 || (v28 = 2, (unsigned __int16)v21 < p_wcLow[8 * v22]) )
        v28 = -2;
      v22 += v28;
LABEL_43:
      if ( v22 > v16 || (unsigned __int16)v21 < p_wcLow[8 * v22] )
        v29 = -1;
      else
        v29 = 1;
      v22 += v29;
      goto LABEL_47;
    }
    if ( (_DWORD)v18 != 1 )
    {
      if ( (_DWORD)v18 != 2 )
      {
        if ( (_DWORD)v18 != 3 )
        {
          if ( (_DWORD)v18 != 4 )
          {
            if ( (_DWORD)v18 != 5 )
            {
              if ( (_DWORD)v18 != 6 )
              {
                if ( (_DWORD)v18 != 7 )
                {
                  if ( (_DWORD)v18 != 8 )
                    goto LABEL_51;
                  goto LABEL_64;
                }
                goto LABEL_23;
              }
              goto LABEL_27;
            }
            goto LABEL_31;
          }
          goto LABEL_35;
        }
        goto LABEL_39;
      }
      goto LABEL_43;
    }
LABEL_47:
    if ( v22 <= v16 && (unsigned __int16)v21 >= p_wcLow[8 * v22] )
      v30 = 0;
    else
      v30 = -1;
    v22 += v30;
LABEL_51:
    v31 = &p_wcLow[8 * v22];
    v32 = v21 - *v31;
    if ( v32 < v31[1] )
    {
      if ( *((_QWORD *)v31 + 1) )
      {
        while ( 1 )
        {
          ++a2;
          *a4++ = *(_DWORD *)(*((_QWORD *)v31 + 1) + 4LL * v32);
          if ( !--a3 )
            break;
          v32 = *a2 - *v31;
          v19 = (RFONTOBJ *)a6;
          if ( v32 < 0 )
            goto LABEL_12;
          if ( v32 >= v31[1] )
            goto LABEL_71;
        }
      }
      else
      {
        while ( 1 )
        {
          ++a2;
          *a4++ = (unsigned __int16)v21;
          if ( !--a3 )
            break;
          v45 = *a2 - *v31;
          v19 = (RFONTOBJ *)a6;
          if ( v45 < 0 )
            goto LABEL_12;
          LOWORD(v21) = *a2;
          if ( v45 >= v31[1] )
            goto LABEL_71;
        }
      }
      goto LABEL_57;
    }
    if ( a5 == 2 )
      goto LABEL_69;
    if ( (unsigned int)RFONTOBJ::bIsLinkedGlyph(v10, v21) )
    {
      v10 = v50;
LABEL_69:
      *(_DWORD *)(*(_QWORD *)v10 + 712LL) |= 0x40u;
      goto LABEL_70;
    }
    IsSystemTTGlyph = RFONTOBJ::bIsSystemTTGlyph(v50, *a2);
    v10 = v50;
    if ( IsSystemTTGlyph )
      goto LABEL_69;
LABEL_70:
    v15 = v46;
    ++a2;
    *a4++ = v46;
    if ( !--a3 )
      goto LABEL_57;
LABEL_71:
    LODWORD(v19) = a6;
    v20 = v48;
  }
  while ( 1 )
  {
    *a4 = v15;
    ++a2;
    ++a4;
    if ( !--a3 )
      break;
    if ( *a2 >= *p_wcLow )
    {
      LODWORD(v19) = a6;
      goto LABEL_13;
    }
  }
LABEL_57:
  if ( v47 )
  {
    v50 = v49;
    PFEOBJ::vFreepfdg((PFEOBJ *)&v50);
  }
}
