/*
 * XREFs of _PnpOpenPropertiesKey @ 0x14077EF20
 * Callers:
 *     _PnpGetGenericStorePropertyKeys @ 0x140698AAC (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140699288 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1406BDC58 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1406BDEE4 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _PnpDeletePropertyWorker @ 0x1406DB1B4 (_PnpDeletePropertyWorker.c)
 *     _PnpSetPropertyWorker @ 0x140772790 (_PnpSetPropertyWorker.c)
 *     _PnpGetGenericStoreProperty @ 0x14077DF24 (_PnpGetGenericStoreProperty.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140787818 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140A255C0 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140A2A470 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140A2A640 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140A2C910 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140A2CD54 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x1402DF9D0 (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchPrintfExW @ 0x1402DFBC4 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     RtlValidSecurityDescriptor @ 0x140726610 (RtlValidSecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140743C8C (_PnpGetPropertiesSecurityDescriptor.c)
 *     _PnpCtxRegCreateKey @ 0x140772A24 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegCreateTree @ 0x140772AA0 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpOpenPropertiesKey(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        void **a7)
{
  NTSTATUS v7; // ebx
  void *v9; // rbp
  wchar_t *Pool2; // rsi
  void *v11; // r12
  unsigned int v12; // eax
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
    goto LABEL_29;
  if ( !a5 )
  {
LABEL_21:
    v7 = Key;
    goto LABEL_22;
  }
  PropertiesSecurityDescriptor = PnpGetPropertiesSecurityDescriptor();
  v9 = PropertiesSecurityDescriptor;
  if ( PropertiesSecurityDescriptor )
  {
    if ( !RtlValidSecurityDescriptor(PropertiesSecurityDescriptor) )
    {
      v7 = -1073741595;
LABEL_23:
      ExFreePoolWithTag(v9, 0);
      goto LABEL_11;
    }
    Key = PnpCtxRegCreateKey(a1, v23, (__int64)L"Properties", 0, a4, (__int64)v9, (__int64)a7, 0LL);
LABEL_29:
    if ( Key != -1073741444 )
    {
      if ( Key < 0 )
        goto LABEL_21;
      if ( !a3 )
      {
LABEL_22:
        if ( !v9 )
          goto LABEL_11;
        goto LABEL_23;
      }
      v11 = *a7;
      *a7 = 0LL;
      Tree = PnpCtxRegCreateTree(a1);
      if ( Tree != -1073741444 )
      {
        if ( Tree < 0 )
          v7 = Tree;
        goto LABEL_22;
      }
    }
    v7 = -1073741772;
    goto LABEL_22;
  }
  v7 = -1073741595;
LABEL_11:
  if ( Pool2 && Pool2 != pszDest )
    ExFreePoolWithTag(Pool2, 0);
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)v7;
}
