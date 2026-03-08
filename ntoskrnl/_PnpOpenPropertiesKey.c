/*
 * XREFs of _PnpOpenPropertiesKey @ 0x1406D1610
 * Callers:
 *     _PnpSetPropertyWorker @ 0x140687D54 (_PnpSetPropertyWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1406C5750 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _PnpGetGenericStoreProperty @ 0x1406D13D0 (_PnpGetGenericStoreProperty.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14074E0A8 (_CmGetInstallerClassRegPropWorker.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14083AA64 (_PnpGetGenericStorePropertyLocales.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140864664 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpDeletePropertyWorker @ 0x14086D5EC (_PnpDeletePropertyWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14087C86C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140A60700 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140A64B18 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140A64CE8 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140A67080 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140A674EC (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140245C80 (RtlStringCchPrintfExW.c)
 *     RtlUnalignedStringCchLengthW @ 0x140246434 (RtlUnalignedStringCchLengthW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _PnpCtxRegCreateTree @ 0x140687A74 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegCreateKey @ 0x140687FD0 (_PnpCtxRegCreateKey.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     RtlValidSecurityDescriptor @ 0x14075F860 (RtlValidSecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14087C494 (_PnpGetPropertiesSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpOpenPropertiesKey(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        int a4,
        char a5,
        __int64 a6,
        void **a7)
{
  NTSTATUS v7; // ebx
  void *v9; // rbp
  wchar_t *Pool2; // rsi
  void *v11; // r12
  int v12; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  __int64 v18; // rcx
  int Key; // eax
  void *PropertiesSecurityDescriptor; // rax
  int Tree; // eax
  __int64 v23; // [rsp+48h] [rbp-E0h]
  size_t pcchLength[2]; // [rsp+50h] [rbp-D8h] BYREF
  wchar_t pszDest[64]; // [rsp+60h] [rbp-C8h] BYREF

  v7 = 0;
  pcchLength[0] = 0LL;
  v9 = 0LL;
  v23 = a2;
  Pool2 = 0LL;
  *a7 = 0LL;
  v11 = 0LL;
  v12 = a4;
  if ( a3 )
  {
    v7 = RtlUnalignedStringCchLengthW(a3, 0x200uLL, pcchLength);
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( pcchLength[0] >= 0x30 )
    {
      v14 = LODWORD(pcchLength[0]) + 12;
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2LL * (unsigned int)(LODWORD(pcchLength[0]) + 12), 1380994640LL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
    }
    else
    {
      Pool2 = pszDest;
      v14 = 59;
    }
    v7 = RtlStringCchPrintfExW(Pool2, v14, 0LL, 0LL, 0x800u, L"%s\\%s", L"Properties", a3);
    if ( v7 < 0 )
      goto LABEL_11;
    if ( a1 )
      v15 = *(_QWORD *)(a1 + 224);
    else
      LODWORD(v15) = 0;
    v16 = SysCtxRegOpenKey(v15, v23, (_DWORD)Pool2, 0, a4, (__int64)a7);
    if ( v16 == -1073741444 )
    {
      v7 = -1073741772;
      goto LABEL_11;
    }
    if ( !a5 || v16 != -1073741772 )
    {
      v7 = v16;
      goto LABEL_11;
    }
    v12 = a4;
    LODWORD(a2) = v23;
  }
  if ( a1 )
    v18 = *(_QWORD *)(a1 + 224);
  else
    LODWORD(v18) = 0;
  Key = SysCtxRegOpenKey(v18, a2, (unsigned int)L"Properties", 0, v12, (__int64)a7);
  if ( Key != -1073741772 )
    goto LABEL_27;
  if ( !a5 )
  {
LABEL_23:
    v7 = Key;
    goto LABEL_30;
  }
  PropertiesSecurityDescriptor = (void *)PnpGetPropertiesSecurityDescriptor();
  v9 = PropertiesSecurityDescriptor;
  if ( PropertiesSecurityDescriptor )
  {
    if ( !RtlValidSecurityDescriptor(PropertiesSecurityDescriptor) )
    {
      v7 = -1073741595;
LABEL_31:
      ExFreePoolWithTag(v9, 0);
      goto LABEL_11;
    }
    Key = PnpCtxRegCreateKey(a1, v23);
LABEL_27:
    if ( Key != -1073741444 )
    {
      if ( Key < 0 )
        goto LABEL_23;
      if ( !a3 )
      {
LABEL_30:
        if ( !v9 )
          goto LABEL_11;
        goto LABEL_31;
      }
      v11 = *a7;
      *a7 = 0LL;
      Tree = PnpCtxRegCreateTree(a1);
      if ( Tree != -1073741444 )
      {
        if ( Tree < 0 )
          v7 = Tree;
        goto LABEL_30;
      }
    }
    v7 = -1073741772;
    goto LABEL_30;
  }
  v7 = -1073741595;
LABEL_11:
  if ( Pool2 && Pool2 != pszDest )
    ExFreePoolWithTag(Pool2, 0);
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)v7;
}
