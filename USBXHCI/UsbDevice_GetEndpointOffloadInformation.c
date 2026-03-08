/*
 * XREFs of UsbDevice_GetEndpointOffloadInformation @ 0x1C0048D9C
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C000D070 (UsbDevice_EndpointsConfigureCompletion.c)
 * Callees:
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C0007FC0 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_IncrementNumberOfEndpointsOffloaded @ 0x1C0033878 (Controller_IncrementNumberOfEndpointsOffloaded.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall UsbDevice_GetEndpointOffloadInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r14
  __int64 v8; // r13
  __int64 v9; // rsi
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdi
  int v14; // ecx
  __int64 v15; // rcx
  __int64 DeviceContextBufferVA; // rax
  int v17; // edx
  __int64 v18; // rdx

  result = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  v8 = *(_QWORD *)(result + 128);
  if ( *(_DWORD *)(result + 636) == 1 )
  {
    result = *(_QWORD *)(v8 + 32);
    v4 = *(_QWORD *)(result + 8LL * *(unsigned int *)(v8 + 64));
  }
  v9 = 0LL;
  if ( *(_DWORD *)(a2 + 24) )
  {
    while ( 1 )
    {
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                 WdfDriverGlobals,
                 *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v9),
                 off_1C00631A8);
      v13 = result;
      if ( *(unsigned __int8 *)(result + 98) == *(_WORD *)(a3 + 4) )
        break;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *(_DWORD *)(a2 + 24) )
        return result;
    }
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 636LL) == 1 )
    {
      v14 = *(_DWORD *)(result + 1360);
      if ( v14 == 2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v10, v11, v12);
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
      }
      else
      {
        if ( *(_DWORD *)(*(_QWORD *)result + 636LL) == 2 && v14 != 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v10, v11, v12);
          if ( !KdRefreshDebuggerNotPresent() )
            __debugbreak();
        }
        v15 = *(_QWORD *)v13;
        *(_DWORD *)(v13 + 1360) = 2;
        Controller_IncrementNumberOfEndpointsOffloaded(v15);
      }
    }
    DeviceContextBufferVA = XilUsbDevice_GetDeviceContextBufferVA(a1);
    v17 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 636LL);
    *(_DWORD *)(a3 + 10) = v17;
    *(_BYTE *)(a3 + 14) = *(_BYTE *)(DeviceContextBufferVA + 6);
    *(_DWORD *)(a3 + 14) ^= (*(_DWORD *)(a3 + 14) ^ (*(_DWORD *)DeviceContextBufferVA << 8)) & 0xFFFFF00;
    *(_DWORD *)(a3 + 14) = (*(_DWORD *)DeviceContextBufferVA << 8) ^ (*(_DWORD *)(a3 + 14) ^ (*(_DWORD *)DeviceContextBufferVA << 8)) & 0xFFFFFFF;
    *(_BYTE *)(a3 + 18) = *(_BYTE *)(DeviceContextBufferVA + 12);
    *(_BYTE *)(a3 + 19) = *(_BYTE *)(a1 + 135);
    *(_DWORD *)(a3 + 18) ^= (*(_DWORD *)(a3 + 18) ^ (*(_DWORD *)DeviceContextBufferVA >> 9)) & 0x10000;
    result = *(unsigned int *)(a3 + 18);
    *(_DWORD *)(a3 + 18) = result ^ (result ^ (*(unsigned __int8 *)(a1 + 137) << 17)) & 0x20000;
    if ( v17 == 1 )
    {
      v18 = *(_QWORD *)(v13 + 88);
      *(_QWORD *)(a3 + 22) = *(_QWORD *)(*(_QWORD *)(v18 + 176) + 24LL);
      *(_QWORD *)(a3 + 38) = *(unsigned int *)(*(_QWORD *)(v18 + 176) + 44LL);
      *(_QWORD *)(a3 + 30) = *(_QWORD *)(*(_QWORD *)(v18 + 176) + 16LL);
      *(_DWORD *)(a3 + 46) = *(_DWORD *)(v18 + 200);
      *(_DWORD *)(a3 + 50) = *(_DWORD *)(v8 + 64);
      *(_QWORD *)(a3 + 54) = *(_QWORD *)(*(_QWORD *)(v4 + 144) + 24LL);
      *(_QWORD *)(a3 + 70) = *(unsigned int *)(*(_QWORD *)(v4 + 144) + 44LL);
      *(_QWORD *)(a3 + 62) = *(_QWORD *)(*(_QWORD *)(v4 + 144) + 16LL);
      result = *(unsigned int *)(v4 + 120);
      *(_DWORD *)(a3 + 78) = result;
    }
  }
  return result;
}
