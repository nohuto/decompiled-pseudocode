/*
 * XREFs of XilCoreDeviceSlot_ClearDeviceContext @ 0x1C001128C
 * Callers:
 *     UsbDevice_DisableCompletion @ 0x1C0048860 (UsbDevice_DisableCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00141F4 (WPP_RECORDER_SF_qd.c)
 */

_UNKNOWN **__fastcall XilCoreDeviceSlot_ClearDeviceContext(_QWORD *a1, int a2, unsigned int a3)
{
  __int64 v3; // r10
  _UNKNOWN **result; // rax
  char v5; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a1[3] + 16LL);
  *(_QWORD *)(a1[7] + 8LL * a3) = 0LL;
  *(_QWORD *)(v3 + 8LL * a3) = 0LL;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = a2;
    LOBYTE(a2) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_qd(
                          *(_QWORD *)(a1[1] + 72LL),
                          a2,
                          10,
                          10,
                          (__int64)&WPP_cb7a5c278baa3da630509d7564b04261_Traceguids,
                          v5,
                          a3);
  }
  return result;
}
