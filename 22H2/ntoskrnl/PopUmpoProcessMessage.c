/*
 * XREFs of PopUmpoProcessMessage @ 0x1406F3304
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14034BAC4 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x1406F31D4 (PopUmpoProcessMessages.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x1403FA900 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x1403FA920 (ZwAlpcCancelMessage.c)
 *     memset @ 0x140413800 (memset.c)
 *     PopUmpoProcessPowerMessage @ 0x1406F3434 (PopUmpoProcessPowerMessage.c)
 *     PopAcquireUmpoPushLock @ 0x1406F55C8 (PopAcquireUmpoPushLock.c)
 */

__int64 __fastcall PopUmpoProcessMessage(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  int v4; // ebx
  HANDLE v6; // rbx
  _QWORD v7[9]; // [rsp+80h] [rbp-19h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 4);
  v3 = v2 & 0xFFFF00FF;
  if ( (v2 & 0xFFFF00FF) == 1 )
    goto LABEL_15;
  if ( v3 <= 1 )
    return 0;
  if ( v3 > 3 )
  {
    if ( v3 > 4 )
    {
      if ( v3 <= 6 )
      {
        LOBYTE(v2) = 1;
        PopUmpoAlpcClientConnected = 0;
        PopAcquireUmpoPushLock(v2);
        v6 = PopAlpcClientPort;
        PopAlpcClientPort = 0LL;
        ExReleasePushLockEx((ULONG_PTR)&PopUmpoPushLock, 0LL);
        KeLeaveCriticalRegion();
        ZwClose(v6);
        return (unsigned int)-1073740032;
      }
      if ( v3 == 10 )
      {
        memset(v7, 0, sizeof(v7));
        v7[2] = 4096LL;
        v4 = ZwAlpcAcceptConnectPort((__int64)&PopAlpcClientPort, PopAlpcServerPort);
        if ( v4 < 0 )
        {
          ZwAlpcAcceptConnectPort((__int64)&PopAlpcClientPort, PopAlpcServerPort);
          return (unsigned int)v4;
        }
        PopUmpoAlpcClientConnected = 1;
      }
    }
    return 0;
  }
  if ( (v2 & 0x2000) != 0 )
  {
LABEL_15:
    ZwAlpcCancelMessage(PopAlpcServerPort, 0LL);
    return 0;
  }
  v4 = PopUmpoProcessPowerMessage(a1 + 40);
  if ( v4 >= 0 )
    return 0;
  return (unsigned int)v4;
}
