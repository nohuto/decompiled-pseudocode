__int64 __fastcall CmGetInstallerClassMappedPropertyFromComposite(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8)
{
  _DWORD *v8; // r15
  unsigned int *v9; // rsi
  __int64 v11; // r14
  unsigned int v14; // r10d
  unsigned int v15; // ebp
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rax
  unsigned int ObjectProperty; // eax
  unsigned int v24; // eax
  unsigned int v26; // [rsp+B8h] [rbp+20h] BYREF

  v8 = a5;
  v9 = a8;
  v11 = a6;
  v26 = 0;
  *a5 = 0;
  v14 = 0;
  *v9 = 0;
  if ( v11 )
  {
    v15 = a7;
    v11 &= -(__int64)(a7 != 0);
  }
  else
  {
    v15 = 0;
  }
  v16 = *(_DWORD *)(a4 + 16);
  if ( v16 < 2 )
    return (unsigned int)-1073741264;
  if ( v16 == 10 )
  {
    v22 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
      v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
    if ( !v22 )
    {
      ObjectProperty = PnpGetObjectProperty(
                         a1,
                         a2,
                         2LL,
                         a3,
                         0LL,
                         (__int64)&DEVPKEY_DeviceClass_Name,
                         (__int64)v8,
                         v11,
                         v15,
                         (__int64)&v26,
                         0);
      v14 = ObjectProperty;
      switch ( ObjectProperty )
      {
        case 0u:
          goto LABEL_40;
        case 0xC0000023:
          goto LABEL_40;
        case 0xC0000225:
          v24 = PnpGetObjectProperty(
                  a1,
                  a2,
                  2LL,
                  a3,
                  0LL,
                  (__int64)&DEVPKEY_DeviceClass_ClassName,
                  (__int64)v8,
                  v11,
                  v15,
                  (__int64)&v26,
                  0);
          v14 = v24;
          if ( !v24 || v24 == -1073741789 )
            goto LABEL_40;
          break;
      }
    }
  }
  else
  {
    if ( v16 != 4 )
    {
      if ( v16 == 20 )
      {
        v19 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_CompoundUpperFilters;
        if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_CompoundUpperFilters )
          v19 = *(_QWORD *)(a4 + 8) - 0x4B88D2ECD9DBB9A9LL;
        if ( !v19 )
          return (unsigned int)CmGetInstallerClassCompoundFilters(a1, a2, a3, a4, (__int64)v8, v11, v15, (__int64)v9);
      }
      if ( v16 == 21 )
      {
        v17 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_CompoundLowerFilters;
        if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_CompoundLowerFilters )
          v17 = *(_QWORD *)(a4 + 8) - 0x4B88D2ECD9DBB9A9LL;
        if ( !v17 )
          return (unsigned int)CmGetInstallerClassCompoundFilters(a1, a2, a3, a4, (__int64)v8, v11, v15, (__int64)v9);
      }
      return v14;
    }
    v20 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_Configurable;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_Configurable )
      v20 = *(_QWORD *)(a4 + 8) - 0x4B88D2ECD9DBB9A9LL;
    if ( !v20 )
    {
      v21 = PnpGetObjectProperty(
              a1,
              a2,
              2LL,
              a3,
              0LL,
              (__int64)DEVPKEY_DeviceClass_ConfigurableOverride,
              (__int64)v8,
              v11,
              v15,
              (__int64)&v26,
              0);
      v14 = v21;
      if ( v21 && v21 != -1073741789 )
      {
        if ( v21 == -1073741275 )
        {
          v14 = PnpGetObjectProperty(
                  a1,
                  a2,
                  2LL,
                  a3,
                  0LL,
                  (__int64)&DEVPKEY_DeviceClass_ClassInstaller,
                  (__int64)v8,
                  0LL,
                  0,
                  (__int64)&v26,
                  0);
          if ( v14 == -1073741275 )
            v14 = PnpGetObjectProperty(
                    a1,
                    a2,
                    2LL,
                    a3,
                    0LL,
                    (__int64)&DEVPKEY_DeviceClass_ClassCoInstallers,
                    (__int64)v8,
                    0LL,
                    0,
                    (__int64)&v26,
                    0);
          if ( (v14 & 0x80000000) == 0 || v14 == -1073741275 || v14 == -1073741789 )
          {
            *v9 = 1;
            *v8 = 17;
            if ( v15 < *v9 )
            {
              return (unsigned int)-1073741789;
            }
            else
            {
              *(_BYTE *)v11 = (v14 != -1073741275) - 1;
              return 0;
            }
          }
        }
        return v14;
      }
LABEL_40:
      *v9 = v26;
    }
  }
  return v14;
}
