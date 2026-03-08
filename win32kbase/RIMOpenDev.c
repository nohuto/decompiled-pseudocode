/*
 * XREFs of RIMOpenDev @ 0x1C0089058
 * Callers:
 *     rimOnPnpArrived @ 0x1C00889C0 (rimOnPnpArrived.c)
 * Callees:
 *     RIMCloseDev @ 0x1C00308E4 (RIMCloseDev.c)
 *     RIMApiSetIsRemoteConnection @ 0x1C00364A8 (RIMApiSetIsRemoteConnection.c)
 *     RIMIsRunningOnDesktop @ 0x1C007B004 (RIMIsRunningOnDesktop.c)
 *     RIMOpenDevWorker @ 0x1C0089188 (RIMOpenDevWorker.c)
 *     Feature_RIMUserCritOpt__private_ReportDeviceUsage @ 0x1C00DF02C (Feature_RIMUserCritOpt__private_ReportDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimIsCrossSessionDevice @ 0x1C019EDB8 (rimIsCrossSessionDevice.c)
 */

__int64 __fastcall RIMOpenDev(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  NTSTATUS v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  __int128 v23; // [rsp+48h] [rbp-40h]

  Feature_RIMUserCritOpt__private_ReportDeviceUsage();
  SGDGetUserSessionState(v9, v8, v10, v11);
  if ( *(_BYTE *)(a1 + 48) == 2 && RIMApiSetIsRemoteConnection(v13, v12, v14, v15) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1236LL);
  *(_DWORD *)(a1 + 184) |= 0x100u;
  v23 = 0LL;
  Feature_RIMUserCritOpt__private_ReportDeviceUsage();
  v16 = RIMOpenDevWorker(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 288) = v16;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_OWORD *)(a1 + 256) = v23;
  if ( v16 >= 0 )
  {
    Object = 0LL;
    v16 = ObReferenceObjectByHandle(0LL, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    *(_QWORD *)(a1 + 232) = Object;
    if ( v16 >= 0 && !RIMIsRunningOnDesktop(v18, v17, v19, v20) && (unsigned int)rimIsCrossSessionDevice(a1) )
    {
      RIMCloseDev(a1);
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)v16;
}
