/*
 * XREFs of EditionPostDwmSpeedHitTest @ 0x1C00A2AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C000FFD0 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C001664C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C00A2D40 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00A2E6C (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00E6A88 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C014A6E4 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     TouchTargetChildTree @ 0x1C01E7B88 (TouchTargetChildTree.c)
 *     xxxTouchTargetWindow @ 0x1C01E8238 (xxxTouchTargetWindow.c)
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
  __int64 v8; // r9
  struct tagWND *i; // rbx
  int v13; // ecx
  const struct tagWND **v14; // r8
  bool v15; // zf
  __int64 v16; // rcx
  struct tagWND *v17; // rax
  struct tagWND *v18; // rbx
  struct tagPOINT v19; // rax
  struct tagWND *v20; // rax
  __int64 v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int64 result; // rax
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  int v30; // eax
  int v31; // [rsp+28h] [rbp-79h]
  struct tagPOINT v32; // [rsp+48h] [rbp-59h] BYREF
  __int64 v33; // [rsp+50h] [rbp-51h] BYREF
  _OWORD v34[5]; // [rsp+58h] [rbp-49h] BYREF
  __int128 v35; // [rsp+A8h] [rbp+7h]
  __int128 v36; // [rsp+B8h] [rbp+17h]

  v6 = (_DWORD *)a6;
  v8 = 0LL;
  i = 0LL;
  *(_DWORD *)a6 = 0;
  v13 = *(_DWORD *)(a1 + 92);
  if ( v13 == 2 && (*(_DWORD *)(a1 + 88) & 1) != 0 )
  {
    v14 = (const struct tagWND **)(a1 + 80);
    for ( i = *(struct tagWND **)(a1 + 80); i && !IsTopLevelWindow((__int64)i); i = (struct tagWND *)*((_QWORD *)i + 13) )
      ;
    v15 = i == 0LL;
  }
  else
  {
    v14 = (const struct tagWND **)(a1 + 80);
    v15 = v13 == 2;
  }
  if ( !v15 || !*v14 )
  {
    if ( *(_DWORD *)(a5 + 80) != (_DWORD)v8 )
    {
      LODWORD(a6) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 438LL);
      v8 = 0LL;
    }
    v32 = *a2;
    if ( a4 )
    {
      v33 = v8;
      LOWORD(a6) = v8;
      if ( !i )
        goto LABEL_18;
      v30 = xxxTouchTargetWindow(
              i,
              a4,
              &v32,
              (__int64)&a6,
              (__int64)&v33,
              *(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1);
      v8 = 0LL;
      if ( !v30 )
        goto LABEL_18;
      v17 = (struct tagWND *)TouchTargetChildTree(i, a4, v31);
    }
    else
    {
      if ( !i || !(unsigned int)DCEIsWindowHit(i, &v32, a3) )
      {
        v20 = TopLevelSpeedHitTest(grpdeskRitInput, &v32, a3);
        v8 = 0LL;
        i = v20;
        if ( !v20 )
          goto LABEL_18;
        LODWORD(a4) = 0;
      }
      if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v16) + 32) + 8720LL) == (_DWORD)a4 )
        v17 = ClassicChildTreeSpeedHitTest(i, v32);
      else
        v17 = DCEChildTreeSpeedHitTest(i, *a2, &v32, a3);
    }
    v8 = 0LL;
    v18 = v17;
    if ( v17 )
    {
      v19 = v32;
      *v6 = 1;
      *a2 = v19;
      goto LABEL_19;
    }
LABEL_18:
    v32 = *a2;
    v18 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
    *a2 = v32;
    v21 = v8;
    if ( !v18 )
    {
LABEL_20:
      *(_QWORD *)a5 = v21;
      memset_0(v34, 0, 0x70uLL);
      if ( v18 )
      {
        LODWORD(v34[0]) = 4;
        *(_QWORD *)&v35 = v18;
        HIDWORD(v35) = 2;
      }
      v22 = v34[1];
      *(_OWORD *)a1 = v34[0];
      v23 = v34[2];
      *(_OWORD *)(a1 + 16) = v22;
      v24 = v34[3];
      *(_OWORD *)(a1 + 32) = v23;
      v25 = v34[4];
      *(_OWORD *)(a1 + 48) = v24;
      v26 = v35;
      *(_OWORD *)(a1 + 64) = v25;
      v27 = v36;
      *(_OWORD *)(a1 + 80) = v26;
      *(_OWORD *)(a1 + 96) = v27;
      result = *(unsigned int *)(a5 + 100);
      *(_DWORD *)(a1 + 4) = result;
      return result;
    }
LABEL_19:
    v21 = *(_QWORD *)v18;
    goto LABEL_20;
  }
  CompositionInputWindowUIOwner = *v14;
  if ( (unsigned int)IsIndependentInputWindow(*v14) )
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
