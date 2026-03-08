/*
 * XREFs of _CmGetDeviceInterfaceRegKeyPath @ 0x1406D1834
 * Callers:
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406C9F40 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140747694 (PiDqGetRelativeObjectRegPath.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140A5EBA0 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140245C80 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCatExW @ 0x140391578 (RtlStringCchCatExW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1406D208C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetDeviceInterfaceRegKeyPath(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        wchar_t *a6,
        size_t cchDest,
        _DWORD *a8)
{
  __int16 v9; // si
  int v11; // r15d
  char v12; // bl
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned int v16; // ebp
  __int64 Pool2; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  _WORD *v20; // r13
  NTSTATUS DeviceInterfaceSubkeyPath; // ebx
  NTSTRSAFE_PWSTR *v22; // r9
  int v23; // esi
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  NTSTATUS v27; // eax
  NTSTRSAFE_PWSTR *v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  size_t *dwFlags; // [rsp+20h] [rbp-E8h]
  size_t *dwFlagsa; // [rsp+20h] [rbp-E8h]
  ULONG pszFormat; // [rsp+28h] [rbp-E0h]
  ULONG pszFormata; // [rsp+28h] [rbp-E0h]
  _WORD v36[40]; // [rsp+70h] [rbp-98h] BYREF

  v9 = a3;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    return (unsigned int)-1073741811;
  v11 = (unsigned __int8)a3;
  if ( (((unsigned __int8)a3 - 48) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned __int8)a3 == 49 )
    {
      v12 = 0;
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
  v12 = 1;
LABEL_5:
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( *(_WORD *)(a2 + 2 * v14) );
  v15 = 2 * v14 + 6;
  if ( v15 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v16 = v15;
  Pool2 = ExAllocatePool2(256LL, (unsigned int)v15, 1380994640LL);
  v20 = (_WORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  LOBYTE(v19) = v12;
  DeviceInterfaceSubkeyPath = CmGetDeviceInterfaceSubkeyPath(v18, a2, v19, v36, Pool2, v16 >> 1);
  if ( DeviceInterfaceSubkeyPath < 0 )
    goto LABEL_25;
  v23 = v9 & 0x200;
  if ( v23 )
  {
    if ( a4 )
    {
      if ( a4 == -1 )
        goto LABEL_46;
      v31 = -1LL;
      do
        ++v31;
      while ( v36[v31] );
      v25 = v31 + 96;
    }
    else
    {
      v30 = -1LL;
      do
        ++v30;
      while ( v36[v30] );
      v25 = v30 + 99;
    }
  }
  else
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v36[v24] );
    v25 = v24 + 48;
  }
  do
    ++v13;
  while ( v20[v13] );
  v26 = v25 + v13 + 1;
  if ( v11 != 48 && v11 != 49 )
  {
    if ( v11 == 50 )
    {
      v26 += 18LL;
      goto LABEL_16;
    }
LABEL_46:
    DeviceInterfaceSubkeyPath = -1073741811;
    goto LABEL_25;
  }
LABEL_16:
  if ( v26 > 0xFFFFFFFF )
  {
    DeviceInterfaceSubkeyPath = -1073741675;
  }
  else
  {
    DeviceInterfaceSubkeyPath = 0;
    if ( a8 )
      *a8 = v26;
    if ( (unsigned int)v26 <= (unsigned int)cchDest )
    {
      if ( v23 )
      {
        if ( a4 )
        {
          if ( a4 == -1 )
            goto LABEL_23;
          v27 = RtlStringCchPrintfExW(a6, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s\\%04u\\%s\\%s\\%s");
        }
        else
        {
          v27 = RtlStringCchPrintfExW(a6, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s\\%s\\%s\\%s");
        }
      }
      else
      {
        v27 = RtlStringCchPrintfExW(a6, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s\\%s\\%s");
      }
      DeviceInterfaceSubkeyPath = v27;
LABEL_23:
      if ( DeviceInterfaceSubkeyPath >= 0 && v11 == 50 )
      {
        DeviceInterfaceSubkeyPath = RtlStringCchCatExW(a6, (unsigned int)cchDest, L"\\", v22, dwFlags, pszFormat);
        if ( DeviceInterfaceSubkeyPath >= 0 )
          DeviceInterfaceSubkeyPath = RtlStringCchCatExW(
                                        a6,
                                        (unsigned int)cchDest,
                                        L"Device Parameters",
                                        v29,
                                        dwFlagsa,
                                        pszFormata);
      }
      goto LABEL_25;
    }
    DeviceInterfaceSubkeyPath = -1073741789;
  }
LABEL_25:
  ExFreePoolWithTag(v20, 0);
  return (unsigned int)DeviceInterfaceSubkeyPath;
}
