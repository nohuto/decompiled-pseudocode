__int64 __fastcall SiGetBootDeviceName(int a1, __int64 a2, char a3, _DWORD *a4, char a5, _QWORD *a6)
{
  WCHAR *v6; // r14
  WCHAR *v7; // rsi
  PVOID v8; // rdi
  int BootDeviceNameFromRegistry; // eax
  wchar_t *v11; // r12
  int v12; // ebx
  __int64 v13; // r15
  __int64 v14; // rbx
  size_t v15; // rbx
  wchar_t *Pool2; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  wchar_t *v19; // rax
  size_t v20; // r15
  WCHAR *v21; // rax
  int v23; // [rsp+40h] [rbp-20h] BYREF
  int v24; // [rsp+44h] [rbp-1Ch] BYREF
  int v25; // [rsp+48h] [rbp-18h] BYREF
  int v26; // [rsp+4Ch] [rbp-14h] BYREF
  PVOID P; // [rsp+50h] [rbp-10h]
  wchar_t *Src; // [rsp+58h] [rbp-8h] BYREF

  v24 = 0;
  v23 = 0;
  v6 = 0LL;
  v25 = 0;
  v7 = 0LL;
  v26 = 0;
  v8 = 0LL;
  P = 0LL;
  Src = 0LL;
  BootDeviceNameFromRegistry = SiGetBootDeviceNameFromRegistry(a2, &Src);
  v11 = Src;
  v12 = BootDeviceNameFromRegistry;
  if ( BootDeviceNameFromRegistry < 0 )
    goto LABEL_22;
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( Src[v14] );
  if ( snwscanf_s(Src, v14 + 1, L"multi(%d)disk(%d)rdisk(%d)partition(%d)", &v23, &v24, &v26, &v25) != 4 )
  {
    v12 = -1073741823;
    goto LABEL_22;
  }
  if ( v23 || v24 )
  {
    v12 = -1073741823;
    goto LABEL_33;
  }
  v15 = v14 + 11;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2 * v15, 1263556947LL);
  v7 = Pool2;
  if ( !Pool2 )
  {
    v12 = -1073741670;
    goto LABEL_22;
  }
  swprintf_s(Pool2, v15, L"%s%s", L"\\ArcName\\", v11);
  v12 = SiTranslateSymbolicLink(v7);
  if ( v12 < 0 )
  {
LABEL_27:
    v8 = P;
    goto LABEL_33;
  }
  v8 = P;
  if ( a3 )
  {
    v12 = SiValidateSystemPartition((__int64)P, a4, v17, v18, a5);
    if ( v12 < 0 )
    {
LABEL_33:
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      if ( !v7 )
        goto LABEL_20;
      goto LABEL_19;
    }
  }
  if ( !a1 )
  {
    v19 = wcsstr(v7, L"partition");
    if ( v19 )
      *v19 = 0;
    do
      ++v13;
    while ( v7[v13] );
    v20 = 2 * v13 + 2;
    v21 = (WCHAR *)ExAllocatePool2(256LL, v20, 1263556947LL);
    v6 = v21;
    if ( v21 )
    {
      memmove(v21, v7, v20);
      ExFreePoolWithTag(v8, 0);
      P = 0LL;
      v12 = SiTranslateSymbolicLink(v6);
      if ( v12 >= 0 )
      {
        v8 = P;
        goto LABEL_18;
      }
      goto LABEL_27;
    }
    v12 = -1073741670;
    goto LABEL_33;
  }
LABEL_18:
  *a6 = v8;
LABEL_19:
  ExFreePoolWithTag(v7, 0);
LABEL_20:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
LABEL_22:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v12;
}
