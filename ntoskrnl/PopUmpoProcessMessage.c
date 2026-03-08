/*
 * XREFs of PopUmpoProcessMessage @ 0x14073B3C8
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1402BD1D0 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x14073B298 (PopUmpoProcessMessages.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x1404131F0 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x140413210 (ZwAlpcCancelMessage.c)
 *     ZwAlpcOpenSenderProcess @ 0x1404133F0 (ZwAlpcOpenSenderProcess.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopUmpoProcessPowerMessage @ 0x14073B5A4 (PopUmpoProcessPowerMessage.c)
 *     PopAcquireUmpoPushLock @ 0x14073C2DC (PopAcquireUmpoPushLock.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall PopUmpoProcessMessage(__int64 a1)
{
  __int16 v1; // r8
  int v2; // ebx
  NTSTATUS v4; // eax
  PVOID v5; // rcx
  HANDLE v6; // rbx
  HANDLE Handle; // [rsp+50h] [rbp-59h] BYREF
  PVOID Object; // [rsp+58h] [rbp-51h] BYREF
  int v9; // [rsp+60h] [rbp-49h]
  int v10; // [rsp+64h] [rbp-45h]
  __int64 v11; // [rsp+68h] [rbp-41h]
  __int64 v12; // [rsp+70h] [rbp-39h]
  int v13; // [rsp+78h] [rbp-31h]
  int v14; // [rsp+7Ch] [rbp-2Dh]
  __int128 v15; // [rsp+80h] [rbp-29h]
  _QWORD v16[9]; // [rsp+90h] [rbp-19h] BYREF

  v1 = *(_WORD *)(a1 + 4);
  v10 = 0;
  v14 = 0;
  if ( (unsigned __int8)v1 == 1 )
    goto LABEL_21;
  if ( (unsigned __int8)v1 != 2 && (unsigned __int8)v1 != 3 )
  {
    if ( (unsigned __int8)v1 == 5 || (unsigned __int8)v1 == 6 )
    {
      PopUmpoAlpcClientConnected = 0;
      PopUmpoSyncEventInProgress = 0;
      v5 = PopConnectedUmpoProcess;
      if ( PopConnectedUmpoProcess )
      {
        ObfDereferenceObjectWithTag(PopConnectedUmpoProcess, 0x746C6644u);
        PopConnectedUmpoProcess = 0LL;
      }
      LOBYTE(v5) = 1;
      PopAcquireUmpoPushLock(v5);
      v6 = PopAlpcClientPort;
      PopAlpcClientPort = 0LL;
      ExReleasePushLockEx((__int64 *)&PopUmpoPushLock, 0LL);
      KeLeaveCriticalRegion();
      ZwClose(v6);
      return (unsigned int)-1073740032;
    }
    else
    {
      if ( (unsigned __int8)v1 != 10 )
        return 0;
      v9 = 48;
      v11 = 0LL;
      v13 = 512;
      v12 = 0LL;
      v15 = 0LL;
      memset(v16, 0, sizeof(v16));
      v16[2] = 4096LL;
      v2 = ZwAlpcAcceptConnectPort((__int64)&PopAlpcClientPort, PopAlpcServerPort);
      if ( v2 < 0 )
      {
        ZwAlpcAcceptConnectPort((__int64)&PopAlpcClientPort, PopAlpcServerPort);
        return (unsigned int)v2;
      }
      PopUmpoAlpcClientConnected = 1;
      v9 = 48;
      v11 = 0LL;
      v13 = 512;
      v12 = 0LL;
      v15 = 0LL;
      Handle = 0LL;
      v2 = ZwAlpcOpenSenderProcess((__int64)&Handle, PopAlpcServerPort);
      if ( v2 >= 0 && Handle )
      {
        Object = 0LL;
        v4 = ObReferenceObjectByHandle(Handle, 0x10000000u, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
        PopConnectedUmpoProcess = Object;
        if ( v4 < 0 )
          PopConnectedUmpoProcess = 0LL;
        ZwClose(Handle);
        return 0;
      }
    }
    return (unsigned int)v2;
  }
  if ( (v1 & 0x2000) != 0 )
  {
LABEL_21:
    ZwAlpcCancelMessage(PopAlpcServerPort, 0LL);
    return 0;
  }
  v2 = PopUmpoProcessPowerMessage(a1 + 40);
  if ( v2 >= 0 )
    return 0;
  return (unsigned int)v2;
}
