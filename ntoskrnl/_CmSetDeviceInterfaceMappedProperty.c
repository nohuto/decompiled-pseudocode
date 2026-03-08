/*
 * XREFs of _CmSetDeviceInterfaceMappedProperty @ 0x14086B538
 * Callers:
 *     _PnpDispatchDeviceInterface @ 0x1406C8CF0 (_PnpDispatchDeviceInterface.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x140A5EEA4 (_CmDeleteDeviceInterfaceWorker.c)
 * Callees:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140687404 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x14087C668 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140A64554 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 */

__int64 __fastcall CmSetDeviceInterfaceMappedProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        ULONG a8)
{
  unsigned int v11; // ebx
  DEVPROPKEY **v12; // r9
  unsigned int v13; // r10d
  DEVPROPKEY *v14; // rdx
  DEVPROPKEY **v15; // rdx
  unsigned int v16; // r8d
  DEVPROPKEY *v17; // r9
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx

  v11 = -1073741802;
  if ( !a4 )
  {
    v12 = &off_140A75178;
    v13 = 0;
    while ( 1 )
    {
      v14 = *v12;
      if ( *v12 && *(_DWORD *)(a5 + 16) == v14->pid )
      {
        v19 = *(_QWORD *)a5 - *(_QWORD *)&v14->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v14->fmtid.Data1 )
          v19 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v14->fmtid.Data4;
        if ( !v19 )
          break;
      }
      ++v13;
      v12 += 2;
      if ( v13 >= 3 )
        goto LABEL_6;
    }
    if ( a6 < 2 )
      v20 = CmDeleteDeviceInterfaceMappedPropertyFromRegValue(a1, a2, a3, a5);
    else
      v20 = CmSetDeviceInterfaceMappedPropertyFromRegValue(a1, a2, a3, a5, a6, a7, a8);
    v11 = v20;
    if ( v20 >= 0 )
    {
      PnpObjectRaisePropertyChangeEvent(a1, a2, 3LL, a3, 0LL, a5);
      return v11;
    }
    if ( v20 == -1073741802 )
    {
LABEL_6:
      v15 = &off_140A758D0;
      v16 = 0;
      while ( 1 )
      {
        v17 = *v15;
        if ( *(_DWORD *)(a5 + 16) == (*v15)->pid )
        {
          v21 = *(_QWORD *)a5 - *(_QWORD *)&v17->fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&v17->fmtid.Data1 )
            v21 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v17->fmtid.Data4;
          if ( !v21 )
            break;
        }
        ++v16;
        v15 += 2;
        if ( v16 >= 4 )
          return v11;
      }
      return (unsigned int)-1073741790;
    }
  }
  return v11;
}
