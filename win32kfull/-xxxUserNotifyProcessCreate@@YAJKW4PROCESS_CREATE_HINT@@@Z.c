/*
 * XREFs of ?xxxUserNotifyProcessCreate@@YAJKW4PROCESS_CREATE_HINT@@@Z @ 0x1C003ECC8
 * Callers:
 *     NtUserNotifyProcessCreate @ 0x1C003EDE0 (NtUserNotifyProcessCreate.c)
 * Callees:
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z @ 0x1C003E988 (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x1C0077B08 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     LockProcessByClientId @ 0x1C0099860 (LockProcessByClientId.c)
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C009B8A4 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxUserNotifyProcessCreate(int a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int v6; // eax
  int v7; // edx
  int v8; // r8d
  PVOID v9; // rcx
  unsigned int v10; // esi
  char v11; // di
  int inited; // edx
  int v13; // r8d
  bool v15; // di
  char v16; // [rsp+48h] [rbp-30h]
  PVOID Object; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+58h] [rbp-20h]

  v4 = a1;
  if ( (a2 & 0xC) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 314LL);
  if ( (a2 & 3) == 0 )
    return 0LL;
  v6 = LockProcessByClientId(v4, &Object, a3, a4);
  v9 = Object;
  v10 = v6;
  v18 = v6;
  if ( Object )
  {
    v11 = 1;
    inited = xxxSetProcessInitState((__int64)Object, (unsigned int)((a2 & 1) == 0) + 1);
    if ( inited < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v11 = 0;
      }
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = inited;
        LOBYTE(inited) = v11;
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qD(
          WPP_GLOBAL_Control->AttachedDevice,
          inited,
          v13,
          (_DWORD)gFullLog,
          3,
          2,
          14,
          (__int64)&WPP_b2df51b585c137d44ad42ff4c9684e7b_Traceguids,
          (char)Object,
          v16);
      }
    }
    if ( Object )
      ObfDereferenceObject(Object);
    return 0LL;
  }
  v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = v15;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_DD(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      v8,
      (_DWORD)gFullLog,
      3,
      2,
      13,
      (__int64)&WPP_b2df51b585c137d44ad42ff4c9684e7b_Traceguids,
      v4,
      v6);
    v9 = Object;
    v10 = v18;
  }
  if ( v9 )
    ObfDereferenceObject(v9);
  return v10;
}
