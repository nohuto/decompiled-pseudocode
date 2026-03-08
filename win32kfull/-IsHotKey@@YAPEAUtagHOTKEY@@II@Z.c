/*
 * XREFs of ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1C00989D0
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0097FCC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?IsUninterceptable@@YAPEAUtagHOTKEY@@PEAIE@Z @ 0x1C0098C20 (-IsUninterceptable@@YAPEAUtagHOTKEY@@PEAIE@Z.c)
 *     EditionIsHotKey @ 0x1C01C1530 (EditionIsHotKey.c)
 * Callees:
 *     ?HKGetHashHead@@YAPEAUtagHOTKEY@@I@Z @ 0x1C0098A7C (-HKGetHashHead@@YAPEAUtagHOTKEY@@I@Z.c)
 *     GetDesktopView @ 0x1C0099840 (GetDesktopView.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDqq @ 0x1C01C1550 (WPP_RECORDER_AND_TRACE_SF_DDqq.c)
 */

struct tagHOTKEY *__fastcall IsHotKey(int a1, unsigned int a2)
{
  struct tagHOTKEY *v4; // rbx
  int v5; // esi
  __int64 v7; // rbp
  int v8; // edx
  int v9; // r8d
  int v10; // [rsp+20h] [rbp-48h]

  v4 = HKGetHashHead(a2);
  if ( !v4 )
    return v4;
  while ( 1 )
  {
    v5 = *((unsigned __int16 *)v4 + 16);
    if ( v5 == a1 && *((_DWORD *)v4 + 9) == a2 && !_bittest16((const signed __int16 *)v4 + 17, 8u) )
      break;
    v4 = (struct tagHOTKEY *)*((_QWORD *)v4 + 6);
    if ( !v4 )
      return v4;
  }
  if ( (*(_DWORD *)(*(_QWORD *)v4 + 488LL) & 0xC) != 0 )
    return v4;
  v7 = *(_QWORD *)(*(_QWORD *)v4 + 424LL);
  if ( GetDesktopView(v7) )
  {
    if ( (v5 & 0xB) == 0
      && gpqForeground
      && a2 != 7
      && a2 - 173 > 6
      && !(unsigned __int8)CheckAccess(v7 + 864, gpqForeground + 432LL) )
    {
      EtwTraceUIPIInputError(*(_QWORD *)v4, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 432LL), 7);
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_DDqq(WPP_GLOBAL_Control->AttachedDevice, v8, v9, gpqForeground, v10);
      }
      return 0LL;
    }
    return v4;
  }
  return 0LL;
}
