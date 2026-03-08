/*
 * XREFs of PiDevCfgInitDeviceCallback @ 0x14095B580
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     _PnpOpenObjectRegKey @ 0x1406CECB8 (_PnpOpenObjectRegKey.c)
 *     PiDevCfgFreeDeviceContext @ 0x14078AD4C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140875718 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgInitDeviceContext @ 0x140876144 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140959960 (PiDevCfgCheckDeviceNeedsUpdate.c)
 */

__int64 __fastcall PiDevCfgInitDeviceCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v10; // [rsp+40h] [rbp-9h] BYREF
  unsigned int v11; // [rsp+44h] [rbp-5h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-1h] BYREF
  __int64 v13[10]; // [rsp+50h] [rbp+7h] BYREF
  int v14; // [rsp+B0h] [rbp+67h] BYREF
  int v15; // [rsp+C8h] [rbp+7Fh] BYREF

  memset(v13, 0, 0x48uLL);
  v5 = *(_DWORD *)(a1 + 28);
  v6 = *(_QWORD *)(a1 + 16);
  Handle = 0LL;
  v14 = 0;
  v11 = 0;
  v15 = 0;
  v10 = 1;
  if ( (int)PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v6, v5, 983103, 0, (__int64)&Handle) >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v15 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v7,
                (__int64)Handle,
                11,
                (__int64)&v10,
                (__int64)&v14,
                (__int64)&v15,
                0) < 0
      || v10 != 4
      || v15 != 4 )
    {
      v14 = 0;
    }
    if ( (int)PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 16), Handle, v13) >= 0 )
    {
      if ( (int)PiDevCfgCheckDeviceNeedsUpdate((__int64)v13, &v11) >= 0 && v11 )
      {
        v14 |= v11;
        PiDevCfgSetDeviceRegProp(v8, (__int64)v13, 0xBu, 4, (__int64)&v14, 4);
      }
      *a3 = 0;
    }
  }
  PiDevCfgFreeDeviceContext((__int64)v13);
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
