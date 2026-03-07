__int64 __fastcall LdrResSearchResource(
        ULONGLONG a1,
        const void *a2,
        unsigned int a3,
        int a4,
        unsigned int **a5,
        __int64 *a6,
        void *a7,
        __int64 a8)
{
  __int64 v8; // rbx
  ULONGLONG v11; // r14
  unsigned int v12; // ebx
  int v13; // ecx
  unsigned int v14; // edi
  __int64 result; // rax
  bool v17; // zf
  int v18; // eax
  int v19; // esi
  unsigned __int16 v20; // ax
  __int64 v21; // r12
  __int64 v22; // [rsp+58h] [rbp-80h] BYREF
  ULONGLONG v23; // [rsp+60h] [rbp-78h] BYREF
  unsigned int **v24; // [rsp+68h] [rbp-70h]
  __int64 v25; // [rsp+70h] [rbp-68h]
  unsigned __int64 v26[2]; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v27; // [rsp+88h] [rbp-50h]

  v8 = a3;
  v24 = a5;
  v25 = a8;
  v11 = 0LL;
  if ( !a1 || !a2 || a7 && !a8 )
    return (unsigned int)-1073741811;
  if ( (a4 & 0xC00) != 0 )
    return (unsigned int)-1073741582;
  v13 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v13 = a4;
  v14 = v13 | 0x1000;
  if ( (v13 & 0x2000) != 0 )
    v14 = v13;
  if ( !((unsigned int)Feature_1875039550__private_IsEnabledDeviceUsage()
       ? (v14 & 0xFFF00000) == 0
       : (v14 & 0xFFF80000) == 0) )
    return (unsigned int)-1073741582;
  if ( (unsigned int)v8 < 3 && (v14 & 2) == 0 || (unsigned int)v8 > 4 )
    return (unsigned int)-1073741583;
  if ( (v14 & 0x41) != 0 )
  {
    if ( (_DWORD)v8 != 4 )
      return 3221225713LL;
  }
  else if ( (_DWORD)v8 != 4 )
  {
    goto LABEL_25;
  }
  if ( (v14 & 0x41) == 0 )
    return 3221225714LL;
LABEL_25:
  if ( (v14 & 0x100) != 0 )
  {
    v17 = (v14 & 0xE00) == 0;
  }
  else
  {
    v18 = v14 & 0xC00;
    if ( (v14 & 0x200) == 0 )
    {
      if ( v18 == 3072 )
        return (unsigned int)-1073741582;
      goto LABEL_32;
    }
    v17 = v18 == 0;
  }
  if ( !v17 )
    return (unsigned int)-1073741582;
LABEL_32:
  if ( (v14 & 0x8000) != 0 && (~(_WORD)v14 & 0x810) != 0 || (v14 & 0x3000) == 0x3000 || (v14 & 0x18) == 0x18 )
    return (unsigned int)-1073741582;
  v22 = 0LL;
  if ( (v14 & 0x20000) != 0 )
  {
    if ( (v14 & 0x400) == 0 || !a6 || !*a6 )
      return (unsigned int)-1073741811;
    v22 = *a6;
  }
  if ( (unsigned int)Feature_1875039550__private_IsEnabledDeviceUsage() && (v14 & 0x80000) != 0 )
  {
    if ( (v14 & 0x300) == 0 || !a6 || !*a6 )
      return (unsigned int)-1073741811;
    v22 = *a6;
  }
  memmove(v26, a2, 8 * v8);
  v19 = 3;
  if ( (unsigned int)v8 <= 3 )
    v19 = v8;
  if ( v19 == 3 )
  {
    if ( v27 >= 0x10000 )
    {
      if ( *(_WORD *)v27 )
      {
        v20 = DownLevelLanguageNameToLangID((const void *)v27, 2);
        LODWORD(v23) = v20;
      }
      else
      {
        v20 = 0;
        LODWORD(v23) = 0;
      }
      v27 = v20;
      goto LABEL_61;
    }
    if ( v27 && ((v27 & 0x3FF) == 0 || v27 == 127 || !(unsigned int)DownLevelLangIDToLanguageName(v27, 0LL, 0, 2)) )
      return (unsigned int)-1073741811;
  }
LABEL_61:
  if ( (v14 & 0x300) == 0 )
    goto LABEL_67;
  v11 = a1;
  if ( (v14 & 0x200) != 0 )
  {
    v11 = a1 | 1;
    if ( (a1 & 1) != 0 )
      v11 = a1;
  }
  result = LdrpResGetMappingSize(v11, &v22, v14);
  if ( (int)result >= 0 || (v14 & 0x1000) == 0 )
  {
LABEL_67:
    v21 = v25;
    v12 = LdrpResSearchResourceMappedFile(v11, v22, v14, v26, v19, v24, a6, a7, v25);
    if ( v12 == -1073741686 && ((v26[0] - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
    {
      v23 = 0LL;
      if ( (int)LdrLoadAlternateResourceModuleEx(v11, 0xF2EEu, &v23, 0LL, 0x1000000) >= 0 )
      {
        v22 = 0LL;
        if ( (int)LdrpResGetMappingSize(v23, &v22, v14) >= 0 )
          return (unsigned int)LdrpResSearchResourceMappedFile(v23, v22, v14 | 0x1000000, v26, v19, v24, a6, a7, v21);
      }
    }
    return v12;
  }
  return result;
}
