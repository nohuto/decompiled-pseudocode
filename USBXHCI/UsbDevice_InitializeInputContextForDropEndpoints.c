/*
 * XREFs of UsbDevice_InitializeInputContextForDropEndpoints @ 0x1C000CFF4
 * Callers:
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C000AF50 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 * Callees:
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C0007FC0 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dddddd @ 0x1C004A1A0 (WPP_RECORDER_SF_dddddd.c)
 */

__int64 __fastcall UsbDevice_InitializeInputContextForDropEndpoints(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rbp
  __int64 i; // rdi
  int v8; // edx
  int v9; // r11d
  __int64 v10; // r14
  __int64 DeviceContextBufferVA; // rax
  char v12; // r11
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // [rsp+20h] [rbp-58h]

  v4 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 8 : 0) + a1 + 640);
  if ( v4 )
    v5 = *(_DWORD **)(v4 + 16);
  else
    v5 = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 40); i = (unsigned int)(i + 1) )
  {
    v9 = *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                       WdfDriverGlobals,
                       *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * i),
                       off_1C00631A8)
                   + 144);
    *v5 |= 1 << v9;
    if ( *(_BYTE *)(a1 + 657) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v8,
          12,
          42,
          (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
          *(_BYTE *)(a1 + 135),
          v9);
      }
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 8);
      if ( (*(_DWORD *)(*(_QWORD *)(v10 + 88) + 104LL) & 4) != 0 )
      {
        DeviceContextBufferVA = XilUsbDevice_GetDeviceContextBufferVA(a1);
        v14 = (v13 + 1) << 6;
      }
      else
      {
        v14 = XilUsbDevice_GetDeviceContextBufferVA(a1);
        DeviceContextBufferVA = 32 * (v15 + 1);
      }
      v16 = DeviceContextBufferVA + v14;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dddddd(
          *(_QWORD *)(v10 + 72),
          *(unsigned __int8 *)(v16 + 2),
          *(unsigned __int16 *)(v16 + 6),
          (*(_DWORD *)(v16 + 4) >> 3) & 7,
          v17,
          *(_BYTE *)(a1 + 135),
          v12,
          (*(_DWORD *)(v16 + 4) >> 3) & 7,
          *(_WORD *)(v16 + 6),
          *(_BYTE *)(v16 + 2),
          *(_BYTE *)v16 & 7);
    }
  }
  return 0LL;
}
