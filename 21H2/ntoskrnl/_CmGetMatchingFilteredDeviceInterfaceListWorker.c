/*
 * XREFs of _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1407B05E8
 * Callers:
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x140610B90 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140253448 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memset @ 0x140414300 (memset.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpIsValidGuidString @ 0x140639A80 (_PnpIsValidGuidString.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1407B1628 (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  wchar_t *v13; // rdi
  char v14; // r15
  int CachedContextBaseKey; // ebx
  __int64 v16; // rcx
  int v17; // eax
  wchar_t *PoolWithTag; // rax
  int v19; // eax
  void *v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // eax
  HANDLE Handle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-38h] BYREF
  int v28; // [rsp+B8h] [rbp+40h]

  v25 = 0LL;
  *a9 = 0;
  Handle = 0LL;
  v13 = 0LL;
  UnicodeString = 0LL;
  if ( a8 )
    *a7 = 0;
  if ( (a4 & 0xFFFFFFFE) != 0 || a10 )
    goto LABEL_26;
  v14 = a4 & 1;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 9, (__int64)&v25);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_20;
  if ( !a2 )
  {
    v28 = 1;
    goto LABEL_8;
  }
  if ( !PnpIsValidGuidString(a2) )
  {
LABEL_26:
    CachedContextBaseKey = -1073741811;
    goto LABEL_20;
  }
  v28 = 2;
LABEL_8:
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
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x5B8uLL, 0x52504E50u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag + 2, 0, 0x5B4uLL);
      *(_DWORD *)v13 = v28;
      RtlStringCchCopyExW(v13 + 506, 0xC8uLL, a3, 0LL, 0LL, 0x900u);
      *((_QWORD *)v13 + 179) = a5;
      *((_QWORD *)v13 + 180) = a6;
      *((_QWORD *)v13 + 177) = 0LL;
      *((_DWORD *)v13 + 356) = 0;
      *((_BYTE *)v13 + 1428) = v14;
      *((_QWORD *)v13 + 181) = a7;
      *((_DWORD *)v13 + 364) = a8;
      *((_DWORD *)v13 + 365) = 0;
      v19 = PnpCtxRegEnumKeyWithCallback(a1, Handle, &CmDeviceClassesSubkeyCallback, v13);
      v20 = (void *)*((_QWORD *)v13 + 177);
      CachedContextBaseKey = v19;
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      if ( CachedContextBaseKey >= 0 )
      {
        v21 = *((_DWORD *)v13 + 365);
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
LABEL_20:
  RtlFreeAnsiString(&UnicodeString);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)CachedContextBaseKey;
}
