__int64 __fastcall RemoteRedrawRectangle(int *a1)
{
  bool v2; // dl
  __int64 result; // rax
  struct tagWND *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      12,
      4,
      9,
      12,
      (__int64)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids);
  result = gspdeskShouldBeForeground;
  if ( !gspdeskShouldBeForeground )
  {
    result = GetThreadDesktopWindow(0LL);
    v4 = (struct tagWND *)result;
    if ( result )
    {
      v8 = 0LL;
      v9 = 0LL;
      ThreadLock(result, &v8);
      vDrvInvalidateRect(*(_QWORD *)(gpDispInfo + 40LL), a1);
      xxxRedrawWindow(v4, a1, 0LL, 645);
      return ThreadUnlock1(v6, v5, v7);
    }
  }
  return result;
}
