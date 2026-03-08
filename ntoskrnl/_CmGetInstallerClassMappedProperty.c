/*
 * XREFs of _CmGetInstallerClassMappedProperty @ 0x14074D838
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x14074D6F0 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x14074DA38 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14074DDF4 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14087C86C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14087E160 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 */

__int64 __fastcall CmGetInstallerClassMappedProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _DWORD *a9)
{
  unsigned int InstallerClassMappedPropertyFromRegValue; // r10d
  DEVPROPKEY **v13; // r8
  DEVPROPKEY *v14; // rdx
  DEVPROPKEY **v15; // r8
  unsigned int v16; // r9d
  DEVPROPKEY *v17; // rdx
  DEVPROPKEY **v18; // r8
  unsigned int v19; // r9d
  DEVPROPKEY *v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int InstallerClassMappedPropertyFromRegProp; // eax

  InstallerClassMappedPropertyFromRegValue = -1073741802;
  *a9 = 0;
  if ( !a4 )
  {
    v13 = &CmClassRegPropMap;
    while ( 1 )
    {
      v14 = *v13;
      if ( *v13 && *(_DWORD *)(a5 + 16) == v14->pid )
      {
        v23 = *(_QWORD *)a5 - *(_QWORD *)&v14->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v14->fmtid.Data1 )
          v23 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v14->fmtid.Data4;
        if ( !v23 )
          break;
      }
      LODWORD(a4) = a4 + 1;
      v13 += 3;
      if ( (unsigned int)a4 >= 9 )
        goto LABEL_6;
    }
    InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegProp(
                                                a1,
                                                a2,
                                                a3,
                                                a5,
                                                a6,
                                                a7,
                                                a8,
                                                (__int64)a9);
    InstallerClassMappedPropertyFromRegValue = InstallerClassMappedPropertyFromRegProp;
    if ( InstallerClassMappedPropertyFromRegProp != -1073741802 )
      return InstallerClassMappedPropertyFromRegValue;
LABEL_6:
    v15 = &off_140A770B0;
    v16 = 0;
    while ( 1 )
    {
      v17 = *v15;
      if ( *(_DWORD *)(a5 + 16) == (*v15)->pid )
      {
        v24 = *(_QWORD *)a5 - *(_QWORD *)&v17->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v17->fmtid.Data1 )
          v24 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v17->fmtid.Data4;
        if ( !v24 )
          break;
      }
      ++v16;
      v15 += 4;
      if ( v16 >= 0xD )
        goto LABEL_9;
    }
    InstallerClassMappedPropertyFromRegValue = CmGetInstallerClassMappedPropertyFromRegValue(
                                                 a1,
                                                 a2,
                                                 a3,
                                                 a5,
                                                 a6,
                                                 a7,
                                                 a8,
                                                 a9);
    if ( InstallerClassMappedPropertyFromRegValue != -1073741802 )
      return InstallerClassMappedPropertyFromRegValue;
LABEL_9:
    if ( *(_DWORD *)(a5 + 16) != 2 )
      goto LABEL_10;
    v25 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1 )
      v25 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data4;
    if ( v25
      || (InstallerClassMappedPropertyFromRegValue = CmGetInstallerClassMappedPropertyFromCoInstallers(
                                                       a1,
                                                       a2,
                                                       v15,
                                                       a6,
                                                       a7,
                                                       a8,
                                                       a9),
          InstallerClassMappedPropertyFromRegValue == -1073741802) )
    {
LABEL_10:
      v18 = &off_140A75910;
      v19 = 0;
      while ( 1 )
      {
        v20 = *v18;
        if ( *(_DWORD *)(a5 + 16) == (*v18)->pid )
        {
          v21 = *(_QWORD *)a5 - *(_QWORD *)&v20->fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&v20->fmtid.Data1 )
            v21 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v20->fmtid.Data4;
          if ( !v21 )
            break;
        }
        ++v19;
        v18 += 2;
        if ( v19 >= 4 )
          return InstallerClassMappedPropertyFromRegValue;
      }
      return (unsigned int)CmGetInstallerClassMappedPropertyFromComposite(a1, a2, a3, a5, a6, a7, a8, (__int64)a9);
    }
  }
  return InstallerClassMappedPropertyFromRegValue;
}
