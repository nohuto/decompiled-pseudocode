/*
 * XREFs of ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C011B3A0
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C011B194 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0114DE0 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C0117C98 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     cCapString @ 0x1C0117F80 (cCapString.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C011B94C (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall MAPPER::bFoundExactMatch(MAPPER *this, struct _FONTHASH **a2, int a3)
{
  _DWORD *v3; // rax
  unsigned int v4; // r12d
  struct _FONTHASH *v5; // rdi
  struct _HASHBUCKET *v6; // r14
  WCHAR *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  WCHAR *v10; // rcx
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r9
  __int64 v13; // r11
  WCHAR *v14; // rbx
  unsigned __int64 v15; // rsi
  __int64 v16; // r15
  unsigned __int64 i; // r15
  __int64 v18; // rbx
  unsigned __int16 *v19; // rax
  int v20; // edx
  char *v21; // r10
  WCHAR *v22; // rdx
  WCHAR v23; // ax
  char *j; // r8
  WCHAR v25; // dx
  MAPPER *v26; // r13
  char *v27; // r15
  int v28; // r14d
  struct _HASHBUCKET **v29; // rdi
  struct _HASHBUCKET *v30; // rbx
  _QWORD *v31; // r11
  int v32; // ecx
  unsigned int v33; // edx
  int v34; // eax
  int v35; // ecx
  unsigned int v36; // eax
  int v37; // edx
  unsigned int v38; // eax
  _QWORD *k; // rsi
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // r10
  _QWORD *v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  int v46; // eax
  unsigned int v47; // ebx
  Gre::Base *v48; // rcx
  _DWORD *v49; // rax
  int v50; // eax
  __int64 v52; // rcx
  unsigned __int64 v53; // rbx
  const unsigned __int16 *v54; // rbx
  struct _HASHBUCKET *v55; // rax
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v57; // rdi
  WCHAR *v58; // rax
  int v59; // edx
  int v60; // ecx
  __int64 v61; // rdx
  unsigned __int8 v62; // [rsp+30h] [rbp-D0h] BYREF
  char v63; // [rsp+31h] [rbp-CFh]
  char v64; // [rsp+34h] [rbp-CCh] BYREF
  char v65; // [rsp+35h] [rbp-CBh]
  char v66; // [rsp+36h] [rbp-CAh]
  unsigned __int64 v67; // [rsp+38h] [rbp-C8h]
  __int64 v68; // [rsp+40h] [rbp-C0h] BYREF
  int v69; // [rsp+48h] [rbp-B8h]
  int v70; // [rsp+4Ch] [rbp-B4h]
  int v71; // [rsp+50h] [rbp-B0h]
  _QWORD *v72; // [rsp+58h] [rbp-A8h]
  int v73; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v74; // [rsp+68h] [rbp-98h]
  struct _FONTHASH **v75; // [rsp+70h] [rbp-90h] BYREF
  struct _FONTHASH *v76; // [rsp+78h] [rbp-88h]
  UNICODE_STRING SourceString; // [rsp+80h] [rbp-80h] BYREF
  MAPPER *v78; // [rsp+90h] [rbp-70h]
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  struct _HASHBUCKET *v80; // [rsp+A8h] [rbp-58h] BYREF
  struct _HASHBUCKET *v81; // [rsp+B0h] [rbp-50h]
  struct _HASHBUCKET *v82; // [rsp+B8h] [rbp-48h]
  _WORD v83[32]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR v84[32]; // [rsp+100h] [rbp+0h] BYREF

  v3 = (_DWORD *)*((_QWORD *)this + 29);
  v4 = 0;
  v62 = 1;
  v73 = a3;
  v78 = this;
  *v3 &= ~1u;
  v5 = *a2;
  v72 = 0LL;
  v80 = 0LL;
  v82 = 0LL;
  v69 = 0;
  v70 = 0;
  v75 = a2;
  v76 = v5;
  if ( v5 )
  {
    v6 = 0LL;
    v7 = (WCHAR *)*((_QWORD *)this + 2);
    v71 = *((_DWORD *)v5 + 1);
    v8 = *((_QWORD *)this + 1);
    v82 = 0LL;
    v81 = 0LL;
    v80 = 0LL;
    v63 = *(_BYTE *)(v8 + 23);
    v65 = v63;
    v66 = v63;
    v64 = v63;
    v9 = SGDGetSessionState(this);
    v74 = 0LL;
    v67 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v13 = *(_QWORD *)(v9 + 32);
    v14 = v7;
    v68 = v13;
    SourceString = 0LL;
    v15 = *(_QWORD *)(v13 + 19472);
    v16 = 196LL * *(unsigned int *)(v13 + 19488);
    DestinationString = 0LL;
    for ( i = v15 + v16; v14 < v7 + 31; ++v14 )
    {
      if ( !*v14 )
        break;
    }
    v18 = v14 - v7;
    if ( (_DWORD)v18 )
    {
      SourceString.Buffer = v7;
      SourceString.MaximumLength = 64;
      DestinationString.MaximumLength = 64;
      SourceString.Length = 2 * v18;
      DestinationString.Buffer = v83;
      RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
      v13 = v68;
      v12 = 0LL;
      v11 = 0LL;
    }
    v83[(int)v18] = 0;
    if ( v15 < i )
    {
      while ( 1 )
      {
        v19 = v83;
        do
        {
          v10 = (WCHAR *)*(unsigned __int16 *)((char *)v19 + v15 + 64 - (_QWORD)v83);
          v20 = *v19 - (_DWORD)v10;
          if ( v20 )
            break;
          ++v19;
        }
        while ( (_DWORD)v10 );
        if ( !v20 )
        {
          if ( v15 == *(_QWORD *)(v13 + 19472) )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v12 = v67;
            if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u && (*(_DWORD *)(ThreadWin32Thread + 648) & 0x400) != 0 )
            {
              v11 = v15;
LABEL_13:
              if ( !v12 )
              {
                v6 = v81;
                v5 = v76;
                break;
              }
LABEL_76:
              v54 = (const unsigned __int16 *)(v12 + 130);
              if ( (*(_BYTE *)(v12 + 195) & 1) != 0 )
              {
                v80 = FHOBJ::pbktSearch((FHOBJ *)&v75, v7, 0LL, 0LL, 0);
                v55 = FHOBJ::pbktSearch((FHOBJ *)&v75, v54, 0LL, 0LL, 0);
                goto LABEL_78;
              }
              v6 = FHOBJ::pbktSearch((FHOBJ *)&v75, v54, 0LL, 0LL, 0);
              v81 = v6;
              v65 = *(_BYTE *)(v67 + 194);
              goto LABEL_31;
            }
            v13 = v68;
            v11 = v74;
          }
          else if ( (*(_BYTE *)(v15 + 129) & 1) != 0 )
          {
            v11 = v15;
            v74 = v15;
          }
          else
          {
            if ( v63 == *(_BYTE *)(v15 + 128) )
              v12 = v15;
            v67 = v12;
          }
        }
        v15 += 196LL;
        if ( v15 >= i )
          goto LABEL_13;
      }
    }
    v67 = v11;
    v12 = v11;
    if ( v11 )
      goto LABEL_76;
    v21 = 0LL;
    if ( v7 )
    {
      v22 = v7;
      v10 = 0LL;
      if ( *v7 )
      {
        LOBYTE(v23) = *v7;
        do
        {
          ++v22;
          v10 = (WCHAR *)((unsigned int)(unsigned __int8)v23 + 257 * (_DWORD)v10);
          v23 = *v22;
        }
        while ( *v22 );
      }
      for ( j = (char *)*((_QWORD *)v5 + (unsigned int)v10 % *((_DWORD *)v5 + 2) + 5); j; j = *(char **)j )
      {
        v10 = v7;
        if ( *v7 == *((_WORD *)j + 30) )
        {
          v25 = *v7;
          while ( v25 )
          {
            v25 = v10[1];
            if ( v25 != *(WCHAR *)((char *)++v10 + j - (char *)v7 + 60) )
              goto LABEL_22;
          }
          if ( (*((_DWORD *)j + 8) & 2) == 0 )
            goto LABEL_29;
          v21 = j;
        }
LABEL_22:
        ;
      }
      j = v21;
    }
    else
    {
      j = 0LL;
    }
LABEL_29:
    v80 = (struct _HASHBUCKET *)j;
    if ( v73 )
    {
      if ( !j )
      {
        v52 = *(_QWORD *)(SGDGetSessionState(v10) + 32);
        v53 = *(_QWORD *)(v52 + 19480);
        if ( v53 )
        {
          v57 = v53 + ((unsigned __int64)*(unsigned int *)(v52 + 19492) << 7);
          cCapString(v84, v7, 32);
          if ( v53 < v57 )
          {
            while ( 1 )
            {
              v58 = v84;
              do
              {
                v59 = *(WCHAR *)((char *)v58 + v53 - (_QWORD)v84);
                v60 = *v58 - v59;
                if ( v60 )
                  break;
                ++v58;
              }
              while ( v59 );
              if ( !v60 )
                break;
              v53 += 128LL;
              if ( v53 >= v57 )
                goto LABEL_31;
            }
            if ( v53 )
            {
              v55 = FHOBJ::pbktSearch((FHOBJ *)&v75, (const unsigned __int16 *)(v53 + 64), 0LL, 0LL, 0);
              v70 = 1;
LABEL_78:
              v81 = v55;
              v6 = v55;
            }
          }
        }
      }
    }
LABEL_31:
    v26 = v78;
    if ( *((_WORD *)v78 + 12) && v71 == 1 )
      v82 = FHOBJ::pbktSearch((FHOBJ *)&v75, (const unsigned __int16 *)v78 + 12, 0LL, 0LL, 0);
    if ( v80 || v6 || v82 )
    {
      v27 = &v64;
      v28 = 0;
      v29 = &v80;
      **((_DWORD **)v26 + 29) |= 1u;
      *((_DWORD *)v26 + 63) |= 0x40000000u;
      do
      {
        v30 = *v29;
        if ( *v29 )
        {
          v31 = 0LL;
          v32 = *((_DWORD *)v26 + 63);
          v33 = v32 & 0xFFBFFFFF;
          *((_BYTE *)v26 + 284) = *v27;
          v34 = *((_DWORD *)v30 + 8);
          v35 = v32 | 0x400000;
          v72 = 0LL;
          if ( (v34 & 2) != 0 )
            v33 = v35;
          v36 = v33;
          v37 = v33 & 0x7FFFFFFF;
          v38 = v36 | 0x80000000;
          if ( v28 == 2 )
            v37 = v38;
          *((_DWORD *)v26 + 63) = v37;
          for ( k = (_QWORD *)*((_QWORD *)v30 + 1); k; k = (_QWORD *)*k )
          {
            v68 = k[1];
            if ( (unsigned int)MAPPER::bNearMatch(v26, (struct PFEOBJ *)&v68, &v62, 0) )
            {
              v31 = k;
              v40 = v62;
              v41 = *((_DWORD *)v26 + 63);
              v42 = k[1];
              **((_DWORD **)v26 + 27) = *((_DWORD *)v26 + 47);
              v43 = (_QWORD *)*((_QWORD *)v26 + 28);
              v44 = *((_QWORD *)v26 + 24);
              v69 = v28;
              v72 = k;
              *v43 = v44;
              **((_DWORD **)v26 + 29) = **((_DWORD **)v26 + 29) & 0xFFFFFF | (v40 << 24);
              *((_QWORD *)v26 + 25) = v42;
              if ( (v41 & 0x80u) != 0 )
              {
                *((_DWORD *)v26 + 63) |= 0x1000000u;
              }
              else
              {
                v45 = *(_DWORD *)(v42 + 80);
                *((_DWORD *)v26 + 63) &= ~0x1000000u;
                *((_DWORD *)v26 + 52) = v45;
              }
              v46 = *((_DWORD *)v26 + 46);
              if ( !v46 )
              {
                if ( !*((_DWORD *)v30 + 7) || (PFEOBJ::flFontType((PFEOBJ *)&v68) & 1) != 0 )
                {
                  v47 = 1;
                  goto LABEL_46;
                }
                v46 = 1;
                *((_DWORD *)v26 + 46) = 1;
              }
              *((_DWORD *)v26 + 45) = v46;
            }
            else
            {
              v31 = v72;
            }
          }
        }
        else
        {
          v31 = v72;
        }
        ++v28;
        ++v29;
        ++v27;
      }
      while ( v28 < 3 );
      v47 = 0;
LABEL_46:
      if ( !v31 )
        goto LABEL_57;
      if ( v69 == 1 )
      {
        if ( v70 )
          goto LABEL_49;
      }
      else if ( v71 )
      {
        goto LABEL_49;
      }
      **((_DWORD **)v26 + 29) |= 2u;
LABEL_49:
      v48 = (Gre::Base *)*(unsigned __int8 *)(*((_QWORD *)v26 + 29) + 3LL);
      if ( (_BYTE)v48 != 0xFF
        || (v61 = v31[1], *(_DWORD *)(*(_QWORD *)(v61 + 32) + 40LL))
        || (*(_DWORD *)(v61 + 12) & 1) != 0 )
      {
        if ( (_DWORD)v48 == 255 )
        {
          v50 = 1;
        }
        else
        {
          v49 = &charsets;
          while ( *v49 != (_DWORD)v48 )
          {
            ++v4;
            ++v49;
            if ( v4 >= 0x11 )
              goto LABEL_104;
          }
          v50 = codepages[v4];
        }
      }
      else
      {
LABEL_104:
        v50 = *((_DWORD *)Gre::Base::Globals(v48) + 39) != 0 ? 0x4E4 : 0;
      }
      **((_DWORD **)v26 + 29) |= v50 << 8;
LABEL_57:
      *((_DWORD *)v26 + 63) &= ~0x400000u;
      return v47;
    }
  }
  return 0LL;
}
