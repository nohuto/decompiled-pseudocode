/*
 * XREFs of ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F19F8
 * Callers:
 *     EditionPointerActivate @ 0x1C01F2200 (EditionPointerActivate.c)
 * Callees:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0039B68 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FC70 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     _GetTopLevelWindow @ 0x1C006FCC0 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00C0AD8 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00D7618 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsMessageOnlyWindow @ 0x1C00D7730 (IsMessageOnlyWindow.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00F1118 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104AC8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D24C8 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01E5ACC (PhysicalToLogicalInPlacePointWithParent.c)
 *     xxxSendPointerMessageWorker @ 0x1C01F0CD8 (xxxSendPointerMessageWorker.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01F1DBC (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     IsModalMenuStarted @ 0x1C01F2328 (IsModalMenuStarted.c)
 *     xxxMNDismissIfOffMenu @ 0x1C02380E4 (xxxMNDismissIfOffMenu.c)
 */

void __fastcall xxxPointerActivateInternal(
        struct tagWND *a1,
        __int16 a2,
        __int64 a3,
        const struct tagPOINTEREVENTINT *a4)
{
  __int64 v5; // rdi
  __int16 v6; // bx
  char v8; // r12
  __int64 v9; // r15
  __int64 *TopLevelWindow; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rdx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rbx
  unsigned int v24; // edi
  __int64 v25; // rax
  __int64 v26; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v35; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v37; // rax
  _QWORD *v38; // rax
  __int64 LegacyActivation; // rax
  __int64 v40; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v41[3]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v42[3]; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v45; // [rsp+D8h] [rbp+58h] BYREF

  v5 = a3;
  v6 = a2;
  v41[2] = 0LL;
  if ( *((_DWORD *)a4 + 44) )
  {
    v8 = 1;
LABEL_3:
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL);
    if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1)
      && !(unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(a1) )
    {
      TopLevelWindow = (__int64 *)GetTopLevelWindow((__int64)a1);
      if ( TopLevelWindow )
      {
        if ( a1 != *(struct tagWND **)(v9 + 120) )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v41[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v41;
          v41[1] = TopLevelWindow;
          HMLockObject(TopLevelWindow);
          v13 = *(_QWORD *)(v9 + 104);
          if ( v13 && (unsigned int)IsModalMenuStarted(*(_QWORD *)(v13 + 16)) )
          {
            v15 = *((_QWORD *)a4 + 5);
            v42[2] = 0LL;
            v45 = v15;
            v16 = *(__int64 **)(v14 + 608);
            if ( v16 )
              v17 = *v16;
            else
              v17 = 0LL;
            SmartObjStackRefBase<tagPOPUPMENU>::Init(&v40, v17);
            v22 = *(_QWORD *)(v9 + 104);
            if ( (*(_DWORD *)(*(_QWORD *)(v22 + 40) + 288LL) & 0xF) == 2 )
            {
              if ( *(_QWORD *)v40
                && *(_QWORD *)(*(_QWORD *)v40 + 16LL)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v40 + 16LL) + 40LL) + 288LL) & 0xF) != 2
                && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v40 + 16LL) + 216LL) )
              {
                PhysicalToLogicalInPlacePointWithParent(*(struct tagWND **)(*(_QWORD *)v40 + 16LL), (int *)&v45, 0LL);
              }
            }
            else
            {
              PhysicalToLogicalDPIPointWithHitTest(&v45, &v45, 0LL, v22);
            }
            v23 = *(_QWORD *)(v9 + 104);
            v24 = (unsigned __int16)v45 | (WORD2(v45) << 16);
            v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v42[0] = *(_QWORD *)(v25 + 416);
            *(_QWORD *)(v25 + 416) = v42;
            v42[1] = v23;
            HMLockObject(v23);
            xxxMNDismissIfOffMenu(*(_QWORD *)(v9 + 104), v24);
            ThreadUnlock1(v26);
            CurrentThread = KeGetCurrentThread();
            v28 = 0LL;
            if ( !(unsigned __int8)KeIsAttachedProcess(v29)
              || (CurrentProcess = PsGetCurrentProcess(v31, v30, v32),
                  ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                  CurrentThreadProcess = PsGetCurrentThreadProcess(v35),
                  ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
            {
              v37 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( v37 )
                v28 = *v37;
            }
            if ( v40 != gSmartObjNullRef && !--*(_DWORD *)(v40 + 8) )
            {
              if ( *(_BYTE *)(v40 + 12) )
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v40);
            }
            v38 = *(_QWORD **)(v28 + 1472);
            v6 = a2;
            if ( v38 )
              *(_QWORD *)(v28 + 1472) = *v38;
            v5 = a3;
          }
          if ( !v8 )
          {
            LegacyActivation = xxxSendPointerMessageWorker((__int64)a1, 587LL, v5, *TopLevelWindow, 0LL, 177);
            if ( LegacyActivation == 1 )
              goto LABEL_39;
            if ( LegacyActivation != 3 )
              LegacyActivation = xxxQueryLegacyActivation(a1, (struct tagWND *)TopLevelWindow, v6, a4);
            if ( LegacyActivation == 1 )
LABEL_39:
              xxxActivateWindowWithOptions((__int64)TopLevelWindow, 3, 49, 1);
          }
          ThreadUnlock1(v12);
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
