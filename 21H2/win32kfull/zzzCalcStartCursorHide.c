/*
 * XREFs of zzzCalcStartCursorHide @ 0x1C0073330
 * Callers:
 *     zzzWakeInputIdle @ 0x1C00534E4 (zzzWakeInputIdle.c)
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     _lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_::operator() @ 0x1C00764F8 (_lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_--operator().c)
 *     xxxGetInputEvent @ 0x1C00A5800 (xxxGetInputEvent.c)
 *     zzzShowStartGlass @ 0x1C01D9FDC (zzzShowStartGlass.c)
 * Callees:
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001F1E4 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C00734A0 (zzzUpdateCursorImage.c)
 */

__int64 __fastcall zzzCalcStartCursorHide(__int64 a1, __int64 a2)
{
  int v3; // ebp
  unsigned __int64 v4; // rsi
  struct _W32PROCESS **v5; // r8
  struct _W32PROCESS *v6; // rcx
  _DWORD *v8; // r10
  unsigned int v9; // r9d
  struct _W32PROCESS **v10; // r11
  struct _KPROCESS *v11; // rbx
  bool v12; // bl
  struct _W32PROCESS *i; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    v11 = *(struct _KPROCESS **)a1;
    AutoSharedPushLock::AutoSharedPushLock(
      (AutoSharedPushLock *)&v14,
      (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
    v12 = UmfdHostLifeTimeManager::s_UmfdHostProcess == v11;
    if ( v14 )
    {
      GreReleasePushLockShared(v14);
      KeLeaveCriticalRegion();
    }
    if ( v12 )
      __debugbreak();
    if ( (*(_DWORD *)(a1 + 12) & 4) == 0 )
    {
      for ( i = gpwpCalcFirst; i; i = (struct _W32PROCESS *)*((_QWORD *)i + 4) )
      {
        if ( i == (struct _W32PROCESS *)a1 )
          goto LABEL_24;
      }
      if ( a1 )
      {
        *(_QWORD *)(a1 + 32) = gpwpCalcFirst;
        gpwpCalcFirst = (struct _W32PROCESS *)a1;
      }
    }
LABEL_24:
    *(_DWORD *)(a1 + 12) |= 4u;
    *(_DWORD *)(a1 + 24) = v4 + v3;
  }
  HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) = 0;
  v5 = &gpwpCalcFirst;
  v6 = gpwpCalcFirst;
  if ( gpwpCalcFirst )
  {
    while ( 1 )
    {
      v8 = (_DWORD *)((char *)v6 + 12);
      a2 = *((unsigned int *)v6 + 3);
      if ( (*((_DWORD *)v6 + 3) & 6) != 4 )
        break;
      v9 = *((_DWORD *)v6 + 6);
      if ( HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) < v9 )
        HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) = *((_DWORD *)v6 + 6);
      v10 = (struct _W32PROCESS **)((char *)v6 + 32);
      v6 = (struct _W32PROCESS *)*((_QWORD *)v6 + 4);
      if ( (int)(v4 - v9) > 0 )
      {
        a2 = (unsigned int)a2 & 0xFFFFFFFB;
        *v8 = a2;
        goto LABEL_11;
      }
      v5 = v10;
LABEL_12:
      if ( !v6 )
      {
        if ( HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) > (unsigned int)v4 )
          return zzzUpdateCursorImage(v6, a2, v5);
        goto LABEL_3;
      }
    }
    v6 = (struct _W32PROCESS *)*((_QWORD *)v6 + 4);
LABEL_11:
    *v5 = v6;
    goto LABEL_12;
  }
LABEL_3:
  HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) = 0;
  return zzzUpdateCursorImage(v6, a2, v5);
}
