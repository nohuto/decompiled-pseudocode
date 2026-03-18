/*
 * XREFs of ?xxxUserNotifyProcessCreate@@YAJKW4PROCESS_CREATE_HINT@@@Z @ 0x1C00A0414
 * Callers:
 *     NtUserNotifyProcessCreate @ 0x1C00A03A0 (NtUserNotifyProcessCreate.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x1C003A8B0 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C004C704 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     LockProcessByClientId @ 0x1C004FEE0 (LockProcessByClientId.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z @ 0x1C0118748 (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxUserNotifyProcessCreate(int a1, char a2)
{
  void *v2; // rbp
  int v4; // eax
  PVOID v5; // rcx
  unsigned int v6; // esi
  char v7; // di
  int inited; // edx
  char v10; // di
  PVOID Object; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+58h] [rbp-20h]

  v2 = (void *)a1;
  if ( (a2 & 0xC) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 307LL);
  if ( (a2 & 3) == 0 )
    return 0LL;
  v4 = LockProcessByClientId(v2, (PEPROCESS *)&Object);
  v5 = Object;
  v6 = v4;
  v12 = v4;
  if ( Object )
  {
    v7 = 1;
    inited = xxxSetProcessInitState(Object, (unsigned int)((a2 & 1) == 0) + 1);
    if ( inited < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v7 = 0;
      }
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v7,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          3u,
          2u,
          0xEu,
          (__int64)&WPP_da10ed9f41f835a692699b91a3623186_Traceguids,
          Object,
          inited);
    }
    if ( Object )
      ObfDereferenceObject(Object);
    return 0LL;
  }
  v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_AND_TRACE_SF_DD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      3u,
      2u,
      0xDu,
      (__int64)&WPP_da10ed9f41f835a692699b91a3623186_Traceguids,
      (_DWORD)v2,
      v4);
    v5 = Object;
    v6 = v12;
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  return v6;
}
