/*
 * XREFs of _CmGetInstallerClassMappedPropertyLocales @ 0x140A66320
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x14074D6F0 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyLocales(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        int a6,
        _DWORD *a7)
{
  DEVPROPKEY **v7; // r8
  unsigned int v8; // r11d
  unsigned int v9; // r10d
  DEVPROPKEY *v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r10d
  DEVPROPKEY **v13; // r8
  DEVPROPKEY *v14; // rdx
  __int64 v15; // rcx
  int v16; // ebx
  DEVPROPKEY **v17; // rdx
  unsigned int v18; // r8d
  DEVPROPKEY *v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rax

  v7 = &CmClassRegPropMap;
  v8 = -1073741802;
  v9 = 0;
  *a7 = 0;
  while ( 1 )
  {
    v10 = *v7;
    if ( *v7 && *(_DWORD *)(a4 + 16) == v10->pid )
    {
      v11 = *(_QWORD *)a4 - *(_QWORD *)&v10->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v10->fmtid.Data1 )
        v11 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v10->fmtid.Data4;
      if ( !v11 )
        break;
    }
    ++v9;
    v7 += 3;
    if ( v9 >= 9 )
    {
      v12 = 0;
      v13 = &off_140A770B0;
      while ( 1 )
      {
        v14 = *v13;
        if ( *v13 && *(_DWORD *)(a4 + 16) == v14->pid )
        {
          v15 = *(_QWORD *)a4 - *(_QWORD *)&v14->fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&v14->fmtid.Data1 )
            v15 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v14->fmtid.Data4;
          if ( !v15 )
            goto LABEL_25;
        }
        ++v12;
        v13 += 4;
        if ( v12 >= 0xD )
        {
          v16 = *(_DWORD *)(a4 + 16);
          v17 = &off_140A75910;
          v18 = 0;
          while ( 1 )
          {
            v19 = *v17;
            if ( v16 == (*v17)->pid )
            {
              v20 = *(_QWORD *)a4 - *(_QWORD *)&v19->fmtid.Data1;
              if ( *(_QWORD *)a4 == *(_QWORD *)&v19->fmtid.Data1 )
                v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v19->fmtid.Data4;
              if ( !v20 )
                goto LABEL_25;
            }
            ++v18;
            v17 += 2;
            if ( v18 >= 4 )
            {
              if ( v16 != 2 )
                return v8;
              v21 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1;
              if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1 )
                v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data4;
              if ( v21 )
                return v8;
              goto LABEL_25;
            }
          }
        }
      }
    }
  }
LABEL_25:
  *a7 = 1;
  if ( a6 )
  {
    v8 = 0;
    *a5 = 0;
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v8;
}
