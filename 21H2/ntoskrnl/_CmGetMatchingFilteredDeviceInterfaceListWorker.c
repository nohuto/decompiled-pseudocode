/*
 * XREFs of _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14083DEC8
 * Callers:
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x140787F7C (_CmGetMatchingFilteredDeviceInterfaceList.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1402E0340 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     PnpIsValidGuidString @ 0x1406E87E8 (PnpIsValidGuidString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x14083EAEC (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmGetMatchingFilteredDeviceInterfaceListWorker(
        __int64 a1,
        const WCHAR *a2,
        const wchar_t *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _WORD *a7,
        unsigned int a8,
        unsigned int *a9,
        __int16 a10)
{
  __int64 v12; // rdi
  int v13; // r13d
  char v14; // r12
  int CachedContextBaseKey; // ebx
  __int64 v16; // rcx
  int v17; // eax
  __int64 Pool2; // rax
  int v19; // eax
  void *v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // eax
  HANDLE Handle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-38h] BYREF

  v25 = 0LL;
  v12 = 0LL;
  *a9 = 0;
  Handle = 0LL;
  UnicodeString = 0LL;
  if ( a8 )
    *a7 = 0;
  if ( (a4 & 0xFFFFFFFE) != 0 || a10 )
    goto LABEL_25;
  v13 = 1;
  v14 = a4 & 1;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 9, (__int64)&v25);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_19;
  if ( !a2 )
    goto LABEL_7;
  if ( !PnpIsValidGuidString(a2) )
  {
LABEL_25:
    CachedContextBaseKey = -1073741811;
    goto LABEL_19;
  }
  v13 = 2;
LABEL_7:
  if ( a1 )
    v16 = *(_QWORD *)(a1 + 224);
  else
    v16 = 0LL;
  v17 = SysCtxRegOpenKey(v16, v25, (__int64)a2, 0, 8u, (__int64)&Handle);
  CachedContextBaseKey = v17;
  if ( v17 == -1073741444 )
  {
    CachedContextBaseKey = -1073741595;
  }
  else if ( v17 >= 0 )
  {
    Pool2 = ExAllocatePool2(256LL, 1464LL, 1380994640LL);
    v12 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = v13;
      RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(Pool2 + 1012), 0xC8uLL, a3, 0LL, 0LL, 0x900u);
      *(_QWORD *)(v12 + 1432) = a5;
      *(_QWORD *)(v12 + 1440) = a6;
      *(_QWORD *)(v12 + 1416) = 0LL;
      *(_DWORD *)(v12 + 1424) = 0;
      *(_BYTE *)(v12 + 1428) = v14;
      *(_QWORD *)(v12 + 1448) = a7;
      *(_QWORD *)(v12 + 1456) = a8;
      v19 = PnpCtxRegEnumKeyWithCallback(a1, Handle, &CmDeviceClassesSubkeyCallback, v12);
      v20 = *(void **)(v12 + 1416);
      CachedContextBaseKey = v19;
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      if ( CachedContextBaseKey >= 0 )
      {
        v21 = *(_DWORD *)(v12 + 1460);
        *a9 = v21;
        if ( v21 )
        {
          v22 = v21 + 1;
          *a9 = v22;
          if ( a7 && a8 >= v22 )
            a7[v22 - 1] = 0;
          else
            CachedContextBaseKey = -1073741789;
        }
      }
    }
    else
    {
      CachedContextBaseKey = -1073741801;
    }
  }
LABEL_19:
  RtlFreeUnicodeString(&UnicodeString);
  if ( v12 )
    ExFreePoolWithTag((PVOID)v12, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)CachedContextBaseKey;
}
