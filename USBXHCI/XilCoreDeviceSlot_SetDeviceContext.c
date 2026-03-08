/*
 * XREFs of XilCoreDeviceSlot_SetDeviceContext @ 0x1C0019E44
 * Callers:
 *     XilDeviceSlot_SetDeviceContext @ 0x1C0019D94 (XilDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C0007FC0 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0019330 (WPP_RECORDER_SF_dq.c)
 *     XilUsbDevice_GetDeviceContextBufferLA @ 0x1C0019F3C (XilUsbDevice_GetDeviceContextBufferLA.c)
 *     WPP_RECORDER_SF_qdi @ 0x1C0019F68 (WPP_RECORDER_SF_qdi.c)
 *     memset @ 0x1C0020700 (memset.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall XilCoreDeviceSlot_SetDeviceContext(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        __int64 DeviceContextBufferLA)
{
  __int64 v5; // r15
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  void *DeviceContextBufferVA; // r13
  __int64 v14; // rax
  size_t v15; // r8
  __int64 v16; // r12
  __int64 v17; // r14
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdx

  v5 = a3;
  v8 = 0;
  DeviceContextBufferVA = (void *)XilUsbDevice_GetDeviceContextBufferVA(a2);
  if ( *(_BYTE *)(v10 + 657) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v9, v11, v12);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  else
  {
    v14 = *(_QWORD *)(v10 + 632);
    if ( v14 )
    {
      v15 = *(unsigned int *)(v14 + 44);
      goto LABEL_4;
    }
  }
  v15 = 0LL;
LABEL_4:
  v16 = a1[7];
  v17 = *(_QWORD *)(a1[3] + 16LL);
  if ( !DeviceContextBufferLA )
    DeviceContextBufferLA = XilUsbDevice_GetDeviceContextBufferLA(a2, v9, v15);
  memset(DeviceContextBufferVA, 0, v15);
  v20 = *(_QWORD *)(v16 + 8 * v5);
  if ( v20 || *(_QWORD *)(v17 + 8 * v5) )
  {
    v8 = -1073741790;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(a1[1] + 72LL),
        v20,
        10,
        12,
        (__int64)&WPP_cb7a5c278baa3da630509d7564b04261_Traceguids,
        v5,
        *(_QWORD *)(v16 + 8 * v5));
    }
  }
  else
  {
    *(_QWORD *)(v16 + 8 * v5) = a2;
    *(_QWORD *)(v17 + 8 * v5) = DeviceContextBufferLA;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdi(*(_QWORD *)(a1[1] + 72LL), 0, v18, v19);
  }
  return v8;
}
