/*
 * XREFs of ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00A4A14
 * Callers:
 *     xxxDesktopThread @ 0x1C00A4360 (xxxDesktopThread.c)
 * Callees:
 *     xxxDispatchMessage @ 0x1C00429F0 (xxxDispatchMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0099B78 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxInternalGetMessage @ 0x1C00A4B4C (xxxInternalGetMessage.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C01226E8 (xxxCleanupMotherDesktopWindow.c)
 */

__int64 __fastcall xxxHandleDesktopMessages(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // r8
  int v8; // eax
  unsigned int v9; // edx
  __int128 v10; // [rsp+50h] [rbp-38h] BYREF
  __int128 v11; // [rsp+60h] [rbp-28h]
  __int128 v12; // [rsp+70h] [rbp-18h]

  v10 = 0LL;
  v4 = 1;
  v11 = 0LL;
  v12 = 0LL;
  while ( 1 )
  {
    if ( !(unsigned int)xxxInternalGetMessage((unsigned int)&v10, 0, 0, 0, 1, 0) )
      return 1LL;
    if ( a2 == (struct tagTERMINAL *)&gTermNOIO )
    {
      v8 = DWORD2(v10);
      if ( DWORD2(v10) != 18 )
        goto LABEL_6;
      xxxCleanupMotherDesktopWindow(a2, v5, v6);
    }
    v8 = DWORD2(v10);
    if ( DWORD2(v10) == 18 )
    {
      v9 = *((_DWORD *)a1 + 224);
      if ( v9 <= 1 )
        break;
    }
LABEL_6:
    if ( v8 == 796 )
    {
      if ( (_QWORD)v11 == 2LL )
        DestroyPendingDesktops(a1, a2);
    }
    else
    {
      xxxDispatchMessage((__int64)&v10);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = v4;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v6,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      8,
      21,
      (__int64)&WPP_d78c2f93cefb39adad771009d44421f9_Traceguids,
      *((_DWORD *)a1 + 224));
  }
  return 0LL;
}
