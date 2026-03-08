/*
 * XREFs of PiDevCfgConfigureDeviceDriver @ 0x140875764
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x14087384C (PiDevCfgConfigureDevice.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14095FD04 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x1408757F4 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceDriver(int a1, int a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *v5; // rbp
  __int64 v8; // r8
  int v11; // ecx
  __int64 *v12; // rdi
  __int64 i; // rbx
  _DWORD v15[4]; // [rsp+40h] [rbp-28h] BYREF
  int v16; // [rsp+80h] [rbp+18h] BYREF

  v5 = a5;
  v16 = 0;
  v8 = *(_QWORD *)(a3 + 32);
  v15[0] = 0;
  v11 = PiDevCfgConfigureDeviceDriverConfiguration(a1, a2, v8, -1, 0LL, 0LL, (__int64)a4, (__int64)a5);
  if ( v11 >= 0 )
  {
    v12 = (__int64 *)(a3 + 368);
    for ( i = *v12; (__int64 *)i != v12; i = *(_QWORD *)i )
    {
      v11 = PiDevCfgConfigureDeviceDriverConfiguration(
              a1,
              a2,
              *(_QWORD *)(i + 32),
              *(_DWORD *)(i + 104),
              (__int64)PiDevCfgConfigurePropertyMatchCallback,
              i,
              (__int64)&v16,
              (__int64)v15);
      if ( v11 < 0 )
        break;
      if ( a4 )
        *a4 |= v16;
      if ( v5 )
        *v5 |= v15[0];
    }
  }
  return (unsigned int)v11;
}
