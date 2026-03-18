/*
 * XREFs of ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0063D18
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C005D650 (xxxResetDisplayDevice.c)
 *     InitUserScreen @ 0x1C006C88C (InitUserScreen.c)
 * Callees:
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0027800 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCreateRectRgnIndirect @ 0x1C0028800 (GreCreateRectRgnIndirect.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C002E240 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002EA80 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DestroyMonitor @ 0x1C0050630 (DestroyMonitor.c)
 *     ApiSetzzzUpdateCursorSizes @ 0x1C005083C (ApiSetzzzUpdateCursorSizes.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C0052044 (--4-$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagM.c)
 *     EnforceColorDependentSettings @ 0x1C0062830 (EnforceColorDependentSettings.c)
 *     GreGetDeviceCaps @ 0x1C00642D0 (GreGetDeviceCaps.c)
 *     ?UpdateCurrent@CTopologyManager@@SAXXZ @ 0x1C0067830 (-UpdateCurrent@CTopologyManager@@SAXXZ.c)
 *     HdevFromMonitor @ 0x1C0067F70 (HdevFromMonitor.c)
 *     InitLoadResources @ 0x1C006C520 (InitLoadResources.c)
 *     GreCombineRgn @ 0x1C006EFF0 (GreCombineRgn.c)
 *     MonitorFromHdev @ 0x1C0071B98 (MonitorFromHdev.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C009F378 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00C7F94 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ApiSetEditionHandleNonUniformHMonitorDpi @ 0x1C0208140 (ApiSetEditionHandleNonUniformHMonitorDpi.c)
 */

__int64 zzzUpdateUserScreen(void)
{
  __int64 v0; // r14
  struct tagMONITOR **v1; // rdi
  __int64 v2; // rbx
  char v3; // dl
  int v4; // esi
  int v5; // r15d
  unsigned int i; // ebx
  __int64 v7; // rbx
  unsigned __int16 v8; // di
  unsigned __int16 v9; // si
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  __int64 j; // rcx
  int v13; // r14d
  signed int v14; // r9d
  signed int v15; // r10d
  signed int v16; // r11d
  signed int v17; // r8d
  _QWORD *v18; // rdx
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  PVOID v25; // rdx
  __int64 v26; // rcx
  CInputConfig *v27; // rcx
  __int64 v28; // rbx
  int v29; // esi
  __int64 v30; // rdx
  __int64 k; // r8
  unsigned __int8 DeviceCaps; // al
  __int16 v33; // r9
  __int64 v35; // rcx
  struct HOBJ__ *RectRgnIndirect; // rax
  HRGN v37; // rdi
  __int64 m; // r9
  struct tagMONITOR *v39; // rsi
  struct tagMONITOR **v40; // r15
  unsigned int v41; // eax
  struct tagMONITOR *v42; // rax
  struct tagMONITOR *v43; // r9
  __int128 v44; // [rsp+40h] [rbp-30h]
  __int128 v45; // [rsp+50h] [rbp-20h]

  v0 = *((_QWORD *)gpDispInfo + 2);
  v1 = (struct tagMONITOR **)((char *)gpDispInfo + 104);
  v2 = *((_QWORD *)gpDispInfo + 13);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v3 = 0;
  }
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      10,
      (__int64)&WPP_96f72745ab4d382845baec52f5a57d1c_Traceguids);
  v4 = 0;
  v5 = 0;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
  {
    v5 = W32SetCurrentThreadDpiAwarenessContext(18);
    v4 = 1;
  }
  InitLoadResources(1LL);
  if ( v4 )
    W32SetCurrentThreadDpiAwarenessContext(v5);
  while ( v2 )
  {
    v39 = (struct tagMONITOR *)v2;
    v40 = (struct tagMONITOR **)(v2 + 56);
    v2 = *(_QWORD *)(v2 + 56);
    v41 = HdevFromMonitor(v39);
    if ( v41 == -1 )
    {
      DestroyMonitor(v39);
    }
    else
    {
      SetMonitorData(v39, v41);
      v1 = v40;
    }
  }
  for ( i = 0; i < *(_DWORD *)(v0 + 20); ++i )
  {
    if ( !MonitorFromHdev(*(_QWORD *)(56LL * i + v0 + 40)) )
    {
      v42 = SetMonitorData(0LL, i);
      v43 = v42;
      if ( v42 )
      {
        if ( *((_QWORD *)gpDispInfo + 13) )
        {
          *((_QWORD *)*(v1 - 2) + 2) = *((_QWORD *)v42 + 6);
          *v1 = v42;
        }
        else
        {
          tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorFirst<tagMONITOR>::operator=(
            (_QWORD *)gpDispInfo + 13,
            (__int64)v42);
        }
        v1 = (struct tagMONITOR **)((char *)v43 + 56);
      }
    }
  }
  v7 = *((_QWORD *)gpDispInfo + 13);
  if ( !v7 || !*((_QWORD *)gpDispInfo + 12) )
    return 3221225495LL;
  v8 = *(_WORD *)(*(_QWORD *)(v7 + 40) + 60LL);
  v9 = v8;
  do
  {
    if ( v8 && v8 != *(_WORD *)(*(_QWORD *)(v7 + 40) + 60LL) )
    {
      v8 = 0;
      ApiSetEditionHandleNonUniformHMonitorDpi();
    }
    v10 = *(_QWORD *)(v7 + 40);
    v7 = *(_QWORD *)(v7 + 56);
    v11 = *(_WORD *)(v10 + 60);
    if ( v9 < v11 )
      v11 = v9;
    v9 = v11;
  }
  while ( v7 );
  dword_1C029660C = v8;
  for ( j = *((_QWORD *)gpDispInfo + 13); j; j = *(_QWORD *)(j + 56) )
    *(_WORD *)(*(_QWORD *)(j + 40) + 62LL) = v9;
  ApiSetzzzUpdateCursorSizes();
  *((_DWORD *)gpsi + 555) = (*(_DWORD *)(v0 + 16) & 1) == 0;
  v13 = GreGetDeviceCaps(*((HDC *)gpDispInfo + 7), 38) & 0x100;
  v44 = 0LL;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  *((_DWORD *)gpDispInfo + 33) = *((_DWORD *)gpDispInfo + 33) & 0xFFFFFFFD | (v13 != 0 ? 2 : 0);
  v17 = 0;
  **(_DWORD **)gpDispInfo = 0;
  v18 = (_QWORD *)*((_QWORD *)gpDispInfo + 13);
  if ( v18 )
  {
    do
    {
      v19 = (_DWORD *)v18[5];
      if ( (v19[6] & 1) != 0 )
      {
        v20 = v19[7];
        if ( v16 < v20 )
          v20 = v16;
        v16 = v20;
        v21 = v19[8];
        if ( v15 < v21 )
          v21 = v15;
        v15 = v21;
        v22 = v19[9];
        if ( v14 > v22 )
          v22 = v14;
        v14 = v22;
        v23 = v19[10];
        if ( v17 > v23 )
          v23 = v17;
        v17 = v23;
        ++**(_DWORD **)gpDispInfo;
      }
      if ( *((_DWORD *)gpsi + 555) )
      {
        v24 = v18[5];
        if ( v13 )
          *(_DWORD *)(v24 + 24) |= 2u;
        else
          *(_DWORD *)(v24 + 24) &= ~2u;
      }
      else if ( (*(_DWORD *)(v18[10] + 2140LL) & 0x100) != 0 )
      {
        *(_DWORD *)(v18[5] + 24LL) |= 2u;
        *((_DWORD *)gpDispInfo + 33) |= 2u;
      }
      v18 = (_QWORD *)v18[7];
    }
    while ( v18 );
    *((_QWORD *)&v44 + 1) = __PAIR64__(v17, v14);
    *(_QWORD *)&v44 = __PAIR64__(v15, v16);
  }
  v25 = gpDispInfo;
  v45 = *(_OWORD *)(*(_QWORD *)gpDispInfo + 24LL);
  v26 = v44 - v45;
  if ( (_QWORD)v44 == (_QWORD)v45 )
    v26 = *((_QWORD *)&v44 + 1) - *((_QWORD *)&v45 + 1);
  *(_DWORD *)(*(_QWORD *)gpDispInfo + 24LL) = v16;
  *(_DWORD *)(*(_QWORD *)v25 + 28LL) = v15;
  *(_DWORD *)(*(_QWORD *)v25 + 32LL) = v14;
  *(_DWORD *)(*(_QWORD *)v25 + 36LL) = v17;
  if ( gfRemotingConsole && gpConsoleShadowDisplayChangeEvent && v26 )
    KeSetEvent(gpConsoleShadowDisplayChangeEvent, 1, 0);
  v27 = *(CInputConfig **)gpDispInfo;
  *((_DWORD *)gpsi + 554) = **(_DWORD **)gpDispInfo;
  CInputConfig::OnDisplayStateChange(v27);
  memset(&gaptMouse, 0, 0x600uLL);
  if ( qword_1C029C848 && (int)qword_1C029C848() >= 0 && qword_1C029C850 )
    qword_1C029C850();
  SetOrCreateRectRgnIndirectPublic((HRGN *)gpDispInfo + 15, (signed int *)&gZero);
  if ( *((_QWORD *)gpDispInfo + 15) )
  {
    v28 = *((_QWORD *)gpDispInfo + 13);
    v29 = 0;
    while ( v28 )
    {
      v35 = *(_QWORD *)(v28 + 40);
      if ( (*(_DWORD *)(v35 + 24) & 1) != 0 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect((struct _SLIST_ENTRY *)(v35 + 28));
        v37 = (HRGN)RectRgnIndirect;
        if ( RectRgnIndirect )
        {
          v29 = GreCombineRgn(*((HRGN *)gpDispInfo + 15), *((HRGN *)gpDispInfo + 15), (HRGN)RectRgnIndirect, 2);
          GreDeleteObject(v37);
        }
      }
      v28 = *(_QWORD *)(v28 + 56);
    }
    *((_DWORD *)gpDispInfo + 33) = *((_DWORD *)gpDispInfo + 33) & 0xFFFFFFFE | (v29 == 2);
  }
  v30 = 0LL;
  if ( (*((_DWORD *)gpDispInfo + 33) & 1) == 0 )
    v30 = *((_QWORD *)gpDispInfo + 15);
  for ( k = grpWinStaList; k; k = *(_QWORD *)(k + 8) )
  {
    for ( m = *(_QWORD *)(k + 16); m; m = *(_QWORD *)(m + 32) )
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(m + 8) + 24LL) + 40LL) + 168LL) = v30;
  }
  *((_BYTE *)gpsi + 7002) = GreGetDeviceCaps(*((HDC *)gpDispInfo + 7), 14);
  DeviceCaps = GreGetDeviceCaps(*((HDC *)gpDispInfo + 7), 12);
  *((_BYTE *)gpsi + 7003) = DeviceCaps;
  v33 = *((unsigned __int8 *)gpsi + 7002) * DeviceCaps;
  *((_WORD *)gpsi + 3498) = v33;
  *((_WORD *)gpDispInfo + 64) = v33;
  if ( v13 )
    *((_DWORD *)gpsi + 1751) |= 1u;
  else
    *((_DWORD *)gpsi + 1751) &= ~1u;
  EnforceColorDependentSettings();
  CTopologyManager::UpdateCurrent();
  return 0LL;
}
