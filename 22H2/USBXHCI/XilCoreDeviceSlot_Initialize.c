/*
 * XREFs of XilCoreDeviceSlot_Initialize @ 0x1C00149DC
 * Callers:
 *     DeviceSlot_Initialize @ 0x1C00148D8 (DeviceSlot_Initialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BEC (WPP_RECORDER_SF_.c)
 *     XilRegister_WriteUlong64 @ 0x1C0014CB8 (XilRegister_WriteUlong64.c)
 *     XilRegister_WriteUlong @ 0x1C0018478 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall XilCoreDeviceSlot_Initialize(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rbp

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v4 = *(_QWORD *)(v3 + 88);
  v5 = *(_QWORD *)(v4 + 32);
  if ( *(_QWORD *)(a1 + 24) )
  {
    XilRegister_WriteUlong(*(_QWORD *)(v3 + 88), v5 + 56, (unsigned __int8)*(_DWORD *)(a1 + 16));
    XilRegister_WriteUlong64(v4, v5 + 48, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL));
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 2, 10, 18, (__int64)&WPP_cb7a5c278baa3da630509d7564b04261_Traceguids);
    return (unsigned int)-1073741436;
  }
  return v2;
}
