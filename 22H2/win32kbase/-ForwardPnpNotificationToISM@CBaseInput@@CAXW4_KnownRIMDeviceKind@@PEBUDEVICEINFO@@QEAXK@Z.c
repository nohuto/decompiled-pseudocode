/*
 * XREFs of ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C008A674
 * Callers:
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C005324C (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C008A4D4 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004DFF4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 */

__int64 __fastcall CBaseInput::ForwardPnpNotificationToISM(int a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // xmm1_8
  __int64 v13; // rax
  _QWORD v14[70]; // [rsp+3Ch] [rbp-C4h] BYREF

  result = (unsigned int)(a4 - 2);
  if ( (unsigned int)result <= 1 )
  {
    memset(v14, 0, sizeof(v14));
    if ( a4 == 2 )
    {
      LODWORD(v14[0]) = -__CFSHR__(*(_DWORD *)(a2 + 184), 14);
      v9 = *(_QWORD *)(a2 + 384);
      if ( v9 )
      {
        v13 = *(_QWORD *)(v9 + 88);
        if ( v13 )
          HIDWORD(v14[0]) = *(_DWORD *)(v13 + 56);
      }
      v8 = *(unsigned __int16 *)(a2 + 208);
      if ( (_WORD)v8 )
      {
        if ( (unsigned __int16)((unsigned __int16)v8 >> 1) > 0x104u )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2011LL);
          LOWORD(v8) = *(_WORD *)(a2 + 208);
          HIDWORD(v14[4]) = 260;
        }
        else
        {
          HIDWORD(v14[4]) = (unsigned __int16)v8 >> 1;
        }
        memmove(&v14[5], *(const void **)(a2 + 216), (unsigned __int16)v8);
      }
      if ( a1 == 1 )
      {
        v10 = *(_DWORD *)(a2 + 472);
        v14[1] = *(_QWORD *)(a2 + 464);
        LODWORD(v14[2]) = v10;
      }
      else if ( a1 == 2 )
      {
        v11 = *(_DWORD *)(a2 + 488);
        v12 = *(_QWORD *)(a2 + 480);
        *(_OWORD *)&v14[1] = *(_OWORD *)(a2 + 464);
        LODWORD(v14[4]) = v11;
        v14[3] = v12;
      }
    }
    return InputExtensibilityCallout::CoreMsgSendMessage(v8, 13);
  }
  return result;
}
