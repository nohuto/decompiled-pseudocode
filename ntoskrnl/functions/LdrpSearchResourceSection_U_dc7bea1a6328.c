__int64 __fastcall LdrpSearchResourceSection_U(__int64 a1, __int64 *a2, unsigned int a3, int a4, unsigned int **a5)
{
  int v5; // r14d
  int v6; // r12d
  int v8; // edx
  int v9; // eax
  unsigned __int16 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rbx
  unsigned int *v14; // rsi
  int v15; // r9d
  unsigned __int64 v16; // rcx
  char v17; // di
  char v18; // dl
  unsigned int v19; // ecx
  __int64 v20; // rax
  int v21; // r8d
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned int *v25; // rsi
  __int64 v26; // rcx
  unsigned int *v27; // rax
  unsigned __int16 v28; // r12
  const wchar_t *v29; // r8
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  char v33; // di
  unsigned int *v34; // r14
  const wchar_t *v35; // r8
  int v36; // eax
  bool v37; // cl
  int v38; // ebx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  __int64 result; // rax
  __int16 v43; // cx
  __int16 v44; // ax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  __int16 v48[2]; // [rsp+30h] [rbp-118h] BYREF
  char v49; // [rsp+34h] [rbp-114h]
  bool v50; // [rsp+35h] [rbp-113h]
  char v51; // [rsp+36h] [rbp-112h]
  int v52; // [rsp+38h] [rbp-110h]
  char v53; // [rsp+3Ch] [rbp-10Ch]
  int v54; // [rsp+40h] [rbp-108h]
  char v55; // [rsp+44h] [rbp-104h] BYREF
  char v56[3]; // [rsp+45h] [rbp-103h] BYREF
  unsigned int v57; // [rsp+48h] [rbp-100h]
  unsigned __int16 v58; // [rsp+4Ch] [rbp-FCh] BYREF
  int v59; // [rsp+50h] [rbp-F8h]
  int v60; // [rsp+54h] [rbp-F4h]
  unsigned int **v61; // [rsp+58h] [rbp-F0h]
  __int64 v62; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v63; // [rsp+68h] [rbp-E0h]
  unsigned int *v64; // [rsp+70h] [rbp-D8h]
  bool v65; // [rsp+78h] [rbp-D0h]
  char v66; // [rsp+79h] [rbp-CFh]
  __int16 v67; // [rsp+7Ch] [rbp-CCh]
  int v68; // [rsp+80h] [rbp-C8h]
  __int64 v69; // [rsp+88h] [rbp-C0h]
  __int64 v70; // [rsp+90h] [rbp-B8h]
  __int64 v71; // [rsp+98h] [rbp-B0h]
  unsigned int *v72; // [rsp+A0h] [rbp-A8h]
  unsigned int v73; // [rsp+A8h] [rbp-A0h]
  unsigned int *v74; // [rsp+B0h] [rbp-98h]
  unsigned int *v75; // [rsp+B8h] [rbp-90h]
  unsigned int *v76; // [rsp+C0h] [rbp-88h]
  int v77; // [rsp+C8h] [rbp-80h]
  __int64 v78; // [rsp+D0h] [rbp-78h]
  __int64 *v79; // [rsp+D8h] [rbp-70h]
  __int64 *v80; // [rsp+E0h] [rbp-68h]
  _QWORD v81[2]; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v82; // [rsp+F8h] [rbp-50h]
  __int64 v83; // [rsp+100h] [rbp-48h]

  v5 = a4;
  v60 = a4;
  v6 = a3;
  v73 = a3;
  v63 = a1;
  v8 = (int)a5;
  v61 = a5;
  v62 = 0LL;
  v79 = a2;
  v50 = 0;
  v53 = 1;
  v51 = 1;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return 3221225713LL;
  v9 = 3;
  if ( a3 != 4 )
    v9 = a3;
  v57 = v9;
  v59 = v9;
  LOWORD(v54) = 0;
  v10 = 0;
  v48[0] = 0;
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)a5 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return 3221225485LL;
  }
  LOBYTE(v8) = 1;
  v11 = RtlImageDirectoryEntryToData(a1, v8, 2, (int)&v58);
  v71 = v11;
  if ( !v11 )
    return 3221225609LL;
  v13 = v11;
  v69 = v11;
  v62 = 61166LL;
  v68 = 0;
  v14 = 0LL;
  v64 = 0LL;
  v72 = 0LL;
  v70 = 0LL;
  v78 = 0LL;
  if ( (~(_BYTE)v5 & 0x10) == 0 || PnPBootDriversInitialized != 1 || v57 - 1 > 2 )
    goto LABEL_21;
  if ( v57 == 3 )
    v15 = *((unsigned __int16 *)a2 + 8);
  else
    v15 = 0;
  v54 = v15;
  v67 = v15;
  v16 = *a2;
  if ( ((*a2 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
  {
    if ( (v16 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v16, L"MUI") )
      goto LABEL_20;
    LOWORD(v15) = v54;
  }
  if ( (~(_BYTE)v5 & 8) == 0 || (v15 & 0xF3FF) != 0 || (_WORD)v15 == 3072 )
  {
LABEL_20:
    v5 |= LdrIsResItemExist(v63, (unsigned __int64 *)a2, v12);
    v60 = v5;
LABEL_21:
    LOWORD(v15) = v54;
    goto LABEL_22;
  }
  v5 |= 0x10u;
  v60 = v5;
LABEL_22:
  if ( PnPBootDriversInitialized == 1 && (~v5 & 0x20000) != 0 && (~v5 & 0x80000) != 0 && (~(_BYTE)v5 & 0x10) != 0 )
  {
    v17 = 1;
    v49 = 1;
  }
  else
  {
    v17 = 0;
    v49 = 0;
  }
  if ( !PnPBootDriversInitialized || (v5 & 0x2000000) != 0 || (v5 & 0x40000) != 0 )
  {
    v18 = 0;
    v51 = 0;
  }
  else
  {
    v18 = v51;
  }
  if ( !v17 && !v18 )
    goto LABEL_52;
  v81[0] = *a2;
  v19 = v57;
  if ( v57 < 2 )
    v20 = 0LL;
  else
    v20 = a2[1];
  v81[1] = v20;
  if ( v6 == 4 )
    v83 = a2[3];
LABEL_34:
  v21 = v59;
  if ( !v13 || (v22 = v59, v21 = v59 - 1, v59 = v21, v77 = v21, !v22) )
  {
    v23 = v70;
    goto LABEL_81;
  }
  if ( v21 )
    goto LABEL_37;
  if ( v18 )
  {
    result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v81, v6, v5 | 0x1000000u, v61);
    v52 = result;
    if ( (int)result >= 0 )
      return result;
    v21 = v59;
  }
  if ( v21 )
  {
LABEL_37:
    v23 = v70;
  }
  else
  {
    v23 = v70;
    if ( v57 == 3 )
      v23 = v13;
    v70 = v23;
    v78 = v23;
  }
  if ( !v23 )
    goto LABEL_39;
  v15 = *((unsigned __int16 *)v79 + 8);
  v54 = v15;
  v67 = v15;
  v37 = (v15 & 0x3FF) == 0;
  v50 = v37;
  v65 = v37;
  while ( 2 )
  {
    v38 = v68;
    while ( 1 )
    {
      v39 = v38++;
      v68 = v38;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( v40 )
        {
          v41 = v40 - 1;
          if ( v41 )
          {
            v45 = v41 - 1;
            if ( !v45 )
            {
              if ( PsInstallUILanguageId == PsMachineUILanguageId )
                goto LABEL_162;
              if ( v17 )
              {
                v82 = (unsigned __int16)PsInstallUILanguageId;
                result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v81, v6, v5, v61);
                v52 = result;
                if ( (int)result >= 0 )
                  return result;
              }
              v44 = PsInstallUILanguageId;
              goto LABEL_123;
            }
            v46 = v45 - 1;
            if ( v46 )
            {
              v47 = v46 - 1;
              if ( v47 )
              {
                if ( v47 != 1 )
                  goto LABEL_168;
                v5 |= 0x20u;
                v60 = v5;
              }
              else
              {
                v10 = 1033;
                v48[0] = 1033;
                if ( PsDefaultSystemLocaleId == 1033 || PsInstallUILanguageId == 1033 || PsMachineUILanguageId == 1033 )
                  goto LABEL_162;
                if ( v17 )
                {
                  v82 = 1033LL;
                  result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v81, v6, v5, v61);
                  v52 = result;
                  if ( (int)result >= 0 )
                    return result;
                }
              }
            }
            else
            {
              v10 = PsDefaultSystemLocaleId;
              v48[0] = PsDefaultSystemLocaleId;
              if ( (_WORD)PsDefaultSystemLocaleId == PsInstallUILanguageId
                || (_WORD)PsDefaultSystemLocaleId == PsMachineUILanguageId )
              {
LABEL_162:
                v10 = v62;
                v48[0] = v62;
                goto LABEL_72;
              }
              if ( v17 )
              {
                v82 = (unsigned __int16)PsDefaultSystemLocaleId;
                result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v81, v6, v5, v61);
                v52 = result;
                if ( (int)result >= 0 )
                  return result;
              }
            }
          }
          else
          {
            if ( !v37 )
              goto LABEL_168;
            if ( v17 && PsMachineUILanguageId )
            {
              v82 = (unsigned __int16)PsMachineUILanguageId;
              result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v81, v6, v5, v61);
              v52 = result;
              if ( (int)result >= 0 )
                return result;
              v44 = PsMachineUILanguageId;
LABEL_123:
              v10 = v44;
              v48[0] = v44;
              goto LABEL_72;
            }
            v43 = v62;
            if ( PsMachineUILanguageId )
              v43 = PsMachineUILanguageId;
            v10 = v43;
            v48[0] = v43;
          }
        }
        else
        {
          if ( v10 )
          {
            if ( (int)LdrpGetParentLangId(v10, v48) >= 0 )
            {
              v10 = v48[0];
            }
            else
            {
              v10 = 0;
              v48[0] = 0;
            }
          }
          if ( v17 )
          {
            if ( !v10 )
              goto LABEL_72;
            v82 = v10;
            result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v81, v6, v5, v61);
            v52 = result;
            if ( (int)result >= 0 )
              return result;
          }
          if ( v10 )
            v68 = --v38;
        }
      }
      else
      {
        if ( v17 && (_WORD)v15 )
        {
          v82 = (unsigned __int16)v15;
          result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v81, v6, v5, v61);
          v52 = result;
          if ( (int)result >= 0 )
            return result;
          LOWORD(v15) = v54;
        }
        v10 = v15;
        v48[0] = v15;
      }
LABEL_72:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v10 != v62 )
        break;
      LOWORD(v15) = v54;
      v37 = v50;
    }
    v62 = v10;
    a2 = &v62;
    v80 = &v62;
    v23 = v70;
    v13 = v70;
    v69 = v70;
    v21 = v59;
LABEL_39:
    v24 = *(unsigned __int16 *)(v13 + 12);
    v58 = v24;
    v25 = (unsigned int *)(v13 + 16);
    v75 = (unsigned int *)(v13 + 16);
    v26 = (unsigned __int16)v24;
    if ( (*a2 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v25 += 2 * v24;
      v75 = v25;
      LOWORD(v24) = *(_WORD *)(v13 + 14);
      v58 = v24;
      v26 = (unsigned __int16)v24;
    }
    if ( !(_WORD)v26 )
    {
      v69 = 0LL;
      v53 = 0;
      v66 = 0;
      v17 = v49;
      LOWORD(v15) = v54;
      v19 = v57;
      goto LABEL_83;
    }
    if ( !v23 || (v5 & 0x20) == 0 )
    {
      v13 = 0LL;
      v69 = 0LL;
      v27 = &v25[2 * (unsigned __int16)v26 - 2];
      v76 = v27;
      while ( 1 )
      {
        if ( v25 > v27 )
          goto LABEL_50;
        v28 = (unsigned __int16)v24 >> 1;
        if ( !((unsigned __int16)v24 >> 1) )
        {
          if ( !(_WORD)v24 )
            goto LABEL_50;
          v29 = (const wchar_t *)*a2;
          v56[0] = 0;
          v30 = v71;
          if ( (unsigned int)LdrpCompareResourceNamesWithValidation(v26, v23, v29, v71, v25, v56) )
            goto LABEL_50;
          v31 = v25[1];
          if ( (v25[1] & 0x80000000) != 0 )
            goto LABEL_49;
          v14 = (unsigned int *)(v31 + v30);
          goto LABEL_108;
        }
        v74 = v25;
        v32 = 2LL * v28;
        v33 = v24 & 1;
        if ( v33 )
          v34 = &v25[v32];
        else
          v34 = &v25[v32 - 2];
        v74 = v34;
        v35 = (const wchar_t *)*a2;
        v55 = 0;
        v36 = LdrpCompareResourceNamesWithValidation(v26, v23, v35, v71, v34, &v55);
        if ( !v36 )
        {
          v31 = v34[1];
          if ( (v34[1] & 0x80000000) != 0 )
          {
            v30 = v71;
LABEL_49:
            v13 = v30 + (v31 & 0xFFFFFFFF7FFFFFFFuLL);
            v69 = v13;
LABEL_50:
            v14 = v64;
            goto LABEL_51;
          }
          v13 = 0LL;
          v69 = 0LL;
          v14 = (unsigned int *)(v31 + v71);
LABEL_108:
          v64 = v14;
          v72 = v14;
LABEL_51:
          v80 = ++a2;
          v5 = v60;
          v6 = v73;
          v17 = v49;
          LOWORD(v15) = v54;
          v18 = v51;
LABEL_52:
          v19 = v57;
          goto LABEL_34;
        }
        if ( v36 >= 0 )
          break;
        v27 = v34 - 2;
        v76 = v34 - 2;
        if ( v33 )
        {
          v58 = v28;
LABEL_118:
          LOWORD(v24) = v28;
        }
        else
        {
          LOWORD(v24) = v28 - 1;
          v58 = v28 - 1;
        }
      }
      v25 = v34 + 2;
      v75 = v34 + 2;
      v58 = v28;
      v27 = v76;
      goto LABEL_118;
    }
    v13 = 0LL;
    v69 = 0LL;
    v62 = *v25;
    v14 = (unsigned int *)(v71 + v25[1]);
    v72 = v14;
    v17 = v49;
    LOWORD(v15) = v54;
    v19 = v57;
LABEL_81:
    if ( v14 && (v5 & 2) == 0 )
    {
      *v61 = v14;
      goto LABEL_92;
    }
    if ( !v13 || (v5 & 2) == 0 )
    {
LABEL_83:
      switch ( v19 - v21 )
      {
        case 1u:
          result = 3221225610LL;
          goto LABEL_93;
        case 2u:
          result = 3221225611LL;
          break;
        case 3u:
          result = 3221225988LL;
          v52 = -1073741308;
          if ( !v23 )
            return result;
          v64 = 0LL;
          v72 = 0LL;
          if ( v53 )
          {
            v37 = v50;
            continue;
          }
LABEL_168:
          result = 3221225988LL;
          break;
        default:
          result = 3221225485LL;
          goto LABEL_93;
      }
      v52 = result;
      return result;
    }
    break;
  }
  *v61 = (unsigned int *)v13;
LABEL_92:
  result = 0LL;
LABEL_93:
  v52 = result;
  return result;
}
