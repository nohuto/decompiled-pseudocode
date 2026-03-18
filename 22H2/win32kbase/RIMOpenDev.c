/*
 * XREFs of RIMOpenDev @ 0x1C007A138
 * Callers:
 *     rimOnPnpArrived @ 0x1C0076A78 (rimOnPnpArrived.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1C004FEC0 (RIMIsRunningOnDesktop.c)
 *     RIMApiSetIsRemoteConnection @ 0x1C0075764 (RIMApiSetIsRemoteConnection.c)
 *     RIMCloseDev @ 0x1C007AB28 (RIMCloseDev.c)
 *     RIMOpenDevWorker @ 0x1C00BEDB0 (RIMOpenDevWorker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimIsCrossSessionDevice @ 0x1C0171F08 (rimIsCrossSessionDevice.c)
 */

__int64 __fastcall RIMOpenDev(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  __int128 v19; // [rsp+48h] [rbp-40h]

  v4 = a4;
  v5 = a3;
  SGDGetUserSessionState(a1, a2, a3, a4);
  if ( *(_BYTE *)(a1 + 48) == 2 && RIMApiSetIsRemoteConnection(v9, v8, v10, v11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1201LL);
  *(_DWORD *)(a1 + 184) |= 0x100u;
  v19 = 0LL;
  v12 = RIMOpenDevWorker(a1, a2, v5, v4);
  *(_DWORD *)(a1 + 288) = v12;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_OWORD *)(a1 + 256) = v19;
  if ( v12 >= 0 )
  {
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(0LL, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    *(_QWORD *)(a1 + 232) = Object;
    if ( v12 >= 0 && !RIMIsRunningOnDesktop(v14, v13, v15, v16) && (unsigned int)rimIsCrossSessionDevice(a1) )
    {
      RIMCloseDev(a1);
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)v12;
}
