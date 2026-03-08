/*
 * XREFs of _CmSetDeviceContainerMappedProperty @ 0x140A61D50
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x140682AC0 (_PnpDispatchDeviceContainer.c)
 *     _CmDeleteDeviceContainerWorker @ 0x140A60E84 (_CmDeleteDeviceContainerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmSetDeviceContainerMappedProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r10d
  DEVPROPKEY **v6; // r8
  unsigned int v7; // edx
  DEVPROPKEY *v8; // r9
  __int64 v9; // rcx

  v5 = -1073741802;
  if ( !a4 )
  {
    v6 = &off_14000B160;
    v7 = 0;
    while ( 1 )
    {
      v8 = *v6;
      if ( *(_DWORD *)(a5 + 16) == (*v6)->pid )
      {
        v9 = *(_QWORD *)a5 - *(_QWORD *)&v8->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v8->fmtid.Data1 )
          v9 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v8->fmtid.Data4;
        if ( !v9 )
          break;
      }
      ++v7;
      v6 += 2;
      if ( v7 >= 4 )
        return v5;
    }
    return (unsigned int)-1073741790;
  }
  return v5;
}
