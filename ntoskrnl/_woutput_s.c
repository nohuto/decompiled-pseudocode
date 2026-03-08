/*
 * XREFs of _woutput_s @ 0x1403DB12C
 * Callers:
 *     _swoutput_s @ 0x1403DAFF8 (_swoutput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _safecrt_mbtowc @ 0x1403D4730 (_safecrt_mbtowc.c)
 *     write_char_1 @ 0x1403DBABC (write_char_1.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall woutput_s(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  int v4; // r14d
  int v5; // r15d
  wchar_t *v6; // rbx
  wchar_t *v7; // rdi
  int v9; // r10d
  unsigned __int16 v10; // r9
  int v11; // edx
  int v12; // esi
  __int64 v13; // r12
  unsigned int v14; // r11d
  unsigned __int64 v15; // r11
  __int64 v16; // rax
  unsigned __int16 *v17; // rcx
  unsigned int v18; // eax
  int v19; // ecx
  const char *v20; // rax
  wchar_t v21; // ax
  int v22; // eax
  const wchar_t *v23; // rax
  unsigned __int64 v24; // r9
  char v25; // di
  wchar_t *j; // rcx
  int v27; // eax
  int v28; // r8d
  __int16 v29; // ax
  int v30; // edi
  __int64 v31; // rdx
  int v32; // r15d
  int v33; // r11d
  unsigned int v34; // r11d
  int v35; // r9d
  unsigned __int16 *v36; // r10
  int v37; // r9d
  __int64 v38; // r10
  int v39; // r10d
  int v40; // r9d
  const char *v41; // rsi
  int v42; // edi
  int v43; // r9d
  __int64 v44; // r9
  unsigned __int16 *v45; // r10
  int v46; // r9d
  __int64 v47; // r10
  bool i; // zf
  unsigned __int16 v49; // cx
  int v50; // eax
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // edx
  int v54; // ecx
  int v55; // eax
  int v56; // edx
  int v58; // [rsp+30h] [rbp-D0h]
  int v59; // [rsp+34h] [rbp-CCh] BYREF
  int v60; // [rsp+38h] [rbp-C8h]
  int v61; // [rsp+3Ch] [rbp-C4h]
  wchar_t v62[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v63; // [rsp+44h] [rbp-BCh]
  char SrcCh[4]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v65[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v66; // [rsp+50h] [rbp-B0h]
  int v67; // [rsp+54h] [rbp-ACh]
  unsigned __int16 *v68; // [rsp+58h] [rbp-A8h]
  int v69; // [rsp+60h] [rbp-A0h]
  int v70; // [rsp+64h] [rbp-9Ch]
  __int64 v71; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v72; // [rsp+70h] [rbp-90h]
  wchar_t DstCh[512]; // [rsp+80h] [rbp-80h] BYREF

  v71 = a1;
  v68 = a3;
  v69 = 0;
  v4 = 0;
  v66 = 0;
  v5 = 0;
  v61 = 0;
  v6 = 0LL;
  v60 = 0;
  v7 = a3;
  v70 = 0;
  memset(DstCh, 0, sizeof(DstCh));
  v9 = 0;
  v62[0] = 0;
  v63 = 0;
  if ( !a1 || !a2 )
    goto LABEL_211;
  v10 = *a2;
  v11 = 0;
  v59 = 0;
  v12 = 0;
  LODWORD(v13) = 0;
  if ( !v10 )
    return (unsigned int)v12;
  v14 = 32;
  do
  {
    ++a2;
    if ( v12 < 0 )
      break;
    if ( (unsigned __int16)(v10 - v14) <= 0x5Au )
      v11 = *((_BYTE *)&_lookuptable_s[-4] + v10) & 0xF;
    v9 = *((unsigned __int8 *)_lookuptable_s + (unsigned int)(v11 + v9 + 8 * v11)) >> 4;
    v58 = v9;
    if ( v9 == 8 )
      goto LABEL_211;
    if ( v9 )
    {
      switch ( v9 )
      {
        case 1:
          v5 = -1;
          v70 = 0;
          v61 = -1;
          v4 = 0;
          v66 = 0;
          v60 = 0;
          v63 = 0;
          goto LABEL_206;
        case 2:
          if ( v10 == v14 )
          {
            v4 |= 2u;
          }
          else if ( v10 == 35 )
          {
            v4 |= 0x80u;
          }
          else if ( v10 == 43 )
          {
            v4 |= 1u;
          }
          else
          {
            if ( v10 != 45 )
            {
              if ( v10 == 48 )
                v4 |= 8u;
              goto LABEL_207;
            }
            v4 |= 4u;
          }
          goto LABEL_206;
        case 3:
          if ( v10 == 42 )
          {
            v53 = *(_DWORD *)v7;
            v68 = v7 + 4;
            v54 = v53;
            if ( v53 < 0 )
              v4 |= 4u;
            v55 = v53;
            v56 = -v53;
            if ( v55 >= 0 )
              v56 = v54;
          }
          else
          {
            v56 = v10 + 2 * (5 * v66 - 24);
          }
          v66 = v56;
          goto LABEL_206;
        case 4:
          v5 = 0;
          v61 = 0;
          goto LABEL_206;
        case 5:
          if ( v10 == 42 )
          {
            v5 = *(_DWORD *)v7;
            v68 = v7 + 4;
            v61 = v5;
            if ( v5 < 0 )
            {
              v5 = -1;
              v61 = -1;
            }
            goto LABEL_207;
          }
          v5 = v10 + 2 * (5 * v5 - 24);
          v61 = v5;
          goto LABEL_206;
      }
      if ( v9 != 6 )
      {
        if ( v9 != 7 )
          goto LABEL_206;
        if ( v10 <= 0x69u )
        {
          if ( v10 == 105 )
            goto LABEL_25;
          if ( v10 == 67 )
          {
            if ( (v4 & 0x830) == 0 )
              v4 |= v14;
            goto LABEL_55;
          }
          if ( v10 != 83 )
          {
            if ( v10 != 88 )
            {
              if ( v10 == 90 )
              {
                v17 = *(unsigned __int16 **)v7;
                v68 = v7 + 4;
                if ( v17 && (v6 = (wchar_t *)*((_QWORD *)v17 + 1)) != 0LL )
                {
                  v18 = *v17;
                  if ( v17[1] < (unsigned __int16)v18 )
                    goto LABEL_211;
                  LODWORD(v13) = *v17;
                  if ( (v4 & 0x800) != 0 )
                  {
                    if ( (v18 & 1) != 0 || ((unsigned __int8)v6 & 1) != 0 )
                      goto LABEL_211;
                    LODWORD(v13) = v18 >> 1;
                    v63 = 1;
                  }
                  else
                  {
                    v63 = 0;
                  }
                }
                else
                {
                  v13 = -1LL;
                  v6 = (wchar_t *)"(null)";
                  do
                    ++v13;
                  while ( aNull_2[v13] );
                }
                goto LABEL_106;
              }
              if ( v10 != 99 )
              {
                if ( v10 == 100 )
                {
LABEL_25:
                  v4 |= 0x40u;
                  goto LABEL_26;
                }
LABEL_106:
                if ( v70 )
                {
                  v14 = 32;
                }
                else
                {
                  if ( (v4 & 0x40) == 0 )
                    goto LABEL_115;
                  if ( (v4 & 0x100) != 0 )
                  {
                    v29 = 45;
                    goto LABEL_112;
                  }
                  if ( (v4 & 1) != 0 )
                  {
                    v29 = 43;
                    goto LABEL_112;
                  }
                  if ( (v4 & 2) != 0 )
                  {
                    v29 = 32;
LABEL_112:
                    v30 = 1;
                    v65[0] = v29;
                    v60 = 1;
                  }
                  else
                  {
LABEL_115:
                    v30 = v60;
                  }
                  v31 = v71;
                  v32 = v66 - v13 - v30;
                  v33 = v4 & 0xC;
                  LODWORD(v72) = v32;
                  v67 = v33;
                  if ( (v4 & 0xC) == 0 && v32 > 0 )
                  {
                    v34 = 32;
                    do
                    {
                      write_char_1(v34, v31, &v59);
                      v12 = v59;
                    }
                    while ( v59 != -1 && v35 > 0 );
                    v33 = v67;
                  }
                  v36 = v65;
                  if ( (*(_DWORD *)(v31 + 24) & 0x40) == 0 || *(_QWORD *)(v31 + 16) )
                  {
                    if ( v30 > 0 )
                    {
                      do
                      {
                        write_char_1(*v36, v31, &v59);
                        v12 = v59;
                        v36 = (unsigned __int16 *)(v38 + 2);
                      }
                      while ( v59 != -1 && v37 > 0 );
                      v33 = v67;
                    }
                  }
                  else
                  {
                    v12 += v30;
                    v59 = v12;
                  }
                  v39 = 0;
                  if ( v33 == 8 && v32 > 0 )
                  {
                    do
                    {
                      write_char_1(48LL, v31, &v59);
                      v12 = v59;
                    }
                    while ( v59 != -1 && v40 > 0 );
                    v32 = (int)v72;
                  }
                  if ( v63 == v39 && (int)v13 > 0 )
                  {
                    v41 = (const char *)v6;
                    v42 = v13;
                    while ( 1 )
                    {
                      --v42;
                      v43 = safecrt_mbtowc(v62, v41, _mb_cur_max);
                      if ( v43 == 2 )
                      {
                        --v42;
                      }
                      else if ( v43 <= 0 )
                      {
                        v31 = v71;
                        v12 = -1;
                        v59 = -1;
                        goto LABEL_149;
                      }
                      write_char_1(v62[0], v71, &v59);
                      v41 += v44;
                      if ( v42 <= 0 )
                      {
                        v12 = v59;
                        goto LABEL_149;
                      }
                    }
                  }
                  v45 = v6;
                  if ( (*(_DWORD *)(v31 + 24) & 0x40) == 0 || *(_QWORD *)(v31 + 16) )
                  {
                    if ( (int)v13 > 0 )
                    {
                      do
                      {
                        write_char_1(*v45, v31, &v59);
                        v12 = v59;
                        v45 = (unsigned __int16 *)(v47 + 2);
                      }
                      while ( v59 != -1 && v46 > 0 );
                    }
                  }
                  else
                  {
                    v12 += v13;
                    v59 = v12;
                  }
LABEL_149:
                  v14 = 32;
                  if ( v12 >= 0 )
                  {
                    for ( i = (v4 & 4) == 0; !i && v32 > 0; i = v59 == -1 )
                    {
                      --v32;
                      write_char_1(v14, v31, &v59);
                      v12 = v59;
                    }
                  }
                  v5 = v61;
                }
LABEL_206:
                v9 = v58;
                goto LABEL_207;
              }
LABEL_55:
              v21 = *v7;
              v63 = 1;
              v68 = v7 + 4;
              v62[0] = v21;
              if ( ((unsigned __int8)v4 & (unsigned __int8)v14) != 0 )
              {
                SrcCh[0] = v21;
                SrcCh[1] = 0;
                if ( safecrt_mbtowc(DstCh, SrcCh, _mb_cur_max) < 0 )
                  v70 = 1;
              }
              else
              {
                DstCh[0] = v21;
              }
              v6 = DstCh;
              LODWORD(v13) = 1;
              goto LABEL_106;
            }
LABEL_75:
            v22 = 7;
LABEL_76:
            v69 = v22;
            if ( (v4 & 0x80u) != 0 )
            {
              v60 = 2;
              v65[0] = 48;
              v65[1] = v22 + 81;
            }
            v15 = 16LL;
            goto LABEL_27;
          }
          if ( (v4 & 0x830) == 0 )
            v4 |= v14;
LABEL_44:
          v6 = *(wchar_t **)v7;
          v19 = v5;
          if ( v5 == -1 )
            v19 = 0x7FFFFFFF;
          v68 = v7 + 4;
          if ( ((unsigned __int8)v4 & (unsigned __int8)v14) != 0 )
          {
            v20 = (const char *)v6;
            if ( !v6 )
            {
              v6 = (wchar_t *)"(null)";
              v20 = "(null)";
            }
            LODWORD(v13) = 0;
            if ( v19 > 0 )
            {
              do
              {
                if ( !*v20 )
                  break;
                ++v20;
                LODWORD(v13) = v13 + 1;
              }
              while ( (int)v13 < v19 );
            }
          }
          else
          {
            v63 = 1;
            v23 = L"(null)";
            if ( v6 )
              v23 = v6;
            v6 = (wchar_t *)v23;
            while ( v19 )
            {
              --v19;
              if ( !*v23 )
                break;
              ++v23;
            }
            LODWORD(v13) = v23 - v6;
          }
          goto LABEL_106;
        }
        switch ( v10 )
        {
          case 'n':
            goto LABEL_211;
          case 'o':
            v15 = 8LL;
            if ( (v4 & 0x80u) != 0 )
              v4 |= 0x200u;
            goto LABEL_27;
          case 'p':
            v5 = 16;
            v4 |= 0x8000u;
            goto LABEL_75;
          case 's':
            goto LABEL_44;
        }
        if ( v10 != 117 )
        {
          if ( v10 != 120 )
            goto LABEL_106;
          v22 = 39;
          goto LABEL_76;
        }
LABEL_26:
        v15 = 10LL;
LABEL_27:
        v68 = v7 + 4;
        v72 = v7 + 4;
        if ( (v4 & 0x8000) != 0 || (v4 & 0x1000) != 0 )
        {
          v16 = *(_QWORD *)v7;
          if ( (v4 & 0x40) != 0 )
            goto LABEL_87;
LABEL_90:
          v24 = (unsigned int)v16;
          if ( (v4 & 0x9000) != 0 )
            v24 = v16;
          if ( v5 >= 0 )
          {
            v4 &= ~8u;
            if ( v5 > 512 )
              v5 = 512;
          }
          else
          {
            v5 = 1;
          }
          v25 = v69;
          v60 &= -(v24 != 0);
          v67 = v60;
          for ( j = (wchar_t *)((char *)&DstCh[255] + 1); ; j = (wchar_t *)((char *)j - 1) )
          {
            v27 = v5--;
            if ( v27 <= 0 && !v24 )
              break;
            v28 = v24 % v15 + 48;
            v24 /= v15;
            if ( v28 > 57 )
              LOBYTE(v28) = v25 + v28;
            *(_BYTE *)j = v28;
          }
          v6 = (wchar_t *)((char *)j + 1);
          v12 = v59;
          LODWORD(v13) = (unsigned int)&DstCh[64] + 383 - (_DWORD)j;
          v61 = v5;
          if ( (v4 & 0x200) != 0 )
          {
            if ( !(_DWORD)v13 || (v68 = v72, v60 = v67, *(_BYTE *)v6 != 48) )
            {
              v6 = j;
              v68 = v72;
              LODWORD(v13) = v13 + 1;
              v60 = v67;
              *(_BYTE *)j = 48;
            }
          }
          goto LABEL_106;
        }
        if ( (v4 & 0x20) != 0 )
        {
          if ( (v4 & 0x40) == 0 )
          {
            v16 = *v7;
            goto LABEL_90;
          }
          v16 = (__int16)*v7;
        }
        else
        {
          if ( (v4 & 0x40) == 0 )
          {
            v16 = *(unsigned int *)v7;
            goto LABEL_90;
          }
          v16 = *(int *)v7;
        }
LABEL_87:
        if ( v16 < 0 )
        {
          v16 = -v16;
          v4 |= 0x100u;
        }
        goto LABEL_90;
      }
      if ( v10 != 73 )
      {
        if ( v10 == 104 )
        {
          v4 |= v14;
          goto LABEL_206;
        }
        if ( v10 != 106 )
        {
          if ( v10 == 108 )
          {
            v49 = *a2;
            if ( *a2 == 108 )
              ++a2;
            v50 = 4096;
            if ( v49 != 108 )
              v50 = 16;
            v4 |= v50;
            goto LABEL_206;
          }
          if ( v10 != 116 )
          {
            if ( v10 == 119 )
            {
              v4 |= 0x800u;
              goto LABEL_206;
            }
            if ( v10 != 122 )
              goto LABEL_206;
          }
        }
      }
      v4 |= 0x8000u;
      if ( v10 == 73 )
      {
        if ( *a2 == 54 && a2[1] == 52 )
        {
          a2 += 2;
          goto LABEL_206;
        }
        if ( *a2 == 51 && a2[1] == 50 )
        {
          a2 += 2;
          v4 &= ~0x8000u;
          goto LABEL_206;
        }
      }
      else if ( v10 == 106 )
      {
        goto LABEL_206;
      }
      v51 = *a2;
      LOWORD(v51) = v51 - 88;
      if ( (unsigned __int16)v51 <= (unsigned __int16)v14 )
      {
        v52 = 0x120821001LL;
        if ( _bittest64(&v52, v51) )
          goto LABEL_206;
      }
    }
    v63 = 1;
    write_char_1(v10, v71, &v59);
    v12 = v59;
LABEL_207:
    v10 = *a2;
    v11 = 0;
    v7 = v68;
  }
  while ( *a2 );
  if ( !v9 || v9 == 7 )
    return (unsigned int)v12;
LABEL_211:
  xHalTimerWatchdogStop();
  return 0xFFFFFFFFLL;
}
