/*
 * XREFs of ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1803D8360
 * Callers:
 *     ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x1803C6080 (-WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x1803D7644 (-GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundati.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1803DA86C (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleWorkAreaChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        __m128i *a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  int updated; // eax
  unsigned int v7; // ebx
  unsigned __int64 v9; // xmm1_8
  unsigned __int64 v10; // r8
  int v11; // eax
  HMONITOR CurrentMonitorWithRect; // rax
  HMONITOR v13; // rbx
  __m128i v14; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_DWORD *)a3 = 0;
  updated = UpdateScalingInfoCache();
  v7 = updated;
  if ( updated >= 0 )
  {
    v9 = _mm_srli_si128(*a2, 8).m128i_u64[0];
    v10 = HIDWORD(a2->m128i_i64[0]);
    v11 = v9 - a2->m128i_i64[0] + 1;
    *(float *)v14.m128i_i32 = (float)(int)a2->m128i_i64[0];
    *(float *)&v14.m128i_i32[1] = (float)(int)v10;
    *(float *)&v14.m128i_i32[2] = (float)v11;
    *(float *)&v14.m128i_i32[3] = (float)(HIDWORD(v9) - (int)v10 + 1);
    CurrentMonitorWithRect = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(&v14);
    v13 = CurrentMonitorWithRect;
    if ( CurrentMonitorWithRect )
    {
      *((_QWORD *)this + 27) = CurrentMonitorWithRect;
      KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 216));
      if ( v13 == *((HMONITOR *)this + 39) )
        KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 312));
      if ( v13 == *((HMONITOR *)this + 33) )
        KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 264));
    }
    *(_DWORD *)a3 = 3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x242,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)updated);
    return v7;
  }
}
