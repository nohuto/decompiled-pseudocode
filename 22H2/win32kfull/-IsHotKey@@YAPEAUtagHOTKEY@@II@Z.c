/*
 * XREFs of ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1C0050618
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00500BC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?IsUninterceptable@@YAPEAUtagHOTKEY@@PEAIE@Z @ 0x1C0050844 (-IsUninterceptable@@YAPEAUtagHOTKEY@@PEAIE@Z.c)
 *     EditionIsHotKey @ 0x1C01C0370 (EditionIsHotKey.c)
 * Callees:
 *     GetDesktopView @ 0x1C004FEC0 (GetDesktopView.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDqq @ 0x1C01C0390 (WPP_RECORDER_AND_TRACE_SF_DDqq.c)
 */

struct tagHOTKEY *__fastcall IsHotKey(__int64 a1, int a2)
{
  int v3; // r14d
  _QWORD *i; // rbx
  int v5; // esi
  __int64 v6; // rbp
  int v8; // edx
  int v9; // r8d

  v3 = a1;
  for ( i = *(_QWORD **)(SGDGetUserSessionState(a1) + 8LL * (a2 & 0x7F) + 12736); ; i = (_QWORD *)i[6] )
  {
    if ( !i )
      return (struct tagHOTKEY *)i;
    v5 = *((unsigned __int16 *)i + 16);
    if ( v5 == v3 && *((_DWORD *)i + 9) == a2 && !_bittest16((const signed __int16 *)i + 17, 8u) )
      break;
  }
  if ( (*(_DWORD *)(*i + 488LL) & 0xC) != 0 )
    return (struct tagHOTKEY *)i;
  v6 = *(_QWORD *)(*i + 424LL);
  if ( GetDesktopView(v6, grpdeskRitInput) )
  {
    if ( (v5 & 0xB) == 0
      && gpqForeground
      && a2 != 7
      && (unsigned int)(a2 - 173) > 6
      && !(unsigned __int8)CheckAccess(v6 + 888, gpqForeground + 432LL) )
    {
      EtwTraceUIPIInputError(*i, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 432LL));
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_DDqq(WPP_GLOBAL_Control->AttachedDevice, v8, v9, gpqForeground, 7);
      }
      return 0LL;
    }
    return (struct tagHOTKEY *)i;
  }
  return 0LL;
}
