/*
 * XREFs of ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C001C450
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C00447C0 (ACPIDereferenceWaitWakePowerRequest.c)
 */

__int64 __fastcall ACPIDeviceCancelWaitWakeIrpCallBack(__int64 a1, char a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rax
  const char *v5; // r10
  __int64 v6; // r8
  const char *v8; // r11
  __int64 v9; // rcx

  v4 = (_QWORD *)a4[5];
  v5 = (const char *)&unk_1C00622D0;
  LOBYTE(v6) = 0;
  v8 = (const char *)&unk_1C00622D0;
  if ( v4 )
  {
    v9 = v4[1];
    v6 = a4[5];
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)v4[76];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (const char *)v4[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0xDu,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a2,
      v6,
      v5,
      v8);
  ACPIDereferenceWaitWakePowerRequest(a4);
  return 0LL;
}
