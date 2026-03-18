/*
 * XREFs of EditionPostDwmSpeedHitTest @ 0x1C0077400
 * Callers:
 *     <none>
 * Callees:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C0004C98 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0077618 (INPUTDEST_FROM_PWND.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0077660 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C007783C (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00F1E88 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C010B030 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     TouchTargetChildTree @ 0x1C020718C (TouchTargetChildTree.c)
 *     xxxTouchTargetWindow @ 0x1C020783C (xxxTouchTargetWindow.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C023A8B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall EditionPostDwmSpeedHitTest(
        __int64 a1,
        struct tagPOINT *a2,
        const struct _SUBPIXELS *a3,
        struct tagTOUCHTARGETINGCONTACT *a4,
        __int64 a5,
        __int64 a6)
{
  _DWORD *v6; // r13
  __int64 v7; // rbx
  struct tagWND *TopLevelWindow; // rdi
  __int64 v13; // rcx
  bool v14; // zf
  struct tagWND *v15; // rax
  struct tagWND *v16; // rdx
  struct tagPOINT v17; // rax
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  __int128 v22; // xmm4
  __int128 v23; // xmm5
  __int128 v24; // xmm6
  __int64 result; // rax
  struct tagWND *CompositionInputWindowUIOwner; // rdi
  int v27; // [rsp+28h] [rbp-89h]
  struct tagPOINT v28; // [rsp+48h] [rbp-69h] BYREF
  __int64 v29; // [rsp+50h] [rbp-61h] BYREF
  _BYTE v30[128]; // [rsp+58h] [rbp-59h] BYREF

  v6 = (_DWORD *)a6;
  v7 = 0LL;
  TopLevelWindow = 0LL;
  *(_DWORD *)a6 = 0;
  v13 = *(unsigned int *)(a1 + 92);
  if ( (_DWORD)v13 != 2
    || ((*(_DWORD *)(a1 + 88) & 1) == 0
      ? (v14 = 1)
      : (TopLevelWindow = (struct tagWND *)GetTopLevelWindow(*(_QWORD *)(a1 + 80)), v14 = TopLevelWindow == 0LL),
        !v14 || !*(_QWORD *)(a1 + 80)) )
  {
    if ( *(_DWORD *)(a5 + 80) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
    v28 = *a2;
    if ( a4 )
    {
      v29 = 0LL;
      LOWORD(a6) = 0;
      if ( !TopLevelWindow
        || !(unsigned int)xxxTouchTargetWindow(
                            TopLevelWindow,
                            a4,
                            &v28,
                            (__int64)&a6,
                            (__int64)&v29,
                            *(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) )
      {
        goto LABEL_14;
      }
      v15 = (struct tagWND *)TouchTargetChildTree(TopLevelWindow, a4, v27);
    }
    else
    {
      if ( !TopLevelWindow || !(unsigned int)DCEIsWindowHit(TopLevelWindow, &v28, a3) )
      {
        TopLevelWindow = TopLevelSpeedHitTest(grpdeskRitInput, &v28, a3);
        if ( !TopLevelWindow )
          goto LABEL_14;
      }
      if ( gfDwmChildWindowDpiIsolationEnabled )
        v15 = DCEChildTreeSpeedHitTest(TopLevelWindow, *a2, &v28, a3);
      else
        v15 = ClassicChildTreeSpeedHitTest(TopLevelWindow, v28);
    }
    v16 = v15;
    if ( v15 )
    {
      v17 = v28;
      *v6 = 1;
      *a2 = v17;
      goto LABEL_15;
    }
LABEL_14:
    v28 = *a2;
    v16 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
    *a2 = v28;
    if ( !v16 )
    {
LABEL_16:
      *(_QWORD *)a5 = v7;
      v18 = (_OWORD *)INPUTDEST_FROM_PWND(v30);
      v19 = v18[1];
      v20 = v18[2];
      v21 = v18[3];
      v22 = v18[4];
      v23 = v18[5];
      v24 = v18[6];
      *(_OWORD *)a1 = *v18;
      *(_OWORD *)(a1 + 16) = v19;
      *(_OWORD *)(a1 + 32) = v20;
      *(_OWORD *)(a1 + 48) = v21;
      *(_OWORD *)(a1 + 64) = v22;
      *(_OWORD *)(a1 + 80) = v23;
      *(_OWORD *)(a1 + 96) = v24;
      result = *(unsigned int *)(a5 + 100);
      *(_DWORD *)(a1 + 4) = result;
      return result;
    }
LABEL_15:
    v7 = *(_QWORD *)v16;
    goto LABEL_16;
  }
  CompositionInputWindowUIOwner = *(struct tagWND **)(a1 + 80);
  if ( (unsigned int)IsIndependentInputWindow(CompositionInputWindowUIOwner) )
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
  a6 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 256LL));
  result = PhysicalToLogicalDPIPoint(
             a2,
             a2,
             *(unsigned int *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 288LL),
             &a6);
  *v6 = 1;
  return result;
}
