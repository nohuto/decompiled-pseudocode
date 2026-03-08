/*
 * XREFs of PiCreateDriverSwDevices @ 0x140681C40
 * Callers:
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140685094 (PnpDeviceObjectToDeviceInstance.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140824EA0 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall PiCreateDriverSwDevices(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int128 v10; // [rsp+30h] [rbp-10h] BYREF
  HANDLE v11; // [rsp+50h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+18h] BYREF

  Handle = 0LL;
  v11 = 0LL;
  v5 = *(_QWORD *)(a1 + 32);
  v10 = 0LL;
  v6 = PnpDeviceObjectToDeviceInstance(v5, &Handle, 131097LL, a4);
  if ( v6 >= 0 )
  {
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v7 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
    else
      LODWORD(v7) = 0;
    v8 = SysCtxRegOpenKey(v7, (_DWORD)Handle, (unsigned int)L"Devices", 0, 131097, (__int64)&v11);
    v6 = v8;
    if ( v8 >= 0 )
    {
      DWORD2(v10) = 0;
      *(_QWORD *)&v10 = a1;
      v6 = PnpCtxRegEnumKeyWithCallback(*(_QWORD *)&PiPnpRtlCtx, v11, PiCreateDriverSwDeviceCallback, &v10);
      if ( v6 >= 0 && SDWORD2(v10) < 0 )
        v6 = DWORD2(v10);
    }
    else if ( v8 == -1073741772 )
    {
      v6 = 0;
    }
  }
  if ( v11 )
    ZwClose(v11);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
