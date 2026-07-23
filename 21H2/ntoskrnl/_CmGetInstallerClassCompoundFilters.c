/*
 * XREFs of _CmGetInstallerClassCompoundFilters @ 0x14073F5DC
 * Callers:
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x14073F360 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x14063A9DC (_CmOpenInstallerClassRegKey.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14073F76C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14097AAD0 (_CmGetInstallerClassCompoundFiltersWorker.c)
 */

__int64 __fastcall CmGetInstallerClassCompoundFilters(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  int v10; // r15d
  const DEVPROPKEY *v12; // r14
  int v13; // ebx
  HANDLE v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r12
  int v18; // r13d
  int InstallerClassMappedPropertyFromRegProp; // eax
  __int64 v21; // rax
  HANDLE Handle; // [rsp+A0h] [rbp+18h] BYREF
  HANDLE v23; // [rsp+A8h] [rbp+20h] BYREF

  Handle = 0LL;
  v23 = 0LL;
  v10 = (int)a2;
  if ( *(_DWORD *)(a4 + 16) != 20 )
    goto LABEL_2;
  v21 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_CompoundUpperFilters;
  if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_CompoundUpperFilters )
    v21 = *(_QWORD *)(a4 + 8) - 0x4B88D2ECD9DBB9A9LL;
  v12 = &DEVPKEY_DeviceClass_UpperFilters;
  if ( v21 )
LABEL_2:
    v12 = &DEVPKEY_DeviceClass_LowerFilters;
  if ( a3 )
  {
    v14 = a3;
    Handle = a3;
  }
  else
  {
    v13 = CmOpenInstallerClassRegKey(a1, a2, 0LL, a4, 33554433, 0, (__int64)&Handle, 0LL);
    if ( v13 < 0 )
      goto LABEL_11;
    v14 = Handle;
  }
  if ( a1 )
    v15 = *(_QWORD *)(a1 + 224);
  else
    v15 = 0LL;
  v16 = SysCtxRegOpenKey(v15, (__int64)v14, (__int64)L"Filters", 0, 0x2001Fu, (__int64)&v23);
  v17 = a8;
  v13 = v16;
  v18 = a7;
  if ( v16 < 0
    || (InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassCompoundFiltersWorker(
                                                    a1,
                                                    a4,
                                                    (__int64)v12,
                                                    a5,
                                                    a6,
                                                    a7,
                                                    a8),
        InstallerClassMappedPropertyFromRegProp == -1073741772)
    || InstallerClassMappedPropertyFromRegProp == -1073741444
    || InstallerClassMappedPropertyFromRegProp == -1073741275 )
  {
    InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegProp(
                                                a1,
                                                v10,
                                                (_DWORD)Handle,
                                                (_DWORD)v12,
                                                a5,
                                                a6,
                                                v18,
                                                v17);
  }
  else if ( InstallerClassMappedPropertyFromRegProp >= 0 )
  {
    goto LABEL_11;
  }
  v13 = InstallerClassMappedPropertyFromRegProp;
LABEL_11:
  if ( Handle && !a3 )
    ZwClose(Handle);
  if ( v23 )
    ZwClose(v23);
  return (unsigned int)v13;
}
