/*
 * XREFs of zzzCalcStartCursorHide @ 0x1C00612C0
 * Callers:
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z @ 0x1C003E988 (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z.c)
 *     xxxGetInputEvent @ 0x1C0047670 (xxxGetInputEvent.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C006D360 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     zzzWakeInputIdle @ 0x1C00944D0 (zzzWakeInputIdle.c)
 *     zzzShowStartGlass @ 0x1C01B48F8 (zzzShowStartGlass.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0061E20 (zzzUpdateCursorImage.c)
 *     ?IsSessionGlobalsAreaAllocated@Umfd@Gre@@YA_NXZ @ 0x1C009376C (-IsSessionGlobalsAreaAllocated@Umfd@Gre@@YA_NXZ.c)
 *     ?IsProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NPEAU_EPROCESS@@@Z @ 0x1C0093790 (-IsProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall zzzCalcStartCursorHide(__int64 a1, __int64 a2)
{
  int v3; // ebp
  unsigned __int64 v4; // rdi
  struct _W32PROCESS **v5; // r8
  struct _W32PROCESS *v6; // rcx
  _DWORD *v7; // r11
  unsigned int v8; // r9d
  struct _W32PROCESS **v9; // r10
  struct _EPROCESS *v11; // rsi
  struct _W32PROCESS *i; // rax

  v3 = a2;
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    v11 = *(struct _EPROCESS **)a1;
    if ( Gre::Umfd::IsSessionGlobalsAreaAllocated((Gre::Umfd *)0xFFFFF78000000004LL)
      && UmfdHostLifeTimeManager::IsProcessUmfdHost(v11) )
    {
      __debugbreak();
    }
    if ( (*(_DWORD *)(a1 + 12) & 4) == 0 )
    {
      for ( i = gpwpCalcFirst; i; i = (struct _W32PROCESS *)*((_QWORD *)i + 4) )
      {
        if ( i == (struct _W32PROCESS *)a1 )
          goto LABEL_21;
      }
      *(_QWORD *)(a1 + 32) = gpwpCalcFirst;
      gpwpCalcFirst = (struct _W32PROCESS *)a1;
    }
LABEL_21:
    *(_DWORD *)(a1 + 12) |= 4u;
    *(_DWORD *)(a1 + 24) = v4 + v3;
  }
  HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 0;
  v5 = &gpwpCalcFirst;
  v6 = gpwpCalcFirst;
  if ( !gpwpCalcFirst )
    goto LABEL_12;
  do
  {
    v7 = (_DWORD *)((char *)v6 + 12);
    a2 = *((unsigned int *)v6 + 3);
    if ( (*((_DWORD *)v6 + 3) & 6) == 4 )
    {
      v8 = *((_DWORD *)v6 + 6);
      if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) < v8 )
        HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = *((_DWORD *)v6 + 6);
      v9 = (struct _W32PROCESS **)((char *)v6 + 32);
      v6 = (struct _W32PROCESS *)*((_QWORD *)v6 + 4);
      if ( (int)(v4 - v8) <= 0 )
      {
        v5 = v9;
        continue;
      }
      a2 = (unsigned int)a2 & 0xFFFFFFFB;
      *v7 = a2;
    }
    else
    {
      v6 = (struct _W32PROCESS *)*((_QWORD *)v6 + 4);
    }
    *v5 = v6;
  }
  while ( v6 );
  if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) <= (unsigned int)v4 )
LABEL_12:
    HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 0;
  return zzzUpdateCursorImage(v6, a2, v5);
}
