/*
 * XREFs of DpiGetIntegratedDisplayOrientationOverrides @ 0x1C03A4C44
 * Callers:
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C021A934 (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C0015614 (DpiFdoGetChildDescriptor.c)
 */

__int64 __fastcall DpiGetIntegratedDisplayOrientationOverrides(__int64 a1, int a2, int *a3, _DWORD *a4)
{
  _QWORD *ChildDescriptor; // rax
  int *v6; // r9
  unsigned int v7; // r10d
  _QWORD *v8; // r11
  _DWORD *v9; // rax
  int v10; // edx

  *a4 = 0;
  *a3 = 0;
  ChildDescriptor = DpiFdoGetChildDescriptor(*(_QWORD *)(a1 + 64), a2);
  v8 = ChildDescriptor;
  if ( ChildDescriptor )
  {
    v9 = (_DWORD *)ChildDescriptor[13];
    if ( v9 )
    {
      v10 = *v9 >> 2;
      if ( ((*(_BYTE *)v9 | (unsigned __int8)v10) & 3) != 0 )
      {
        *v6 = v10 & 3;
        *a3 = *(_DWORD *)v8[13] & 3;
        return 0;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
