/*
 * XREFs of IommuMapDevice @ 0x140520BC0
 * Callers:
 *     <none>
 * Callees:
 *     IommupMapDeviceInternal @ 0x1405216F8 (IommupMapDeviceInternal.c)
 *     HalpIommuCreateDevice @ 0x140822B28 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140930ACC (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall IommuMapDevice(_QWORD *a1, _BYTE *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx
  int Device; // eax
  int v10; // edi
  __int64 v11; // rax

  v5 = a5;
  v6 = 0LL;
  a5 = 0LL;
  *v5 = 0LL;
  if ( *(_DWORD *)a2 != 1 || (a2[4] & 1) != 0 || (a2[10] & 3) != 0 )
    goto LABEL_9;
  Device = HalpIommuCreateDevice(a2, (__int64)&a5);
  v6 = a5;
  v10 = Device;
  if ( Device < 0 )
    goto LABEL_10;
  v11 = a5[3];
  if ( v11 && v11 != HalpIommuBypassDomain )
  {
LABEL_9:
    v10 = -1073741637;
  }
  else
  {
    v10 = IommupMapDeviceInternal(*a1, a5, a4);
    if ( v10 >= 0 )
    {
      *v5 = v6;
      return (unsigned int)v10;
    }
  }
LABEL_10:
  if ( v6 )
    HalpIommuDeleteDevice(v6);
  return (unsigned int)v10;
}
