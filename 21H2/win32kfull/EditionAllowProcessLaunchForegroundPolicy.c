/*
 * XREFs of EditionAllowProcessLaunchForegroundPolicy @ 0x1C0117990
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C007BAF4 (WPP_RECORDER_AND_TRACE_SF_s.c)
 */

__int64 __fastcall EditionAllowProcessLaunchForegroundPolicy(int a1, __int64 a2, __int64 a3, int a4)
{
  const struct tagTHREADINFO *ThreadWin32Thread; // rax
  int v6; // r8d
  char v7; // r10
  unsigned __int8 v8; // bl
  const char *v9; // rax
  int v10; // edx
  bool v12; // r10
  int v13; // edx

  if ( (unsigned int)(a1 - 1) > 2 )
  {
    v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 23;
      LOBYTE(v13) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        a4,
        4,
        2,
        23,
        (__int64)&WPP_f102d90fc8853948a2c0f4157c8d628a_Traceguids);
    }
    return 0LL;
  }
  else
  {
    ThreadWin32Thread = (const struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v7 = 1;
    if ( ThreadWin32Thread && (a1 == 1 || IAMThreadAccessGranted(ThreadWin32Thread)) )
      v8 = v7;
    else
      v8 = 0;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v7 = 0;
    }
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = "Allow";
      if ( !v8 )
        v9 = "Deny";
      v10 = 24;
      LOBYTE(v10) = v7;
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_s(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        2,
        24,
        (__int64)&WPP_f102d90fc8853948a2c0f4157c8d628a_Traceguids,
        (__int64)v9);
    }
    return v8;
  }
}
