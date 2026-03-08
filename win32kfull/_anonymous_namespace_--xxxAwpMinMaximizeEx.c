/*
 * XREFs of _anonymous_namespace_::xxxAwpMinMaximizeEx @ 0x1C023F520
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00FBCB8 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023E6EC (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall anonymous_namespace_::xxxAwpMinMaximizeEx(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  int v5; // ebx
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rsi
  int v11; // r8d
  char v12; // dl
  char v13; // r8
  int v14; // esi

  v5 = a3;
  if ( a4 )
  {
    v8 = *(_QWORD *)(a4 + 16);
    if ( v8 )
    {
      if ( (a3 & 0x20) != 0 )
      {
        v10 = HMValidateHandleNoSecure(v8, 1);
        if ( v10 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
            || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            v12 = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (v13 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            v13 = 0;
          }
          if ( v12 || v13 )
            WPP_RECORDER_AND_TRACE_SF_q(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v12,
              v13,
              (__int64)WPP_GLOBAL_Control,
              5u,
              0x19u,
              0xAu,
              (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
              *(_QWORD *)(a4 + 16));
          v14 = *(_BYTE *)(*(_QWORD *)(v10 + 40) + 24LL) & 8;
          if ( v14 != (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 24LL) & 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 34);
          if ( !v14 )
          {
            v5 |= 0x400u;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
              || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
            {
              LOBYTE(v9) = 0;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              || (LOBYTE(v11) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
            {
              LOBYTE(v11) = 0;
            }
            if ( (_BYTE)v9 || (_BYTE)v11 )
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v9,
                v11,
                (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
                5,
                25,
                11,
                (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
          }
        }
        else
        {
          *(_QWORD *)(a4 + 16) = 0LL;
        }
      }
    }
  }
  xxxMinMaximizeEx(a1, a2, v5 | 1, a4);
}
