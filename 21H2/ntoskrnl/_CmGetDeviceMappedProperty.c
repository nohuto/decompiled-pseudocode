/*
 * XREFs of _CmGetDeviceMappedProperty @ 0x1406313BC
 * Callers:
 *     _PnpDispatchDevice @ 0x140631220 (_PnpDispatchDevice.c)
 * Callees:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406315BC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140633C08 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140752FE0 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 */

__int64 __fastcall CmGetDeviceMappedProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _DWORD *a9,
        int a10)
{
  unsigned int DeviceMappedPropertyFromRegProp; // r10d
  DEVPROPKEY **v13; // rdx
  unsigned int v14; // r8d
  DEVPROPKEY *v15; // r9
  DEVPROPKEY **v16; // r8
  unsigned int v17; // r9d
  DEVPROPKEY *v18; // rdx
  DEVPROPKEY **v19; // r8
  unsigned int v20; // r9d
  DEVPROPKEY *v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx

  DeviceMappedPropertyFromRegProp = -1073741802;
  if ( (_WORD)a10 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a9 = 0;
    if ( !a4 )
    {
      v13 = &CmDeviceRegPropMap;
      v14 = 0;
      while ( 1 )
      {
        v15 = *v13;
        if ( *(_DWORD *)(a5 + 16) == (*v13)->pid )
        {
          v24 = *(_QWORD *)a5 - *(_QWORD *)&v15->fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&v15->fmtid.Data1 )
            v24 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v15->fmtid.Data4;
          if ( !v24 )
            break;
        }
        ++v14;
        v13 += 3;
        if ( v14 >= 0x21 )
          goto LABEL_6;
      }
      DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromRegProp(
                                          a1,
                                          a2,
                                          a3,
                                          a5,
                                          a6,
                                          a7,
                                          a8,
                                          (__int64)a9,
                                          a10);
      if ( DeviceMappedPropertyFromRegProp != -1073741802 )
        return DeviceMappedPropertyFromRegProp;
LABEL_6:
      v16 = &off_140983FA0;
      v17 = 0;
      while ( 1 )
      {
        v18 = *v16;
        if ( *(_DWORD *)(a5 + 16) == (*v16)->pid )
        {
          v25 = *(_QWORD *)a5 - *(_QWORD *)&v18->fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&v18->fmtid.Data1 )
            v25 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v18->fmtid.Data4;
          if ( !v25 )
            break;
        }
        ++v17;
        v16 += 4;
        if ( v17 >= 2 )
          goto LABEL_9;
      }
      DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromInstanceKeyRegValue(a1, a2, a3, a5, a6, a7, a8, a9);
      if ( DeviceMappedPropertyFromRegProp != -1073741802 )
        return DeviceMappedPropertyFromRegProp;
LABEL_9:
      v19 = &off_140985F90;
      v20 = 0;
      while ( 1 )
      {
        v21 = *v19;
        if ( *(_DWORD *)(a5 + 16) == (*v19)->pid )
        {
          v22 = *(_QWORD *)a5 - *(_QWORD *)&v21->fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&v21->fmtid.Data1 )
            v22 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v21->fmtid.Data4;
          if ( !v22 )
            break;
        }
        ++v20;
        v19 += 2;
        if ( v20 >= 0x1B )
          return DeviceMappedPropertyFromRegProp;
      }
      return (unsigned int)CmGetDeviceMappedPropertyFromComposite(a1, a2, a3, a5, a6, a7, a8, a9, a10);
    }
  }
  return DeviceMappedPropertyFromRegProp;
}
