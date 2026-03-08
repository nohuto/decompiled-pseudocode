/*
 * XREFs of ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0094570
 * Callers:
 *     xxxDesktopThread @ 0x1C0093DC0 (xxxDesktopThread.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00200C4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     xxxDispatchMessage @ 0x1C0038064 (xxxDispatchMessage.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00929C4 (xxxCleanupMotherDesktopWindow.c)
 *     xxxInternalGetMessage @ 0x1C00946B0 (xxxInternalGetMessage.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0094CDC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 */

__int64 __fastcall xxxHandleDesktopMessages(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  char v4; // bl
  int v6; // eax
  __int128 v7; // [rsp+50h] [rbp-38h] BYREF
  __int128 v8; // [rsp+60h] [rbp-28h]
  __int128 v9; // [rsp+70h] [rbp-18h]

  v7 = 0LL;
  v4 = 1;
  v8 = 0LL;
  v9 = 0LL;
  while ( 1 )
  {
    if ( !(unsigned int)xxxInternalGetMessage((unsigned int)&v7, 0, 0, 0, 1, 0) )
      return 1LL;
    if ( a2 == (struct tagTERMINAL *)&gTermNOIO )
    {
      v6 = DWORD2(v7);
      if ( DWORD2(v7) != 18 )
        goto LABEL_6;
      xxxCleanupMotherDesktopWindow((__int64)a2);
    }
    v6 = DWORD2(v7);
    if ( DWORD2(v7) == 18 && *((_DWORD *)a1 + 226) <= 1u )
      break;
LABEL_6:
    if ( v6 == 796 )
    {
      if ( (_QWORD)v8 == 2LL )
        DestroyPendingDesktops(a1, a2);
    }
    else
    {
      xxxDispatchMessage((__int64 *)&v7);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      8u,
      0x15u,
      (__int64)&WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids,
      *((_DWORD *)a1 + 226));
  return 0LL;
}
