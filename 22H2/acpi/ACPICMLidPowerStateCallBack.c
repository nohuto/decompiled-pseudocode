/*
 * XREFs of ACPICMLidPowerStateCallBack @ 0x1C004EE50
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C000CC70 (ACPICMButtonStartWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C001DBF4 (WPP_RECORDER_SF_Dqss.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

void __fastcall ACPICMLidPowerStateCallBack(volatile signed __int64 *CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v3; // ebx
  char v5; // si
  NTSTATUS v6; // eax
  const char *v7; // rcx
  const char *v8; // r8
  __int64 v9; // rdx
  _DWORD OutputBuffer[60]; // [rsp+50h] [rbp-108h] BYREF

  v3 = (int)Argument1;
  memset(OutputBuffer, 0, 0xE8uLL);
  v5 = 0;
  if ( !v3 )
  {
    v6 = ZwPowerInformation(SystemPowerPolicyCurrent, 0LL, 0, OutputBuffer, 0xE8u);
    if ( v6 >= 0 )
    {
      if ( OutputBuffer[7] <= 1u )
        _InterlockedOr64(CallbackContext + 1, 0x1000000000000000uLL);
      else
        _InterlockedAnd64(CallbackContext + 1, 0xEFFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v7 = (const char *)&unk_1C00701BA;
      v8 = (const char *)&unk_1C00701BA;
      if ( CallbackContext )
      {
        v9 = *((_QWORD *)CallbackContext + 1);
        v5 = (char)CallbackContext;
        if ( (v9 & 0x200000000000LL) != 0 )
        {
          v7 = (const char *)*((_QWORD *)CallbackContext + 71);
          if ( (v9 & 0x400000000000LL) != 0 )
            v8 = (const char *)*((_QWORD *)CallbackContext + 72);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xAu,
          0x17u,
          (__int64)&WPP_2bc47f5d635e376f4e7295df6662785e_Traceguids,
          v6,
          v5,
          v7,
          v8);
    }
  }
}
