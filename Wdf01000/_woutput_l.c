/*
 * XREFs of _woutput_l @ 0x1C0009C9C
 * Callers:
 *     _vsnwprintf_l @ 0x1C0009B94 (_vsnwprintf_l.c)
 * Callees:
 *     ?AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z @ 0x1C0009470 (-AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     write_char @ 0x1C000A5EC (write_char.c)
 *     write_multi_char @ 0x1C000A640 (write_multi_char.c)
 *     write_string @ 0x1C000A698 (write_string.c)
 *     _get_printf_count_output @ 0x1C000A70C (_get_printf_count_output.c)
 *     mbtowc @ 0x1C000A778 (mbtowc.c)
 *     memset @ 0x1C000AC00 (memset.c)
 */

__int64 __fastcall woutput_l(_iobuf *stream, wchar_t *format, localeinfo_struct *plocinfo, char *argptr)
{
  int v5; // edi
  int v6; // r12d
  $B4FF2100EA110D8CD0B9C89F852FB035 *p_buffer; // rbx
  char *v9; // rsi
  wchar_t v10; // r9
  int v11; // r14d
  __int64 v12; // r13
  int v13; // r10d
  int v14; // ecx
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
  char v25; // si
  char *i; // rcx
  int v27; // eax
  int v28; // r8d
  wchar_t v29; // ax
  int v30; // r14d
  int v31; // r12d
  _iobuf *v32; // rsi
  const char *v33; // r15
  int v34; // esi
  int v35; // eax
  __int64 v36; // r14
  _WORD *v38; // rsi
  wchar_t v39; // cx
  int v40; // eax
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // r8d
  int v44; // ecx
  int v45; // eax
  int v46; // r8d
  int charsout; // [rsp+30h] [rbp-D0h] BYREF
  int v48; // [rsp+34h] [rbp-CCh]
  int v49; // [rsp+38h] [rbp-C8h]
  wchar_t wchar; // [rsp+3Ch] [rbp-C4h] BYREF
  int v51; // [rsp+40h] [rbp-C0h]
  int v52; // [rsp+44h] [rbp-BCh]
  char tempchar[4]; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t prefix[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v55; // [rsp+50h] [rbp-B0h]
  char *v56; // [rsp+58h] [rbp-A8h]
  int v57; // [rsp+60h] [rbp-A0h]
  _iobuf *f; // [rsp+68h] [rbp-98h]
  int v59; // [rsp+70h] [rbp-90h]
  int v60; // [rsp+74h] [rbp-8Ch]
  const wchar_t *v61; // [rsp+78h] [rbp-88h]
  char *v62; // [rsp+80h] [rbp-80h]
  $B4FF2100EA110D8CD0B9C89F852FB035 buffer; // [rsp+90h] [rbp-70h] BYREF

  f = stream;
  v56 = argptr;
  v59 = 0;
  v5 = 0;
  v55 = 0;
  v6 = 0;
  v49 = 0;
  p_buffer = 0LL;
  v48 = 0;
  v57 = 0;
  v9 = argptr;
  memset(&buffer, 0, sizeof(buffer));
  wchar = 0;
  v51 = 0;
  if ( stream && format )
  {
    v10 = *format;
    v11 = 0;
    charsout = 0;
    LODWORD(v12) = 0;
    v13 = 0;
    if ( v10 )
    {
      do
      {
        v61 = ++format;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int16)(v10 - 32) > 0x5Au )
          v14 = 0;
        else
          v14 = _lookuptable[v10 - 32] & 0xF;
        v13 = _lookuptable[8 * v14 + v13] >> 4;
        v52 = v13;
        switch ( v13 )
        {
          case 0:
            goto $NORMAL_STATE;
          case 1:
            v6 = -1;
            v57 = 0;
            v49 = -1;
            v5 = 0;
            v55 = 0;
            v48 = 0;
            v51 = 0;
            break;
          case 2:
            switch ( v10 )
            {
              case ' ':
                v5 |= 2u;
                break;
              case '#':
                v5 |= 0x80u;
                break;
              case '+':
                v5 |= 1u;
                break;
              case '-':
                v5 |= 4u;
                break;
              case '0':
                v5 |= 8u;
                break;
            }
            break;
          case 3:
            if ( v10 == 42 )
            {
              v43 = *(_DWORD *)v9;
              v56 = v9 + 8;
              v44 = v43;
              if ( v43 < 0 )
                v5 |= 4u;
              v45 = v43;
              v46 = -v43;
              if ( v45 >= 0 )
                v46 = v44;
              v55 = v46;
            }
            else
            {
              v55 = v10 + 2 * (5 * v55 - 24);
            }
            break;
          case 4:
            v6 = 0;
            v49 = 0;
            break;
          case 5:
            if ( v10 == 42 )
            {
              v6 = *(_DWORD *)v9;
              v56 = v9 + 8;
              v49 = v6;
              if ( v6 < 0 )
              {
                v6 = -1;
                v49 = -1;
              }
            }
            else
            {
              v6 = v10 + 2 * (5 * v6 - 24);
              v49 = v6;
            }
            break;
          case 6:
            switch ( v10 )
            {
              case 'I':
                goto LABEL_151;
              case 'h':
                v5 |= 0x20u;
                goto LABEL_136;
              case 'j':
                goto LABEL_151;
              case 'l':
                v39 = *format;
                if ( *format == 108 )
                  ++format;
                v40 = 4096;
                if ( v39 != 108 )
                  v40 = 16;
                v5 |= v40;
                goto LABEL_136;
              case 't':
                goto LABEL_151;
              case 'w':
                v5 |= 0x800u;
                goto LABEL_136;
              case 'z':
LABEL_151:
                v5 |= 0x8000u;
                if ( v10 == 73 )
                {
                  if ( *format == 54 && format[1] == 52 )
                  {
                    format += 2;
                    goto LABEL_136;
                  }
                  if ( *format == 51 && format[1] == 50 )
                  {
                    format += 2;
                    v5 &= ~0x8000u;
                    goto LABEL_136;
                  }
                }
                else if ( v10 == 106 )
                {
                  goto LABEL_136;
                }
                v41 = *format;
                LOWORD(v41) = v41 - 88;
                if ( (unsigned __int16)v41 <= 0x20u )
                {
                  v42 = 0x120821001LL;
                  if ( _bittest64(&v42, v41) )
                    goto LABEL_136;
                }
                v52 = 0;
$NORMAL_STATE:
                v51 = 1;
                write_char(v10, f, &charsout);
LABEL_134:
                v11 = charsout;
LABEL_135:
                v13 = v52;
                break;
            }
            break;
          case 7:
            if ( v10 <= 0x69u )
            {
              if ( v10 == 105 )
                goto LABEL_24;
              if ( v10 == 67 )
              {
                if ( (v5 & 0x830) == 0 )
                  v5 |= 0x20u;
                goto LABEL_54;
              }
              if ( v10 != 83 )
              {
                if ( v10 != 88 )
                {
                  if ( v10 == 90 )
                  {
                    v17 = *(unsigned __int16 **)v9;
                    v56 = v9 + 8;
                    if ( v17 && (p_buffer = ($B4FF2100EA110D8CD0B9C89F852FB035 *)*((_QWORD *)v17 + 1)) != 0LL )
                    {
                      v18 = *v17;
                      if ( v17[1] < (unsigned __int16)v18 )
                        goto LABEL_194;
                      LODWORD(v12) = *v17;
                      if ( (v5 & 0x800) != 0 )
                      {
                        if ( (v18 & 1) != 0 || ((unsigned __int8)p_buffer & 1) != 0 )
                          goto LABEL_194;
                        LODWORD(v12) = v18 >> 1;
                        v51 = 1;
                      }
                      else
                      {
                        v51 = 0;
                      }
                    }
                    else
                    {
                      v12 = -1LL;
                      p_buffer = ($B4FF2100EA110D8CD0B9C89F852FB035 *)"(null)";
                      do
                        ++v12;
                      while ( aNull_0[v12] );
                    }
                    goto LABEL_105;
                  }
                  if ( v10 != 99 )
                  {
                    if ( v10 == 100 )
                    {
LABEL_24:
                      v5 |= 0x40u;
                      goto LABEL_25;
                    }
LABEL_105:
                    if ( v57 )
                      goto LABEL_135;
                    if ( (v5 & 0x40) != 0 )
                    {
                      if ( (v5 & 0x100) != 0 )
                      {
                        v29 = 45;
                        goto LABEL_111;
                      }
                      if ( (v5 & 1) != 0 )
                      {
                        v29 = 43;
LABEL_111:
                        prefix[0] = v29;
LABEL_112:
                        v30 = 1;
                        v48 = 1;
LABEL_116:
                        v31 = v55 - v12 - v30;
                        if ( (v5 & 0xC) == 0 )
                          write_multi_char(0x20u, v31, f, &charsout);
                        write_string(prefix, v30, f, &charsout);
                        v32 = f;
                        if ( (v5 & 0xC) == 8 )
                          write_multi_char(0x30u, v31, f, &charsout);
                        if ( !v51 && (int)v12 > 0 )
                        {
                          v33 = (const char *)p_buffer;
                          v34 = v12;
                          while ( 1 )
                          {
                            --v34;
                            v35 = mbtowc(&wchar, v33, _mb_cur_max);
                            v36 = v35;
                            if ( v35 == 2 )
                            {
                              --v34;
                            }
                            else if ( v35 <= 0 )
                            {
                              format = (wchar_t *)v61;
                              v11 = -1;
                              v32 = f;
                              charsout = -1;
                              goto LABEL_131;
                            }
                            write_char(wchar, f, &charsout);
                            v33 += v36;
                            if ( v34 <= 0 )
                            {
                              format = (wchar_t *)v61;
                              v32 = f;
                              goto LABEL_130;
                            }
                          }
                        }
                        write_string((wchar_t *)p_buffer, v12, v32, &charsout);
LABEL_130:
                        v11 = charsout;
LABEL_131:
                        if ( v11 < 0 || (v5 & 4) == 0 )
                        {
                          v6 = v49;
LABEL_143:
                          v13 = v52;
                          break;
                        }
                        write_multi_char(0x20u, v31, v32, &charsout);
                        v6 = v49;
                        goto LABEL_134;
                      }
                      if ( (v5 & 2) != 0 )
                      {
                        prefix[0] = 32;
                        goto LABEL_112;
                      }
                    }
                    v30 = v48;
                    goto LABEL_116;
                  }
LABEL_54:
                  v21 = *(_WORD *)v9;
                  v51 = 1;
                  v56 = v9 + 8;
                  wchar = v21;
                  if ( (v5 & 0x20) != 0 )
                  {
                    tempchar[0] = v21;
                    tempchar[1] = 0;
                    if ( mbtowc((wchar_t *)&buffer, tempchar, _mb_cur_max) < 0 )
                      v57 = 1;
                  }
                  else
                  {
                    buffer.wz[0] = v21;
                  }
                  p_buffer = &buffer;
                  LODWORD(v12) = 1;
                  goto LABEL_105;
                }
LABEL_74:
                v22 = 7;
LABEL_75:
                v59 = v22;
                if ( (v5 & 0x80u) != 0 )
                {
                  v48 = 2;
                  prefix[0] = 48;
                  prefix[1] = v22 + 81;
                }
                v15 = 16LL;
                goto $COMMON_INT;
              }
              if ( (v5 & 0x830) == 0 )
                v5 |= 0x20u;
LABEL_43:
              p_buffer = *($B4FF2100EA110D8CD0B9C89F852FB035 **)v9;
              v19 = v6;
              if ( v6 == -1 )
                v19 = 0x7FFFFFFF;
              v56 = v9 + 8;
              if ( (v5 & 0x20) != 0 )
              {
                v20 = (const char *)p_buffer;
                if ( !p_buffer )
                {
                  p_buffer = ($B4FF2100EA110D8CD0B9C89F852FB035 *)"(null)";
                  v20 = "(null)";
                }
                LODWORD(v12) = 0;
                if ( v19 > 0 )
                {
                  do
                  {
                    if ( !*v20 )
                      break;
                    ++v20;
                    LODWORD(v12) = v12 + 1;
                  }
                  while ( (int)v12 < v19 );
                }
              }
              else
              {
                v51 = 1;
                v23 = L"(null)";
                if ( p_buffer )
                  v23 = (const wchar_t *)p_buffer;
                p_buffer = ($B4FF2100EA110D8CD0B9C89F852FB035 *)v23;
                while ( v19 )
                {
                  --v19;
                  if ( !*v23 )
                    break;
                  ++v23;
                }
                LODWORD(v12) = ((char *)v23 - (char *)p_buffer) >> 1;
              }
              goto LABEL_105;
            }
            switch ( v10 )
            {
              case 'n':
                v56 = v9 + 8;
                v38 = *(_WORD **)v9;
                if ( !(unsigned int)get_printf_count_output() )
                  goto LABEL_194;
                if ( (v5 & 0x20) != 0 )
                  *v38 = v11;
                else
                  *(_DWORD *)v38 = v11;
                v57 = 1;
                goto LABEL_143;
              case 'o':
                v15 = 8LL;
                if ( (v5 & 0x80u) != 0 )
                  v5 |= 0x200u;
                goto $COMMON_INT;
              case 'p':
                v6 = 16;
                v5 |= 0x8000u;
                goto LABEL_74;
              case 's':
                goto LABEL_43;
            }
            if ( v10 != 117 )
            {
              if ( v10 != 120 )
                goto LABEL_105;
              v22 = 39;
              goto LABEL_75;
            }
LABEL_25:
            v15 = 10LL;
$COMMON_INT:
            v56 = v9 + 8;
            v62 = v9 + 8;
            if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
            {
              v16 = *(_QWORD *)v9;
              if ( (v5 & 0x40) != 0 )
                goto LABEL_86;
LABEL_89:
              v24 = (unsigned int)v16;
              if ( (v5 & 0x9000) != 0 )
                v24 = v16;
              if ( v6 >= 0 )
              {
                v5 &= ~8u;
                if ( v6 > 512 )
                  v6 = 512;
              }
              else
              {
                v6 = 1;
              }
              v25 = v59;
              v48 &= -(v24 != 0);
              v60 = v48;
              for ( i = &buffer.sz[511]; ; --i )
              {
                v27 = v6--;
                if ( v27 <= 0 && !v24 )
                  break;
                v28 = v24 % v15 + 48;
                v24 /= v15;
                if ( v28 > 57 )
                  LOBYTE(v28) = v25 + v28;
                *i = v28;
              }
              p_buffer = ($B4FF2100EA110D8CD0B9C89F852FB035 *)(i + 1);
              LODWORD(v12) = (unsigned int)&buffer.wz[56] + 399 - (_DWORD)i;
              v49 = v6;
              if ( (v5 & 0x200) != 0 )
              {
                if ( !(_DWORD)v12 || (v56 = v62, v48 = v60, p_buffer->sz[0] != 48) )
                {
                  p_buffer = ($B4FF2100EA110D8CD0B9C89F852FB035 *)i;
                  v56 = v62;
                  LODWORD(v12) = v12 + 1;
                  v48 = v60;
                  *i = 48;
                }
              }
              goto LABEL_105;
            }
            if ( (v5 & 0x20) != 0 )
            {
              if ( (v5 & 0x40) == 0 )
              {
                v16 = *(unsigned __int16 *)v9;
                goto LABEL_89;
              }
              v16 = *(__int16 *)v9;
            }
            else
            {
              if ( (v5 & 0x40) == 0 )
              {
                v16 = *(unsigned int *)v9;
                goto LABEL_89;
              }
              v16 = *(int *)v9;
            }
LABEL_86:
            if ( v16 < 0 )
            {
              v16 = -v16;
              v5 |= 0x100u;
            }
            goto LABEL_89;
        }
LABEL_136:
        v10 = *format;
        v9 = v56;
      }
      while ( *format );
    }
    return (unsigned int)v11;
  }
  else
  {
LABEL_194:
    FxDeviceBase::AddChildList(0LL);
    return 0xFFFFFFFFLL;
  }
}
