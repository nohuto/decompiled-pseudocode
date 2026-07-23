/*
 * XREFs of _CmSetDeviceMappedProperty @ 0x14073A704
 * Callers:
 *     _PnpDispatchDevice @ 0x140631220 (_PnpDispatchDevice.c)
 *     _CmDeleteDeviceWorker @ 0x14072CF38 (_CmDeleteDeviceWorker.c)
 * Callees:
 *     _CmIsRootDevice @ 0x14060FAF4 (_CmIsRootDevice.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x140730998 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140733D0C (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14073A948 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromRegProp @ 0x14073AB24 (_CmSetDeviceMappedPropertyFromRegProp.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140746274 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14097BC28 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 */

__int64 __fastcall CmSetDeviceMappedProperty(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        PLARGE_INTEGER Time,
        ULONG a8)
{
  unsigned int v11; // ebx
  DEVPROPKEY **v12; // r8
  unsigned int v13; // r9d
  DEVPROPKEY *v14; // rdx
  DEVPROPKEY **v15; // r8
  unsigned int v16; // r9d
  DEVPROPKEY *v17; // rdx
  DEVPROPKEY **v18; // r8
  unsigned int v19; // r9d
  DEVPROPKEY *v20; // rdx
  DEVPROPKEY **v21; // r8
  unsigned int v22; // edx
  DEVPROPKEY *v23; // r9
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax

  v11 = -1073741802;
  if ( !a4 )
  {
    if ( !CmIsRootDevice(a2) )
    {
      v12 = &CmDeviceRegPropMap;
      v13 = 0;
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 && *(_DWORD *)(a5 + 16) == v14->pid )
        {
          v26 = *(_QWORD *)a5 - *(_QWORD *)&v14->fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&v14->fmtid.Data1 )
            v26 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v14->fmtid.Data4;
          if ( !v26 )
            break;
        }
        ++v13;
        v12 += 3;
        if ( v13 >= 0x21 )
          goto LABEL_7;
      }
      v11 = CmSetDeviceMappedPropertyFromRegProp(a1, (_DWORD)a2, (_DWORD)a3, a5, a6, (__int64)Time, a8);
      if ( v11 != -1073741802 )
        return v11;
LABEL_7:
      v15 = &off_140986A80;
      v16 = 0;
      while ( 1 )
      {
        v17 = *v15;
        if ( *(_DWORD *)(a5 + 16) == (*v15)->pid )
        {
          v27 = *(_QWORD *)a5 - *(_QWORD *)&v17->fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&v17->fmtid.Data1 )
            v27 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v17->fmtid.Data4;
          if ( !v27 )
            break;
        }
        ++v16;
        v15 += 4;
        if ( v16 >= 0xD )
          goto LABEL_10;
      }
      if ( a6 < 2 )
        CmDeleteDeviceMappedPropertyFromDriverKeyRegValue(a1, (__int64)a2, a5);
      else
        CmSetDeviceMappedPropertyFromDriverKeyRegValue(a1, (int)a2, a5, a6, Time, a8);
      v11 = -1073741802;
LABEL_10:
      v18 = &off_140983FA0;
      v19 = 0;
      while ( 1 )
      {
        v20 = *v18;
        if ( *(_DWORD *)(a5 + 16) == (*v18)->pid )
        {
          v28 = *(_QWORD *)a5 - *(_QWORD *)&v20->fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&v20->fmtid.Data1 )
            v28 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v20->fmtid.Data4;
          if ( !v28 )
            break;
        }
        ++v19;
        v18 += 4;
        if ( v19 >= 2 )
          goto LABEL_13;
      }
      if ( a6 >= 2 )
        v29 = CmSetDeviceMappedPropertyFromInstanceKeyRegValue(a1, a2, a3, a5, a6, Time, a8);
      else
        v29 = CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue(a1, (__int64)a2, a3, a5);
      v11 = v29;
      if ( v29 >= 0 )
        PnpObjectRaisePropertyChangeEvent(a1, (_DWORD)a2, 1, (_DWORD)a3, 0LL, a5);
      if ( v11 != -1073741802 )
        return v11;
LABEL_13:
      v21 = &off_140985F90;
      v22 = 0;
      while ( 1 )
      {
        v23 = *v21;
        if ( *(_DWORD *)(a5 + 16) == (*v21)->pid )
        {
          v25 = *(_QWORD *)a5 - *(_QWORD *)&v23->fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&v23->fmtid.Data1 )
            v25 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v23->fmtid.Data4;
          if ( !v25 )
            break;
        }
        ++v22;
        v21 += 2;
        if ( v22 >= 0x1B )
          return v11;
      }
    }
    return (unsigned int)-1073741790;
  }
  return v11;
}
