/*
 * XREFs of _CmGetDeviceContainerMappedPropertyLocales @ 0x140A615A4
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x140682AC0 (_PnpDispatchDeviceContainer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetDeviceContainerMappedPropertyLocales(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        int a6,
        _DWORD *a7)
{
  DEVPROPKEY **v7; // r10
  unsigned int v8; // ecx
  unsigned int v9; // r11d
  DEVPROPKEY *v10; // r8
  __int64 v11; // rdx

  v7 = &off_14000B160;
  v8 = -1073741802;
  v9 = 0;
  *a7 = 0;
  while ( 1 )
  {
    v10 = *v7;
    if ( *(_DWORD *)(a4 + 16) == (*v7)->pid )
    {
      v11 = *(_QWORD *)a4 - *(_QWORD *)&v10->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v10->fmtid.Data1 )
        v11 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v10->fmtid.Data4;
      if ( !v11 )
        break;
    }
    ++v9;
    v7 += 2;
    if ( v9 >= 4 )
      return v8;
  }
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
