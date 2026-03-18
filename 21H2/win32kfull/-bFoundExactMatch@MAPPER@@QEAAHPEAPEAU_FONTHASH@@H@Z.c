/*
 * XREFs of ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C001D360
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C001D14C (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C0013154 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0013374 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     cCapString @ 0x1C0014ABC (cCapString.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C001D8F0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall MAPPER::bFoundExactMatch(MAPPER *this, struct _FONTHASH **a2, int a3)
{
  _DWORD *v3; // rax
  unsigned int v4; // r12d
  struct _FONTHASH *v5; // rdi
  WCHAR *v6; // r13
  char *v7; // rsi
  struct _HASHBUCKET *v8; // r14
  char *v9; // r11
  __int64 v10; // rax
  char *v11; // r9
  WCHAR *v12; // rbx
  char v13; // r10
  char *v14; // r15
  __int64 v15; // rbx
  unsigned __int16 *v16; // rax
  int v17; // ecx
  int v18; // edx
  char *v19; // r10
  WCHAR *v20; // rdx
  unsigned int v21; // ecx
  WCHAR v22; // ax
  char *j; // r8
  WCHAR *v24; // rcx
  WCHAR v25; // dx
  MAPPER *v26; // r13
  char *v27; // r15
  int v28; // edi
  struct _HASHBUCKET **v29; // rsi
  struct _HASHBUCKET *v30; // r14
  _QWORD *v31; // r11
  unsigned int v32; // r10d
  _DWORD *v33; // rdx
  _DWORD *v34; // rcx
  int v35; // eax
  int v37; // ecx
  unsigned int v38; // edx
  int v39; // ecx
  int v40; // eax
  unsigned int v41; // eax
  int v42; // edx
  unsigned int v43; // eax
  _QWORD *v44; // rbx
  int v45; // r8d
  int v46; // r9d
  __int64 v47; // r10
  _QWORD *v48; // rcx
  __int64 v49; // rax
  int v50; // eax
  int v51; // eax
  const unsigned __int16 *v52; // rbx
  const unsigned __int16 *v53; // rbx
  struct _HASHBUCKET *v54; // rax
  __int64 ThreadWin32Thread; // rax
  char *v56; // rdi
  WCHAR *v57; // rax
  int v58; // edx
  int v59; // ecx
  __int64 v60; // r9
  char v61; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v62[3]; // [rsp+31h] [rbp-CFh] BYREF
  char v63; // [rsp+34h] [rbp-CCh] BYREF
  char v64; // [rsp+35h] [rbp-CBh]
  char v65; // [rsp+36h] [rbp-CAh]
  char *i; // [rsp+38h] [rbp-C8h]
  char *v67; // [rsp+40h] [rbp-C0h] BYREF
  int v68; // [rsp+48h] [rbp-B8h]
  int v69; // [rsp+4Ch] [rbp-B4h]
  int v70; // [rsp+50h] [rbp-B0h]
  int v71; // [rsp+54h] [rbp-ACh]
  _QWORD *v72; // [rsp+60h] [rbp-A0h]
  struct _FONTHASH **v73; // [rsp+68h] [rbp-98h] BYREF
  struct _FONTHASH *v74; // [rsp+70h] [rbp-90h]
  UNICODE_STRING SourceString; // [rsp+78h] [rbp-88h] BYREF
  MAPPER *v76; // [rsp+88h] [rbp-78h]
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  struct _HASHBUCKET *v78; // [rsp+A0h] [rbp-60h] BYREF
  struct _HASHBUCKET *v79; // [rsp+A8h] [rbp-58h]
  struct _HASHBUCKET *v80; // [rsp+B0h] [rbp-50h]
  _WORD v81[32]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR v82[32]; // [rsp+100h] [rbp+0h] BYREF

  v3 = (_DWORD *)*((_QWORD *)this + 29);
  v4 = 0;
  v62[0] = 1;
  v71 = a3;
  v76 = this;
  *v3 &= ~1u;
  v5 = *a2;
  v72 = 0LL;
  v78 = 0LL;
  v80 = 0LL;
  v68 = 0;
  v69 = 0;
  v73 = a2;
  v74 = v5;
  if ( !v5 )
    return 0LL;
  v6 = (WCHAR *)*((_QWORD *)this + 2);
  v7 = (char *)gpfsTable;
  v8 = 0LL;
  v70 = *((_DWORD *)v5 + 1);
  v9 = 0LL;
  v10 = *((_QWORD *)this + 1);
  v11 = 0LL;
  v80 = 0LL;
  v12 = v6;
  v79 = 0LL;
  v78 = 0LL;
  v13 = *(_BYTE *)(v10 + 23);
  SourceString = 0LL;
  DestinationString = 0LL;
  v61 = v13;
  v14 = (char *)gpfsTable + 196 * gcfsTable;
  v64 = v13;
  v65 = v13;
  v63 = v13;
  v67 = 0LL;
  for ( i = 0LL; v12 < v6 + 31; ++v12 )
  {
    if ( !*v12 )
      break;
  }
  v15 = v12 - v6;
  if ( (_DWORD)v15 )
  {
    SourceString.Buffer = v6;
    SourceString.MaximumLength = 64;
    DestinationString.MaximumLength = 64;
    SourceString.Length = 2 * v15;
    DestinationString.Buffer = v81;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    v13 = v61;
    v11 = 0LL;
    v9 = 0LL;
  }
  v81[(int)v15] = 0;
  if ( v7 < v14 )
  {
    while ( 1 )
    {
      v16 = v81;
      do
      {
        v17 = *(unsigned __int16 *)((char *)v16 + v7 + 64 - (char *)v81);
        v18 = *v16 - v17;
        if ( v18 )
          break;
        ++v16;
      }
      while ( v17 );
      if ( !v18 )
      {
        if ( v7 == gpfsTable )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v11 = i;
          if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u && (*(_DWORD *)(ThreadWin32Thread + 648) & 0x400) != 0 )
          {
            v9 = v7;
LABEL_13:
            if ( !v11 )
            {
              v8 = v79;
              v5 = v74;
              break;
            }
LABEL_74:
            v53 = (const unsigned __int16 *)(v11 + 130);
            if ( (v11[195] & 1) != 0 )
            {
              v78 = FHOBJ::pbktSearch((FHOBJ *)&v73, v6, 0LL, 0LL, 0);
              v54 = FHOBJ::pbktSearch((FHOBJ *)&v73, v53, 0LL, 0LL, 0);
              goto LABEL_76;
            }
            v8 = FHOBJ::pbktSearch((FHOBJ *)&v73, v53, 0LL, 0LL, 0);
            v79 = v8;
            v64 = i[194];
            goto LABEL_31;
          }
          v9 = v67;
          v13 = v61;
        }
        else if ( (v7[129] & 1) != 0 )
        {
          v9 = v7;
          v67 = v7;
        }
        else
        {
          if ( v13 == v7[128] )
            v11 = v7;
          i = v11;
        }
      }
      v7 += 196;
      if ( v7 >= v14 )
        goto LABEL_13;
    }
  }
  i = v9;
  v11 = v9;
  if ( v9 )
    goto LABEL_74;
  v19 = 0LL;
  if ( v6 )
  {
    v20 = v6;
    v21 = 0;
    if ( *v6 )
    {
      LOBYTE(v22) = *v6;
      do
      {
        ++v20;
        v21 = (unsigned __int8)v22 + 257 * v21;
        v22 = *v20;
      }
      while ( *v20 );
    }
    for ( j = (char *)*((_QWORD *)v5 + v21 % *((_DWORD *)v5 + 2) + 5); j; j = *(char **)j )
    {
      v24 = v6;
      if ( *v6 == *((_WORD *)j + 30) )
      {
        v25 = *v6;
        while ( v25 )
        {
          v25 = v24[1];
          if ( v25 != *(WCHAR *)((char *)++v24 + j - (char *)v6 + 60) )
            goto LABEL_22;
        }
        if ( (*((_DWORD *)j + 8) & 2) == 0 )
          goto LABEL_29;
        v19 = j;
      }
LABEL_22:
      ;
    }
    j = v19;
  }
  else
  {
    j = 0LL;
  }
LABEL_29:
  v78 = (struct _HASHBUCKET *)j;
  if ( v71 )
  {
    if ( !j )
    {
      v52 = (const unsigned __int16 *)gpfmffTable;
      if ( gpfmffTable )
      {
        v56 = (char *)gpfmffTable + 128 * (unsigned __int64)gcfmffTable;
        cCapString(v82, v6, 32);
        if ( v52 < (const unsigned __int16 *)v56 )
        {
          while ( 1 )
          {
            v57 = v82;
            do
            {
              v58 = *(WCHAR *)((char *)v57 + (char *)v52 - (char *)v82);
              v59 = *v57 - v58;
              if ( v59 )
                break;
              ++v57;
            }
            while ( v58 );
            if ( !v59 )
              break;
            v52 += 64;
            if ( v52 >= (const unsigned __int16 *)v56 )
              goto LABEL_31;
          }
          if ( v52 )
          {
            v54 = FHOBJ::pbktSearch((FHOBJ *)&v73, v52 + 32, 0LL, 0LL, 0);
            v69 = 1;
LABEL_76:
            v79 = v54;
            v8 = v54;
          }
        }
      }
    }
  }
LABEL_31:
  v26 = v76;
  if ( *((_WORD *)v76 + 12) && v70 == 1 )
    v80 = FHOBJ::pbktSearch((FHOBJ *)&v73, (const unsigned __int16 *)v76 + 12, 0LL, 0LL, 0);
  if ( !v78 && !v8 && !v80 )
    return 0LL;
  v27 = &v63;
  v28 = 0;
  v29 = &v78;
  **((_DWORD **)v26 + 29) |= 1u;
  *((_DWORD *)v26 + 63) |= 0x40000000u;
  while ( 1 )
  {
    v30 = *v29;
    if ( *v29 )
    {
      v37 = *((_DWORD *)v26 + 63);
      v38 = v37 & 0xFFBFFFFF;
      v39 = v37 | 0x400000;
      *((_BYTE *)v26 + 284) = *v27;
      v40 = *((_DWORD *)v30 + 8);
      v72 = 0LL;
      if ( (v40 & 2) != 0 )
        v38 = v39;
      v41 = v38;
      v42 = v38 & 0x7FFFFFFF;
      v43 = v41 | 0x80000000;
      if ( v28 == 2 )
        v42 = v43;
      *((_DWORD *)v26 + 63) = v42;
      v44 = (_QWORD *)*((_QWORD *)v30 + 1);
      if ( v44 )
        break;
    }
LABEL_35:
    ++v28;
    ++v27;
    ++v29;
    if ( v28 >= 3 )
    {
      v31 = v72;
      v32 = 0;
      goto LABEL_37;
    }
  }
  while ( 1 )
  {
    v67 = (char *)v44[1];
    if ( (unsigned int)MAPPER::bNearMatch(v26, (struct PFEOBJ *)&v67, v62, 0) )
      break;
LABEL_53:
    v44 = (_QWORD *)*v44;
    if ( !v44 )
      goto LABEL_35;
  }
  v31 = v44;
  v45 = v62[0];
  v46 = *((_DWORD *)v26 + 63);
  v47 = v44[1];
  **((_DWORD **)v26 + 27) = *((_DWORD *)v26 + 47);
  v48 = (_QWORD *)*((_QWORD *)v26 + 28);
  v49 = *((_QWORD *)v26 + 24);
  v68 = v28;
  v72 = v44;
  *v48 = v49;
  **((_DWORD **)v26 + 29) = **((_DWORD **)v26 + 29) & 0xFFFFFF | (v45 << 24);
  *((_QWORD *)v26 + 25) = v47;
  if ( (v46 & 0x80u) != 0 )
  {
    *((_DWORD *)v26 + 63) |= 0x1000000u;
  }
  else
  {
    v50 = *(_DWORD *)(v47 + 80);
    *((_DWORD *)v26 + 63) &= ~0x1000000u;
    *((_DWORD *)v26 + 52) = v50;
  }
  v51 = *((_DWORD *)v26 + 46);
  if ( v51 )
  {
LABEL_58:
    *((_DWORD *)v26 + 45) = v51;
    goto LABEL_53;
  }
  if ( *((_DWORD *)v30 + 7) && (PFEOBJ::flFontType((PFEOBJ *)&v67) & 1) == 0 )
  {
    v51 = 1;
    *((_DWORD *)v26 + 46) = 1;
    goto LABEL_58;
  }
  v32 = 1;
LABEL_37:
  if ( v31 )
  {
    if ( v68 == 1 )
    {
      if ( v69 )
        goto LABEL_40;
    }
    else if ( v70 )
    {
LABEL_40:
      v33 = (_DWORD *)*((_QWORD *)v26 + 29);
      if ( HIBYTE(*v33) != 0xFF
        || (v60 = v31[1], *(_DWORD *)(*(_QWORD *)(v60 + 32) + 40LL))
        || (*(_DWORD *)(v60 + 12) & 1) != 0 )
      {
        if ( HIBYTE(*v33) == 255 )
        {
          v35 = 1;
        }
        else
        {
          v34 = &charsets;
          while ( *v34 != HIBYTE(*v33) )
          {
            ++v4;
            ++v34;
            if ( v4 >= 0x11 )
              goto LABEL_102;
          }
          v35 = codepages[v4];
        }
      }
      else
      {
LABEL_102:
        v35 = gbDBCSCodePage != 0 ? 0x4E4 : 0;
      }
      *v33 |= v35 << 8;
      goto LABEL_46;
    }
    **((_DWORD **)v26 + 29) |= 2u;
    goto LABEL_40;
  }
LABEL_46:
  *((_DWORD *)v26 + 63) &= ~0x400000u;
  return v32;
}
