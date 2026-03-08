/*
 * XREFs of PiDevCfgInitDeviceContext @ 0x140876144
 * Callers:
 *     PpDevCfgProcessDeviceOperations @ 0x14078AC6C (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140842090 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgProcessDevice @ 0x140873308 (PiDevCfgProcessDevice.c)
 *     PiDevCfgInitDeviceCallback @ 0x14095B580 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14095F918 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceClass @ 0x14095F98C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14095FD04 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14096044C (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     PiDevCfgFreeDeviceContext @ 0x14078AD4C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086AC20 (PiDevCfgQueryObjectProperties.c)
 */

__int64 __fastcall PiDevCfgInitDeviceContext(__int64 a1, void *a2, __int64 *a3)
{
  void **v6; // rdi
  _BYTE *v7; // rcx
  __int64 v8; // r9
  DEVPROPKEY **v9; // rdx
  __int64 *v10; // r8
  __int64 v11; // rax
  int ObjectProperties; // ebp
  unsigned int v13; // edi
  int *v14; // rsi
  _BYTE v16[128]; // [rsp+40h] [rbp-A8h] BYREF

  memset(a3, 0, 0x48uLL);
  a3[1] = a1;
  v6 = (void **)(a3 + 2);
  if ( a2 )
  {
    *v6 = a2;
  }
  else
  {
    ObjectProperties = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a1, 16, 0, 983103, 0, (__int64)(a3 + 2), 0LL);
    if ( ObjectProperties < 0 )
    {
LABEL_13:
      PiDevCfgFreeDeviceContext((__int64)a3);
      return (unsigned int)ObjectProperties;
    }
    *(_DWORD *)a3 |= 0x80000000;
  }
  memset(v16, 0, 0x78uLL);
  v7 = &v16[8];
  v8 = 3LL;
  v9 = &off_140D53778;
  v10 = a3 + 3;
  do
  {
    v11 = (__int64)*v9++;
    *((_QWORD *)v7 + 1) = v10;
    v10 += 2;
    *((_QWORD *)v7 - 1) = v11;
    *(_DWORD *)v7 = 8210;
    *((_DWORD *)v7 + 5) = 6;
    v7 += 40;
    --v8;
  }
  while ( v8 );
  ObjectProperties = PiDevCfgQueryObjectProperties((__int64)v7, a3[1], 1u, *v6, (__int64)v16, 3u);
  if ( ObjectProperties < 0 )
    goto LABEL_13;
  v13 = 0;
  v14 = (int *)&v16[32];
  do
  {
    if ( *v14 < 0 )
      RtlInitUnicodeString((PUNICODE_STRING)&a3[2 * v13 + 3], 0LL);
    ++v13;
    v14 += 10;
  }
  while ( v13 < 3 );
  return (unsigned int)ObjectProperties;
}
