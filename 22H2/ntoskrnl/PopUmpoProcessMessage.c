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

__int64 __fastcall PopUmpoProcessMessage(PPORT_MESSAGE ConnectionRequest, PALPC_CONTEXT_ATTR MessageContext)
{
  __int64 Type; // rcx
  unsigned int v4; // eax
  NTSTATUS v5; // ebx
  HANDLE v7; // rbx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-49h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+80h] [rbp-19h] BYREF

  Type = (unsigned __int16)ConnectionRequest->u2.s2.Type;
  *(&ObjectAttributes.Length + 1) = 0;
  v4 = Type & 0xFFFF00FF;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( (Type & 0xFFFF00FF) == 1 )
    goto LABEL_15;
  if ( v4 <= 1 )
    return 0;
  if ( v4 > 3 )
  {
    if ( v4 > 4 )
    {
      if ( v4 <= 6 )
      {
        LOBYTE(Type) = 1;
        PopUmpoAlpcClientConnected = 0;
        PopAcquireUmpoPushLock(Type);
        v7 = PopAlpcClientPort;
        PopAlpcClientPort = 0LL;
        ExReleasePushLockEx((ULONG_PTR)&PopUmpoPushLock, 0LL);
        KeLeaveCriticalRegion();
        ZwClose(v7);
        return (unsigned int)-1073740032;
      }
      if ( v4 == 10 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        memset(&PortAttributes, 0, sizeof(PortAttributes));
        PortAttributes.MaxMessageLength = 4096LL;
        v5 = ZwAlpcAcceptConnectPort(
               &PopAlpcClientPort,
               PopAlpcServerPort,
               0,
               &ObjectAttributes,
               &PortAttributes,
               0LL,
               ConnectionRequest,
               0LL,
               PopUmpoAlpcClientConnected == 0);
        if ( v5 < 0 )
        {
          ZwAlpcAcceptConnectPort(
            &PopAlpcClientPort,
            PopAlpcServerPort,
            0,
            &ObjectAttributes,
            &PortAttributes,
            0LL,
            ConnectionRequest,
            0LL,
            0);
          return (unsigned int)v5;
        }
        PopUmpoAlpcClientConnected = 1;
      }
    }
    return 0;
  }
  if ( (Type & 0x2000) != 0 )
  {
LABEL_15:
    ZwAlpcCancelMessage(PopAlpcServerPort, 0, MessageContext);
    return 0;
  }
  v5 = PopUmpoProcessPowerMessage(&ConnectionRequest[1], MessageContext);
  if ( v5 >= 0 )
    return 0;
  return (unsigned int)v5;
}
