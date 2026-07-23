/*
 * XREFs of _CmSetInstallerClassMappedProperty @ 0x1407312BC
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x14073EFA0 (_PnpDispatchInstallerClass.c)
 *     _CmDeleteInstallerClassWorker @ 0x1409754A4 (_CmDeleteInstallerClassWorker.c)
 * Callees:
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140731400 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140746274 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1409798C4 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140979940 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x14097BDDC (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromRegProp @ 0x14097BE58 (_CmSetInstallerClassMappedPropertyFromRegProp.c)
 */

__int64 __fastcall CmSetInstallerClassMappedProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        ULONG a8)
{
  unsigned int v11; // edi
  DEVPROPKEY **v12; // r9
  unsigned int v13; // r10d
  DEVPROPKEY *v14; // rdx
  DEVPROPKEY **v15; // rdx
  unsigned int v16; // r9d
  DEVPROPKEY *v17; // r8
  __int64 v18; // rcx
  int v19; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  DEVPROPKEY **v24; // r8
  unsigned int v25; // edx
  DEVPROPKEY *v26; // r9
  __int64 v27; // rcx

  v11 = -1073741802;
  if ( !a4 )
  {
    v12 = &CmClassRegPropMap;
    v13 = 0;
    while ( 1 )
    {
      v14 = *v12;
      if ( *v12 && *(_DWORD *)(a5 + 16) == v14->pid )
      {
        v21 = *(_QWORD *)a5 - *(_QWORD *)&v14->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v14->fmtid.Data1 )
          v21 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v14->fmtid.Data4;
        if ( !v21 )
          break;
      }
      ++v13;
      v12 += 3;
      if ( v13 >= 9 )
        goto LABEL_6;
    }
    v11 = CmSetInstallerClassMappedPropertyFromRegProp(a1, a2, a3, a5, a6, a7, a8);
    if ( v11 != -1073741802 )
      return v11;
LABEL_6:
    v15 = &off_1409858C0;
    v16 = 0;
    while ( 1 )
    {
      v17 = *v15;
      if ( *(_DWORD *)(a5 + 16) == (*v15)->pid )
      {
        v18 = *(_QWORD *)a5 - *(_QWORD *)&v17->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v17->fmtid.Data1 )
          v18 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v17->fmtid.Data4;
        if ( !v18 )
          break;
      }
      ++v16;
      v15 += 4;
      if ( v16 >= 0xD )
        goto LABEL_25;
    }
    if ( a6 < 2 )
      v19 = CmDeleteInstallerClassMappedPropertyFromRegValue(a1, a2, a3, a5);
    else
      v19 = CmSetInstallerClassMappedPropertyFromRegValue(a1, a2, a3, a5, a6, a7, a8);
    v11 = v19;
    if ( v19 >= 0 )
      PnpObjectRaisePropertyChangeEvent(a1, a2, 2, a3, 0LL, a5);
    if ( v11 != -1073741802 )
      return v11;
LABEL_25:
    if ( *(_DWORD *)(a5 + 16) != 2 )
      goto LABEL_35;
    v22 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1 )
      v22 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data4;
    if ( v22 )
      goto LABEL_35;
    if ( a6 < 2 )
      v23 = CmDeleteInstallerClassMappedPropertyFromCoInstallers(a1, a2);
    else
      v23 = CmSetInstallerClassMappedPropertyFromCoInstallers(a1, a2, (int)v17, a6, a7, a8);
    v11 = v23;
    if ( v23 >= 0 )
      PnpObjectRaisePropertyChangeEvent(a1, a2, 2, a3, 0LL, a5);
    if ( v11 == -1073741802 )
    {
LABEL_35:
      v24 = &off_1409840D0;
      v25 = 0;
      while ( 1 )
      {
        v26 = *v24;
        if ( *(_DWORD *)(a5 + 16) == (*v24)->pid )
        {
          v27 = *(_QWORD *)a5 - *(_QWORD *)&v26->fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&v26->fmtid.Data1 )
            v27 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v26->fmtid.Data4;
          if ( !v27 )
            break;
        }
        ++v25;
        v24 += 2;
        if ( v25 >= 4 )
          return v11;
      }
      return (unsigned int)-1073741790;
    }
  }
  return v11;
}
