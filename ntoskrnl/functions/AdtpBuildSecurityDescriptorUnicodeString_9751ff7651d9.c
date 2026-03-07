__int64 __fastcall AdtpBuildSecurityDescriptorUnicodeString(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        _DWORD *a6,
        char *a7)
{
  int v10; // eax
  void *v11; // r12
  NTSTATUS v12; // esi
  const WCHAR *v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rbx
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rdx
  void *Pool2; // rdi
  char v20; // al
  __int16 v21; // bx
  void *Src; // [rsp+30h] [rbp-98h] BYREF
  int v23; // [rsp+38h] [rbp-90h] BYREF
  __int64 v24; // [rsp+40h] [rbp-88h]
  char *v25; // [rsp+48h] [rbp-80h]
  wchar_t pszDest[16]; // [rsp+50h] [rbp-78h] BYREF

  v24 = a5;
  v25 = a7;
  Src = 0LL;
  if ( !a4 && !a3 )
    return 3221225485LL;
  v10 = SeConvertSecurityDescriptorToStringSecurityDescriptor(a2, 1LL, a1, &Src, &v23);
  v11 = Src;
  v12 = v10;
  if ( v10 < 0 )
  {
    if ( v10 == -1073741801 )
      goto LABEL_24;
    v13 = pszDest;
    v12 = 0;
    if ( StringCchPrintfW(pszDest, 0x10uLL, L"<0x%08X>", (unsigned int)v10) < 0 )
      v13 = L"-";
  }
  else
  {
    v13 = (const WCHAR *)Src;
  }
  v14 = -1LL;
  v15 = -1LL;
  do
    ++v15;
  while ( v13[v15] );
  v16 = v15 + 1;
  if ( 2 * (unsigned __int64)v16 > 0xFFFF )
  {
    v12 = RtlStringCbPrintfW(pszDest, 0x10uLL, L"%%%%%u", 1829LL);
    if ( v12 < 0 )
      goto LABEL_24;
    v13 = pszDest;
    do
      ++v14;
    while ( pszDest[v14] );
    v16 = v14 + 1;
  }
  v17 = (unsigned int)*a6;
  if ( (unsigned int)v17 + v16 >= 0x400 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, 2LL * v16, 1799447891LL);
    if ( !Pool2 )
    {
      v12 = -1073741801;
      goto LABEL_24;
    }
    v20 = 1;
  }
  else
  {
    v18 = v24;
    *a6 = v17 + v16;
    Pool2 = (void *)(v18 + 2 * v17);
    v20 = 0;
  }
  *v25 = v20;
  memmove(Pool2, v13, 2LL * v16);
  if ( a4 )
  {
    *a4 = Pool2;
    a4[1] = 2 * v16;
  }
  else
  {
    *(_QWORD *)(a3 + 8) = Pool2;
    v21 = 2 * (v16 - 1);
    *(_WORD *)a3 = v21;
    *(_WORD *)(a3 + 2) = v21 + 2;
  }
LABEL_24:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v12;
}
