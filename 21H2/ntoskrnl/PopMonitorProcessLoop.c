/*
 * XREFs of PopMonitorProcessLoop @ 0x1407D0674
 * Callers:
 *     PopMonitorAlpcCallback @ 0x1408F2750 (PopMonitorAlpcCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A70AB0 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140282A48 (PopUmpoSendPowerMessage.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x1403FB280 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1403FB520 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x140414200 (memset.c)
 *     PopSetPowerSettingValueAcDc @ 0x140679E68 (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopMonitorProcessLoop()
{
  __int64 result; // rax
  GUID *v1; // rcx
  _QWORD v2[6]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v3; // [rsp+88h] [rbp-80h]
  _DWORD Src[20]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v5[9]; // [rsp+E8h] [rbp-20h] BYREF
  __int16 v6; // [rsp+13Ch] [rbp+34h]
  int v7; // [rsp+160h] [rbp+58h]
  int v8; // [rsp+164h] [rbp+5Ch]

  memset(&v2[2], 0, 32);
  v3 = 0LL;
  memset(v5, 0, sizeof(v5));
  while ( 1 )
  {
    v2[1] = 48LL;
    result = ZwAlpcSendWaitReceivePort((__int64)PopAlpcMonitorServerPort, 0LL);
    if ( (_DWORD)result )
      return result;
    if ( (unsigned __int8)v6 == 3 )
    {
      LODWORD(v2[0]) = v8;
      if ( v7 )
      {
        if ( v7 == 2 )
        {
          memset(Src, 0, 0x48uLL);
          Src[0] = 11;
          Src[2] = v8;
          PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
        }
        else if ( v7 == 3 )
        {
          v1 = &GUID_VIDEO_CURRENT_MONITOR_BRIGHTNESS;
          goto LABEL_18;
        }
      }
      else
      {
        v1 = &GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS;
LABEL_18:
        PopSetPowerSettingValueAcDc(v1, 4LL, v2);
      }
    }
    else if ( (unsigned __int8)v6 > 4u )
    {
      if ( (unsigned __int8)v6 <= 6u )
      {
        ZwClose(PopAlpcMonitorClientPort);
        PopAlpcMonitorClientPort = 0LL;
      }
      else if ( (unsigned __int8)v6 == 10 )
      {
        if ( PopAlpcMonitorClientPort )
        {
          ZwClose(PopAlpcMonitorClientPort);
          PopAlpcMonitorClientPort = 0LL;
        }
        memset(v5, 0, sizeof(v5));
        LODWORD(v5[0]) = 0x100000;
        v5[2] = 256LL;
        LODWORD(v2[2]) = 48;
        *(_OWORD *)&v2[3] = 0uLL;
        LODWORD(v2[5]) = 512;
        v3 = 0LL;
        if ( (int)ZwAlpcAcceptConnectPort((__int64)&PopAlpcMonitorClientPort, (__int64)PopAlpcMonitorServerPort) < 0 )
          ZwAlpcAcceptConnectPort((__int64)&PopAlpcMonitorClientPort, (__int64)PopAlpcMonitorServerPort);
      }
    }
  }
}
