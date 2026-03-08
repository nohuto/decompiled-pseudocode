/*
 * XREFs of ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C75BC
 * Callers:
 *     EditionPointerActivate @ 0x1C0146940 (EditionPointerActivate.c)
 * Callees:
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C000FFD0 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C003A028 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00468F4 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsMessageOnlyWindow @ 0x1C00967C0 (IsMessageOnlyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00A11DC (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00E67A8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x1C0144B3C (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C0145150 (PhysicalToLogicalInPlacePointWithParent.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C014A6E4 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxSendPointerMessageWorker @ 0x1C01C68A8 (xxxSendPointerMessageWorker.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01C7884 (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     IsModalMenuStarted @ 0x1C01C7C18 (IsModalMenuStarted.c)
 *     xxxMNDismissIfOffMenu @ 0x1C021A3D4 (xxxMNDismissIfOffMenu.c)
 */

void __fastcall xxxPointerActivateInternal(
        struct tagWND *a1,
        __int16 a2,
        __int64 a3,
        const struct tagPOINTEREVENTINT *a4)
{
  __int64 v5; // rbx
  char v8; // r15
  __int64 v9; // r14
  __int64 TopLevelWindow; // rax
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  _QWORD *v16; // rdx
  const struct tagWND *v17; // r9
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  _QWORD v27[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v28; // [rsp+50h] [rbp-30h] BYREF
  __int64 v29; // [rsp+60h] [rbp-20h]
  __int128 v30; // [rsp+68h] [rbp-18h] BYREF
  __int64 v31; // [rsp+78h] [rbp-8h]
  struct tagPOINT v33; // [rsp+D8h] [rbp+58h] BYREF

  v5 = a3;
  v29 = 0LL;
  v28 = 0LL;
  if ( *((_DWORD *)a4 + 44) )
  {
    v8 = 1;
LABEL_3:
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL);
    if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1)
      && !(unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(a1) )
    {
      TopLevelWindow = GetTopLevelWindow((__int64)a1);
      v11 = (__int64 *)TopLevelWindow;
      if ( TopLevelWindow )
      {
        if ( a1 != *(struct tagWND **)(v9 + 128) )
        {
          ThreadLock(TopLevelWindow, &v28);
          v15 = *(_QWORD *)(v9 + 112);
          if ( v15 && (unsigned int)IsModalMenuStarted(*(_QWORD *)(v15 + 16)) )
          {
            v31 = 0LL;
            v33 = (struct tagPOINT)*((_QWORD *)a4 + 5);
            v30 = 0LL;
            v16 = *(_QWORD **)(v12 + 608);
            if ( v16 )
              v16 = (_QWORD *)*v16;
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v27, (__int64)v16);
            v17 = *(const struct tagWND **)(v9 + 112);
            if ( (*(_DWORD *)(*((_QWORD *)v17 + 5) + 288LL) & 0xF) == 2 )
            {
              if ( *(_QWORD *)v27[0]
                && *(_QWORD *)(*(_QWORD *)v27[0] + 16LL)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27[0] + 16LL) + 40LL) + 288LL) & 0xF) != 2
                && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27[0] + 16LL) + 216LL) )
              {
                PhysicalToLogicalInPlacePointWithParent(
                  *(const struct tagWND **)(*(_QWORD *)v27[0] + 16LL),
                  (int *)&v33,
                  0LL);
              }
            }
            else
            {
              PhysicalToLogicalDPIPointWithHitTest(&v33, &v33, 0LL, v17);
            }
            v22 = LOWORD(v33.x) | (LOWORD(v33.y) << 16);
            ThreadLockAlways(*(_QWORD *)(v9 + 112), &v30);
            xxxMNDismissIfOffMenu(*(_QWORD *)(v9 + 112), v22);
            ThreadUnlock1(v24, v23, v25);
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v27);
            v5 = a3;
          }
          if ( !v8 )
          {
            v26 = xxxSendPointerMessageWorker((__int64)a1, 587LL, v5, *v11, 0LL, 177);
            if ( v26 == 1 || v26 != 3 && xxxQueryLegacyActivation(a1, (struct tagWND *)v11, a2, a4) == 1 )
              xxxActivateWindowWithOptions((struct tagWND *)v11, 3LL, 49LL, 1);
          }
          ThreadUnlock1(v13, v12, v14);
        }
      }
    }
    return;
  }
  v8 = 0;
  if ( !(unsigned int)IsIndependentInputWindow(a1) )
    goto LABEL_3;
  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
  v19 = (__int64)CompositionInputWindowUIOwner;
  if ( CompositionInputWindowUIOwner )
  {
    LOBYTE(v20) = IsMessageOnlyWindow((__int64)CompositionInputWindowUIOwner);
    if ( !v20 )
    {
      v21 = GetTopLevelWindow(v19);
      PostEventMessageEx(
        *(struct tagTHREADINFO **)(v21 + 16),
        *(struct tagQ **)(*(_QWORD *)(v21 + 16) + 432LL),
        6u,
        0LL,
        0,
        0LL,
        *(_QWORD *)v21,
        0LL);
    }
  }
}
