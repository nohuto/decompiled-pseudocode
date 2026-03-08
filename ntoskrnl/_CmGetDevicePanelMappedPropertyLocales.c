/*
 * XREFs of _CmGetDevicePanelMappedPropertyLocales @ 0x140A639E0
 * Callers:
 *     _PnpDispatchDevicePanel @ 0x140823890 (_PnpDispatchDevicePanel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetDevicePanelMappedPropertyLocales(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        int a6,
        _DWORD *a7)
{
  __int64 **v7; // r10
  unsigned int v8; // ecx
  unsigned int v9; // r11d
  __int64 *v10; // r8
  __int64 v11; // rdx

  v7 = &off_14000B218;
  v8 = -1073741802;
  v9 = 0;
  *a7 = 0;
  while ( 1 )
  {
    v10 = *v7;
    if ( *(_DWORD *)(a4 + 16) == *((_DWORD *)*v7 + 4) )
    {
      v11 = *(_QWORD *)a4 - *v10;
      if ( *(_QWORD *)a4 == *v10 )
        v11 = *(_QWORD *)(a4 + 8) - v10[1];
      if ( !v11 )
        break;
    }
    ++v9;
    v7 += 2;
    if ( v9 >= 3 )
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
