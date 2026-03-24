/*
 * XREFs of ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C005FAB0
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C005F890 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0060050 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C009EBFC (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00BB998 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     cCapString @ 0x1C00BBAF4 (cCapString.c)
 *     GetAppCompatFlags2 @ 0x1C00E0FC0 (GetAppCompatFlags2.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall MAPPER::bFoundExactMatch(MAPPER *this, struct _FONTHASH **a2, int a3)
{
  _DWORD *v3; // rax
  unsigned int v4; // r12d
  __int64 v6; // r10
  WCHAR *v7; // r15
  char *v8; // rdi
  struct _HASHBUCKET *j; // r14
  char *v10; // r9
  __int64 v11; // rax
  WCHAR *v12; // rbx
  char v13; // r11
  char *v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rax
  char *v17; // rbx
  unsigned __int16 *v18; // rax
  int v19; // ecx
  int v20; // edx
  struct _HASHBUCKET *v21; // r9
  WCHAR *v22; // rdx
  unsigned int v23; // ecx
  WCHAR v24; // ax
  WCHAR *v25; // rcx
  WCHAR v26; // dx
  struct _HASHBUCKET *v27; // rbx
  struct _HASHBUCKET *v28; // rax
  char *v29; // r15
  int v30; // edi
  struct _HASHBUCKET **v31; // rsi
  struct _HASHBUCKET *v32; // r14
  _QWORD *v33; // r11
  unsigned int v34; // r10d
  _DWORD *v35; // rdx
  int v36; // ecx
  _DWORD *v37; // rax
  int v39; // ecx
  unsigned int v40; // edx
  int v41; // ecx
  int v42; // eax
  unsigned int v43; // eax
  int v44; // edx
  unsigned int v45; // eax
  _QWORD *v46; // rbx
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // r10
  _QWORD *v50; // rcx
  __int64 v51; // rax
  int v52; // eax
  int v53; // eax
  const unsigned __int16 *v54; // rbx
  const unsigned __int16 *v55; // rbx
  __int64 v56; // r9
  __int16 AppCompatFlags2; // ax
  char *v58; // rdi
  unsigned __int16 *v59; // rax
  int v60; // edx
  int v61; // ecx
  char v62; // [rsp+30h] [rbp-99h]
  unsigned __int8 v63[3]; // [rsp+31h] [rbp-98h] BYREF
  char v64; // [rsp+34h] [rbp-95h] BYREF
  char v65; // [rsp+35h] [rbp-94h]
  char v66; // [rsp+36h] [rbp-93h]
  __int64 v67; // [rsp+38h] [rbp-91h] BYREF
  int v68; // [rsp+40h] [rbp-89h]
  int v69; // [rsp+44h] [rbp-85h]
  int v70; // [rsp+48h] [rbp-81h]
  char *i; // [rsp+50h] [rbp-79h]
  int v72; // [rsp+58h] [rbp-71h]
  _QWORD *v73; // [rsp+60h] [rbp-69h]
  _QWORD v74[2]; // [rsp+68h] [rbp-61h] BYREF
  UNICODE_STRING SourceString; // [rsp+78h] [rbp-51h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-41h] BYREF
  struct _HASHBUCKET *v77; // [rsp+98h] [rbp-31h] BYREF
  struct _HASHBUCKET *v78; // [rsp+A0h] [rbp-29h]
  struct _HASHBUCKET *v79; // [rsp+A8h] [rbp-21h]
  _WORD v80[32]; // [rsp+B0h] [rbp-19h] BYREF

  v3 = (_DWORD *)*((_QWORD *)this + 29);
  v4 = 0;
  v63[0] = 1;
  v72 = a3;
  v73 = 0LL;
  *v3 &= ~1u;
  v6 = (__int64)*a2;
  v68 = 0;
  v69 = 0;
  v74[0] = a2;
  v67 = v6;
  v74[1] = v6;
  if ( !v6 )
    return 0LL;
  v7 = (WCHAR *)*((_QWORD *)this + 2);
  v8 = (char *)gpfsTable;
  j = 0LL;
  v70 = *(_DWORD *)(v6 + 4);
  v10 = 0LL;
  v11 = *((_QWORD *)this + 1);
  v12 = v7;
  v79 = 0LL;
  v78 = 0LL;
  v77 = 0LL;
  v13 = *(_BYTE *)(v11 + 23);
  SourceString = 0LL;
  DestinationString = 0LL;
  v62 = v13;
  v14 = (char *)gpfsTable + 196 * gcfsTable;
  v65 = v13;
  v66 = v13;
  v64 = v13;
  for ( i = 0LL; v12 < v7 + 31; ++v12 )
  {
    if ( !*v12 )
      break;
  }
  v15 = v12 - v7;
  if ( (_DWORD)v15 )
  {
    SourceString.Buffer = v7;
    SourceString.MaximumLength = 64;
    DestinationString.MaximumLength = 64;
    SourceString.Length = 2 * v15;
    DestinationString.Buffer = v80;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    v6 = v67;
    v10 = 0LL;
    v13 = v62;
  }
  v16 = (int)v15;
  v17 = 0LL;
  v80[v16] = 0;
  if ( v8 >= v14 )
    goto LABEL_14;
  while ( 1 )
  {
    v18 = v80;
    do
    {
      v19 = *(unsigned __int16 *)((char *)v18 + v8 + 64 - (char *)v80);
      v20 = *v18 - v19;
      if ( v20 )
        break;
      ++v18;
    }
    while ( v19 );
    if ( v20 )
      goto LABEL_12;
    if ( v8 != gpfsTable )
    {
      if ( (v8[129] & 1) != 0 )
      {
        v17 = v8;
      }
      else
      {
        if ( v13 == v8[128] )
          v10 = v8;
        i = v10;
      }
      goto LABEL_12;
    }
    AppCompatFlags2 = GetAppCompatFlags2(1024LL);
    v10 = i;
    if ( (AppCompatFlags2 & 0x400) != 0 )
      break;
    v13 = v62;
LABEL_12:
    v8 += 196;
    if ( v8 >= v14 )
      goto LABEL_13;
  }
  v17 = v8;
LABEL_13:
  v6 = v67;
  if ( v10 )
  {
LABEL_74:
    v55 = (const unsigned __int16 *)(v10 + 130);
    if ( (v10[195] & 1) != 0 )
    {
      v77 = FHOBJ::pbktSearch((FHOBJ *)v74, v7, 0LL, 0LL, 0);
      j = v77;
      v27 = FHOBJ::pbktSearch((FHOBJ *)v74, v55, 0LL, 0LL, 0);
      v78 = v27;
    }
    else
    {
      v27 = FHOBJ::pbktSearch((FHOBJ *)v74, v55, 0LL, 0LL, 0);
      v78 = v27;
      v65 = i[194];
    }
    goto LABEL_30;
  }
LABEL_14:
  i = v17;
  v10 = v17;
  if ( v17 )
    goto LABEL_74;
  v21 = 0LL;
  if ( v7 )
  {
    v22 = v7;
    v23 = 0;
    if ( *v7 )
    {
      LOBYTE(v24) = *v7;
      do
      {
        ++v22;
        v23 = (unsigned __int8)v24 + 257 * v23;
        v24 = *v22;
      }
      while ( *v22 );
    }
    for ( j = *(struct _HASHBUCKET **)(v6 + 8LL * (v23 % *(_DWORD *)(v6 + 8)) + 40); j; j = *(struct _HASHBUCKET **)j )
    {
      v25 = v7;
      if ( *v7 == *((_WORD *)j + 30) )
      {
        v26 = *v7;
        while ( v26 )
        {
          v26 = v25[1];
          if ( v26 != *(WCHAR *)((char *)++v25 + j - (struct _HASHBUCKET *)v7 + 60) )
            goto LABEL_24;
        }
        if ( (*((_DWORD *)j + 8) & 2) == 0 )
          goto LABEL_27;
        v21 = j;
      }
LABEL_24:
      ;
    }
    j = v21;
  }
LABEL_27:
  v77 = j;
  if ( !v72 )
    goto LABEL_29;
  if ( j )
    goto LABEL_29;
  v54 = (const unsigned __int16 *)gpfmffTable;
  if ( !gpfmffTable )
    goto LABEL_29;
  v58 = (char *)gpfmffTable + 128 * (unsigned __int64)gcfmffTable;
  cCapString(v80, v7, 32LL, v21);
  if ( v54 >= (const unsigned __int16 *)v58 )
    goto LABEL_29;
  while ( 1 )
  {
    v59 = v80;
    do
    {
      v60 = *(unsigned __int16 *)((char *)v59 + (char *)v54 - (char *)v80);
      v61 = *v59 - v60;
      if ( v61 )
        break;
      ++v59;
    }
    while ( v60 );
    if ( !v61 )
      break;
    v54 += 64;
    if ( v54 >= (const unsigned __int16 *)v58 )
      goto LABEL_29;
  }
  if ( v54 )
  {
    v27 = FHOBJ::pbktSearch((FHOBJ *)v74, v54 + 32, 0LL, 0LL, 0);
    v78 = v27;
    v69 = 1;
  }
  else
  {
LABEL_29:
    v27 = 0LL;
  }
LABEL_30:
  if ( *((_WORD *)this + 12) && v70 == 1 )
  {
    v28 = FHOBJ::pbktSearch((FHOBJ *)v74, (const unsigned __int16 *)this + 12, 0LL, 0LL, 0);
    v79 = v28;
  }
  else
  {
    v28 = 0LL;
  }
  if ( !j && !v27 && !v28 )
    return 0LL;
  v29 = &v64;
  v30 = 0;
  v31 = &v77;
  **((_DWORD **)this + 29) |= 1u;
  *((_DWORD *)this + 63) |= 0x40000000u;
  while ( 1 )
  {
    v32 = *v31;
    if ( *v31 )
    {
      v39 = *((_DWORD *)this + 63);
      v40 = v39 & 0xFFBFFFFF;
      v41 = v39 | 0x400000;
      *((_BYTE *)this + 284) = *v29;
      v42 = *((_DWORD *)v32 + 8);
      v73 = 0LL;
      if ( (v42 & 2) != 0 )
        v40 = v41;
      v43 = v40;
      v44 = v40 & 0x7FFFFFFF;
      v45 = v43 | 0x80000000;
      if ( v30 == 2 )
        v44 = v45;
      *((_DWORD *)this + 63) = v44;
      v46 = (_QWORD *)*((_QWORD *)v32 + 1);
      if ( v46 )
        break;
    }
LABEL_35:
    ++v30;
    ++v29;
    ++v31;
    if ( v30 >= 3 )
    {
      v33 = v73;
      v34 = 0;
      goto LABEL_37;
    }
  }
  while ( 2 )
  {
    v67 = v46[1];
    if ( !(unsigned int)MAPPER::bNearMatch(this, (struct PFEOBJ *)&v67, v63, 0) )
    {
LABEL_53:
      v46 = (_QWORD *)*v46;
      if ( !v46 )
        goto LABEL_35;
      continue;
    }
    break;
  }
  v33 = v46;
  v47 = v63[0];
  v48 = *((_DWORD *)this + 63);
  v49 = v46[1];
  **((_DWORD **)this + 27) = *((_DWORD *)this + 47);
  v50 = (_QWORD *)*((_QWORD *)this + 28);
  v51 = *((_QWORD *)this + 24);
  v68 = v30;
  v73 = v46;
  *v50 = v51;
  **((_DWORD **)this + 29) = **((_DWORD **)this + 29) & 0xFFFFFF | (v47 << 24);
  *((_QWORD *)this + 25) = v49;
  if ( (v48 & 0x80u) != 0 )
  {
    *((_DWORD *)this + 63) |= 0x1000000u;
  }
  else
  {
    v52 = *(_DWORD *)(v49 + 80);
    *((_DWORD *)this + 63) &= ~0x1000000u;
    *((_DWORD *)this + 52) = v52;
  }
  v53 = *((_DWORD *)this + 46);
  if ( v53 )
  {
LABEL_58:
    *((_DWORD *)this + 45) = v53;
    goto LABEL_53;
  }
  if ( *((_DWORD *)v32 + 7) && (PFEOBJ::flFontType((PFEOBJ *)&v67) & 1) == 0 )
  {
    *((_DWORD *)this + 46) = 1;
    v53 = 1;
    goto LABEL_58;
  }
  v34 = 1;
LABEL_37:
  if ( v33 )
  {
    if ( v68 == 1 )
    {
      if ( v69 )
        goto LABEL_40;
    }
    else if ( v70 )
    {
LABEL_40:
      v35 = (_DWORD *)*((_QWORD *)this + 29);
      v36 = HIBYTE(*v35);
      if ( HIBYTE(*v35) != 0xFF
        || (v56 = v33[1], *(_DWORD *)(*(_QWORD *)(v56 + 32) + 40LL))
        || (*(_DWORD *)(v56 + 12) & 1) != 0 )
      {
        if ( v36 == 255 )
        {
          v4 = 1;
        }
        else
        {
          v37 = &charsets;
          do
          {
            if ( *v37 == v36 )
            {
              v4 = codepages[v4];
              goto LABEL_45;
            }
            ++v4;
            ++v37;
          }
          while ( v4 < 0x11 );
          v4 = gbDBCSCodePage != 0 ? 0x4E4 : 0;
        }
      }
      else if ( gbDBCSCodePage )
      {
        v4 = 1252;
      }
LABEL_45:
      *v35 |= v4 << 8;
      goto LABEL_46;
    }
    **((_DWORD **)this + 29) |= 2u;
    goto LABEL_40;
  }
LABEL_46:
  *((_DWORD *)this + 63) &= ~0x400000u;
  return v34;
}
