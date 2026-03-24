/*
 * XREFs of ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D9B74
 * Callers:
 *     xxxDesktopThread @ 0x1C00D9400 (xxxDesktopThread.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C003AC94 (WPP_RECORDER_SF_d.c)
 *     xxxDispatchMessage @ 0x1C006ADB4 (xxxDispatchMessage.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00D6A54 (xxxCleanupMotherDesktopWindow.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D84E8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxInternalGetMessage @ 0x1C00D9C60 (xxxInternalGetMessage.c)
 */

__int64 __fastcall xxxHandleDesktopMessages(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  int v4; // edx
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // [rsp+28h] [rbp-40h]
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h]
  __int128 v11; // [rsp+50h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  while ( 1 )
  {
    if ( !(unsigned int)xxxInternalGetMessage((unsigned int)&v9, 0, 0, 0, 1, 0) )
      return 1LL;
    if ( a2 == (struct tagTERMINAL *)&gTermNOIO )
    {
      v6 = DWORD2(v9);
      if ( DWORD2(v9) != 18 )
        goto LABEL_6;
      xxxCleanupMotherDesktopWindow((__int64)a2);
    }
    v6 = DWORD2(v9);
    if ( DWORD2(v9) == 18 )
    {
      v7 = *((_DWORD *)a1 + 224);
      if ( v7 <= 1 )
        break;
    }
LABEL_6:
    if ( v6 == 796 )
    {
      if ( (_QWORD)v10 == 2LL )
        DestroyPendingDesktops(a1, a2);
    }
    else
    {
      xxxDispatchMessage((__int64)&v9);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = *((_DWORD *)a1 + 224);
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_d(v7, v4, 8, 21, (__int64)&WPP_4cc55f0eccd63a8558931143e45fab5e_Traceguids, v8, (_QWORD)v9);
  }
  return 0LL;
}
