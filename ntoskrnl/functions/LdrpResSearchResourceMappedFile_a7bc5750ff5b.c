__int64 __fastcall LdrpResSearchResourceMappedFile(
        ULONGLONG a1,
        __int64 a2,
        int a3,
        unsigned __int64 *a4,
        int a5,
        unsigned int **a6,
        __int64 *a7,
        void *a8,
        __int64 a9)
{
  bool v11; // dl
  unsigned __int16 v12; // r12
  int v13; // r14d
  unsigned __int16 *v14; // rax
  int v15; // edi
  int v16; // esi
  unsigned __int16 v17; // cx
  int v18; // ecx
  int v19; // edx
  __int64 result; // rax
  int MappingSize; // edi
  unsigned int v22; // r12d
  int v23; // ecx
  unsigned int i; // r14d
  char v25; // r13
  unsigned __int16 *v26; // r11
  int v27; // r10d
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // r8
  ULONGLONG v32; // rcx
  int v33; // eax
  _DWORD *v34; // r14
  int RCConfig; // eax
  int v36; // eax
  unsigned __int64 v37; // r8
  __int64 v38; // rsi
  _WORD *v39; // r15
  unsigned __int16 v40; // [rsp+70h] [rbp-398h] BYREF
  int v41; // [rsp+74h] [rbp-394h]
  bool v42; // [rsp+78h] [rbp-390h]
  __int64 v43; // [rsp+80h] [rbp-388h] BYREF
  ULONGLONG ullAugend; // [rsp+88h] [rbp-380h]
  ULONGLONG v45; // [rsp+90h] [rbp-378h] BYREF
  int v46; // [rsp+98h] [rbp-370h]
  int v47; // [rsp+9Ch] [rbp-36Ch]
  unsigned __int16 *v48; // [rsp+A0h] [rbp-368h]
  __int64 v49; // [rsp+A8h] [rbp-360h]
  __int64 v50; // [rsp+B0h] [rbp-358h] BYREF
  unsigned __int64 *v51; // [rsp+B8h] [rbp-350h]
  unsigned int **v52; // [rsp+C0h] [rbp-348h]
  __int64 v53; // [rsp+C8h] [rbp-340h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-338h] BYREF
  __int64 v55; // [rsp+D8h] [rbp-330h]
  __int64 v56; // [rsp+E0h] [rbp-328h]
  __int64 *v57; // [rsp+E8h] [rbp-320h]
  __int64 v58; // [rsp+F0h] [rbp-318h]
  void *v59; // [rsp+F8h] [rbp-310h]
  _DWORD v60[132]; // [rsp+100h] [rbp-308h] BYREF
  unsigned __int16 Src[88]; // [rsp+310h] [rbp-F8h] BYREF

  v51 = a4;
  v49 = a2;
  ullAugend = a1;
  v57 = a7;
  v52 = a6;
  v59 = a8;
  v58 = a9;
  v55 = 0LL;
  v56 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  memset(v60, 0, 0x206uLL);
  v11 = 0;
  v46 = a3 & 0x40;
  v50 = 0LL;
  v12 = 0;
  v13 = a3 & 0x80;
  v14 = (unsigned __int16 *)(a4 + 2);
  v48 = (unsigned __int16 *)(a4 + 2);
  v15 = a5;
  if ( a5 == 3 )
  {
    v12 = *v14;
    v11 = (*a4 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp((const wchar_t *)*a4, L"MUI");
    v42 = v11;
    v14 = v48;
  }
  else
  {
    v48 = (unsigned __int16 *)(a4 + 2);
  }
  v16 = a3 & 0x80;
  if ( (a3 & 0x10) == 0 && a5 >= 1 && a5 <= 3 )
  {
    if ( a5 == 3 )
      v17 = *v14;
    else
      v17 = 0;
    if ( (a3 & 0x1000000) == 0
      && (((*v51 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v11
       || (~(_BYTE)a3 & 8) == 0
       || (v17 & 0xF3FF) != 0
       || v17 == 3072) )
    {
      RCConfig = LdrResGetRCConfig(ullAugend, v49, 0, a3, 1);
      MappingSize = RCConfig;
      if ( RCConfig < 0 )
      {
        if ( RCConfig != -1073741686 )
          return (unsigned int)MappingSize;
        v16 = v13 | 0x80000;
        v15 = a5;
      }
      else
      {
        v16 = v13 | LdrIsResItemExist(ullAugend, v51, 0LL);
        v15 = a5;
      }
    }
    else
    {
      a3 |= 0x10u;
      v16 = v13;
    }
  }
  v18 = 393216;
  if ( (v16 & 0x60000) == 0x60000 )
    return (unsigned int)-1073741686;
  v19 = ~v16;
  LOWORD(v60[0]) = 1;
  LOWORD(v60[1]) = 0;
  LOBYTE(v18) = (~v16 & 0x80000) != 0 && (~(_BYTE)a3 & 0x10) != 0;
  if ( (((unsigned __int8)v18 & ((~v16 & 0x20000) != 0)) != 0 || v15 == 3) && ((a3 & 0x10) == 0 || (a3 & 0x20) == 0) )
  {
    if ( (a3 & 4) != 0 )
      v16 |= 4u;
    result = LdrResFallbackLangList(v18, v19, v12, v16, (__int64)v60);
    if ( (int)result < 0 && (a3 & 0x1000) != 0 )
      return result;
  }
  if ( (a3 & 0x10) != 0 || (~v16 & 0x40000) != 0 || (v16 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(ullAugend, (__int64)&v53);
    if ( (int)result < 0 )
      return result;
  }
  MappingSize = 0;
  v22 = 0;
LABEL_28:
  if ( v22 >= LOWORD(v60[0]) )
    return (unsigned int)MappingSize;
  v45 = 0LL;
  v43 = 0LL;
  v40 = v60[2 * v22 + 1];
  v23 = v60[2 * v22 + 2];
  v41 = v23;
  for ( i = 0; ; ++i )
  {
    if ( i >= 2 )
    {
LABEL_62:
      ++v22;
      goto LABEL_28;
    }
    if ( i )
    {
      v25 = 0;
      goto LABEL_38;
    }
    if ( v23 != 9 )
      break;
    a3 |= 0x20u;
LABEL_36:
    ;
  }
  if ( (v16 & 0xA0000) != 0 || (a3 & 0x10) != 0 || !v40 || !PnPBootDriversInitialized )
  {
LABEL_35:
    v23 = v41;
    goto LABEL_36;
  }
  v25 = 1;
LABEL_38:
  if ( !v25 )
    goto LABEL_39;
  v36 = LdrLoadAlternateResourceModuleEx(ullAugend, v40, &v45, &v43, v16 | 0x1000u);
  MappingSize = v36;
  if ( v36 < 0 )
  {
    if ( v36 == -1073741772 || v36 == -1073741766 )
      MappingSize = -1073020927;
    goto LABEL_35;
  }
  if ( !v43 )
    MappingSize = LdrpResGetMappingSize(v45, &v43, 512LL);
  if ( (a3 & 0x1000) != 0 && MappingSize < 0 )
    goto LABEL_62;
  MappingSize = LdrpResGetResourceDirectory(v45, (__int64)&v54);
  if ( MappingSize < 0 )
    goto LABEL_35;
LABEL_39:
  if ( (~(_BYTE)a3 & 2) != 0 && a5 > 2 )
    *(_QWORD *)v48 = v40;
  v50 = 0LL;
  v26 = &v40;
  if ( v25 )
    v26 = 0LL;
  v27 = a3;
  if ( v25 )
  {
    v27 = a3 | 0x20;
  }
  else if ( (a3 & 0x20) == 0 )
  {
    v27 = a3 | 4;
  }
  v28 = &v50;
  if ( v57 )
    v28 = v57;
  v29 = v53;
  if ( v25 )
    v29 = v54;
  v30 = v55;
  if ( v25 )
    v30 = v56;
  v31 = v49;
  if ( v25 )
    v31 = v43;
  v32 = ullAugend;
  if ( v25 )
    v32 = v45;
  v33 = LdrpResSearchResourceInsideDirectory(v32, 0LL, v31, v30, v29, 0LL, v51, a5, v60, v52, v28, v27, v26);
  MappingSize = v33;
  if ( v46 && v33 >= 0 && v52 && v25 )
  {
    v37 = v57 ? *v57 : v50;
    MappingSize = LdrpFindMessageInAlternateModule(v45, *v52, v37, *((_DWORD *)v51 + 6), 1);
    if ( MappingSize < 0 )
    {
      *v52 = 0LL;
      if ( MappingSize == -1073741701 )
        return (unsigned int)MappingSize;
    }
  }
  if ( MappingSize < 0 )
    goto LABEL_35;
  v34 = (_DWORD *)v58;
  if ( !v58 )
    return (unsigned int)MappingSize;
  if ( v40 )
  {
    if ( (unsigned int)DownLevelLangIDToLanguageName(v40, Src, 86, 2) )
    {
      v38 = -1LL;
      do
        ++v38;
      while ( Src[v38] );
      goto LABEL_104;
    }
    return (unsigned int)-1073741823;
  }
  else
  {
    Src[0] = 0;
    LODWORD(v38) = 0;
LABEL_104:
    if ( (unsigned int)v38 < *v34 && (v39 = v59) != 0LL )
    {
      memmove(v59, Src, 2LL * (unsigned int)v38);
      *v34 = v38 + 1;
      v39[(unsigned int)v38] = 0;
    }
    else
    {
      *v34 = v38 + 1;
      MappingSize = -1073741789;
      v47 = -1073741789;
    }
  }
  return (unsigned int)MappingSize;
}
