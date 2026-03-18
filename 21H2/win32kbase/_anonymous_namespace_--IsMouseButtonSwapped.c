/*
 * XREFs of _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C00429D4
 * Callers:
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C0042918 (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     ?ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA?AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@@AEBVMouseInputDataEx@1@@Z @ 0x1C01F9950 (-ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA-AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_sscc @ 0x1C01FCC1C (WPP_RECORDER_AND_TRACE_SF_sscc.c)
 */

bool __fastcall anonymous_namespace_::IsMouseButtonSwapped(int a1, unsigned __int8 a2)
{
  int v2; // esi
  int v3; // r8d
  int v4; // ebx
  bool v5; // dl
  char v7; // al
  int v8; // ecx
  char v9; // al
  bool v10; // dl
  const char *v11; // r9

  v2 = a2;
  v3 = a1;
  if ( (unsigned int)(a1 - 1) > 1 )
    return 0;
  v4 = *((_DWORD *)gpsi + 497);
  v5 = v4 != 0;
  if ( gbSwapMouseButtonsDirty )
  {
    v7 = 16;
    v8 = 0;
    if ( v3 != 1 )
      v7 = 4;
    LOBYTE(v8) = (unsigned __int8)(v7 & gafAsyncKeyState) != 0;
    if ( (v2 ^ 1) == v8 )
    {
      v9 = 4;
      if ( v3 != 1 )
        v9 = 16;
      if ( v2 == ((unsigned __int8)(v9 & gafAsyncKeyState) != 0) )
      {
        v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = "Up";
          if ( !(_BYTE)v2 )
            v11 = "Down";
          LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_sscc(WPP_GLOBAL_Control->AttachedDevice, v10, v3, (_DWORD)v11);
        }
        v5 = v4 == 0;
      }
    }
    gbSwapMouseButtonsDirty = 0;
  }
  return v5;
}
