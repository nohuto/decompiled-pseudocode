NTSTATUS __fastcall ExpParseSignatureName(
        wchar_t *Src,
        unsigned int a2,
        GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        bool *a7,
        char *a8)
{
  wchar_t v9; // dx
  bool v12; // r12
  char v13; // r10
  char v14; // r15
  __int64 v15; // rdi
  wchar_t v16; // cx
  NTSTATUS result; // eax
  wchar_t *Pool2; // rax
  wchar_t *v19; // r14
  int v20; // eax
  int v21; // ebx
  __int64 v22; // rdi
  wchar_t *v23; // r14
  int v24; // eax
  const wchar_t *v25; // r8
  unsigned int v26; // ecx
  __int64 v27; // rbx
  __int64 v28; // rdi
  int v29; // edx
  const wchar_t *v30; // r8
  unsigned int v31; // ecx
  __int64 v32; // rbx
  int v33; // eax
  int v34; // r9d
  const wchar_t *v35; // r8
  unsigned int v36; // ecx
  __int64 v37; // rbx
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-48h] BYREF

  v9 = *Src;
  GuidString = 0LL;
  v12 = v9 == 123;
  v13 = 0;
  v14 = 0;
  LODWORD(v15) = 0;
  if ( a2 )
  {
    do
    {
      v16 = Src[(unsigned int)v15];
      if ( v16 == 41 )
        break;
      if ( v9 == 123 )
      {
        if ( v16 == 125 )
        {
          v13 = 1;
          goto LABEL_9;
        }
      }
      else if ( v16 == 45 )
      {
        goto LABEL_9;
      }
      LODWORD(v15) = v15 + 1;
    }
    while ( (unsigned int)v15 < a2 );
  }
  if ( v9 == 123 )
    return -1073741811;
LABEL_9:
  if ( (unsigned int)v15 <= 8 )
  {
    if ( v9 != 123 )
    {
LABEL_15:
      Pool2 = (wchar_t *)ExAllocatePool2(64LL, 2LL * (unsigned int)(v15 + 1), 1920364101LL);
      v19 = Pool2;
      if ( !Pool2 )
        return -1073741670;
      wcsncpy_s(Pool2, (unsigned int)(v15 + 1), Src, (unsigned int)v15);
      v19[(unsigned int)v15] = 0;
      if ( v12 )
        v20 = ExpTranslateHexStringToGUID(v19, a3);
      else
        v20 = ExpTranslateHexStringToULONG(v19, a3);
      v21 = v20;
      ExFreePoolWithTag(v19, 0);
      if ( v21 < 0 )
        return v21;
      v14 = 0;
LABEL_22:
      if ( (unsigned int)v15 >= a2 )
        return -1073741811;
      if ( Src[(unsigned int)v15] != 45 )
      {
LABEL_45:
        if ( Src[(unsigned int)v15] == 41 && (v12 || v14) )
        {
          *a7 = v12;
          *a8 = v14;
          return 0;
        }
        return -1073741811;
      }
      v22 = (unsigned int)(v15 + 1);
      v14 = 1;
      if ( (unsigned int)v22 >= a2 )
        return -1073741811;
      v23 = (wchar_t *)ExAllocatePool2(64LL, 34LL, 1920364101LL);
      if ( v23 )
      {
        v24 = v22;
        v25 = &Src[v22];
        do
        {
          if ( Src[v22] == 45 )
            break;
          v22 = (unsigned int)(v22 + 1);
        }
        while ( (unsigned int)v22 < a2 );
        v26 = v22 - v24;
        if ( (unsigned int)(v22 - v24 - 1) > 7 )
          goto LABEL_49;
        v27 = v26;
        wcsncpy_s(v23, 0x11uLL, v25, v26);
        v23[v27] = 0;
        v21 = ExpTranslateHexStringToULONG(v23, a4);
        if ( v21 < 0 )
        {
LABEL_50:
          ExFreePoolWithTag(v23, 0);
          return v21;
        }
        v28 = (unsigned int)(v22 + 1);
        if ( (unsigned int)v28 >= a2 )
          goto LABEL_49;
        v29 = v28;
        v30 = &Src[v28];
        do
        {
          if ( Src[v28] == 45 )
            break;
          v28 = (unsigned int)(v28 + 1);
        }
        while ( (unsigned int)v28 < a2 );
        v31 = v28 - v29;
        if ( (unsigned int)(v28 - v29 - 1) > 0xF )
          goto LABEL_49;
        v32 = v31;
        wcsncpy_s(v23, 0x11uLL, v30, v31);
        v23[v32] = 0;
        v33 = ExpTranslateHexStringToULONGLONG(v23, a5);
        if ( v33 < 0 )
        {
          v21 = v33;
          goto LABEL_50;
        }
        v15 = (unsigned int)(v28 + 1);
        if ( (unsigned int)v15 >= a2 )
          goto LABEL_49;
        v34 = v15;
        v35 = &Src[v15];
        do
        {
          if ( Src[v15] == 41 )
            break;
          v15 = (unsigned int)(v15 + 1);
        }
        while ( (unsigned int)v15 < a2 );
        v36 = v15 - v34;
        if ( (unsigned int)(v15 - v34 - 1) > 0xF )
        {
LABEL_49:
          v21 = -1073741811;
          goto LABEL_50;
        }
        v37 = v36;
        wcsncpy_s(v23, 0x11uLL, v35, v36);
        v23[v37] = 0;
        v21 = ExpTranslateHexStringToULONGLONG(v23, a6);
        ExFreePoolWithTag(v23, 0);
        if ( v21 < 0 )
          return v21;
        if ( (unsigned int)v15 < a2 )
          goto LABEL_45;
        return -1073741811;
      }
      return -1073741670;
    }
  }
  else
  {
    v12 = 1;
  }
  if ( v13 != 1 )
    goto LABEL_15;
  LODWORD(v15) = v15 + 1;
  GuidString.Buffer = Src;
  GuidString.Length = 2 * v15;
  GuidString.MaximumLength = 2 * v15;
  result = RtlGUIDFromString(&GuidString, a3);
  if ( result >= 0 )
    goto LABEL_22;
  return result;
}
