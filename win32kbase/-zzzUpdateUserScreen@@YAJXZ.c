/*
 * XREFs of ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0014608
 * Callers:
 *     InitUserScreen @ 0x1C00127A8 (InitUserScreen.c)
 *     xxxResetDisplayDevice @ 0x1C0016410 (xxxResetDisplayDevice.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DA244 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C001305C (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0014BB4 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     EnforceColorDependentSettings @ 0x1C0015960 (EnforceColorDependentSettings.c)
 *     ApiSetzzzUpdateCursorSizes @ 0x1C0015BF4 (ApiSetzzzUpdateCursorSizes.c)
 *     InitLoadResources @ 0x1C0015CF0 (InitLoadResources.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C0016324 (--4-$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagM.c)
 *     HdevFromMonitor @ 0x1C00163A0 (HdevFromMonitor.c)
 *     MonitorFromHdev @ 0x1C003C08C (MonitorFromHdev.c)
 *     GreGetDeviceCaps @ 0x1C003EAF0 (GreGetDeviceCaps.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0041930 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0041AF0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreCombineRgn @ 0x1C0041BD0 (GreCombineRgn.c)
 *     GreDeleteObject @ 0x1C0043CD0 (GreDeleteObject.c)
 *     GreCreateRectRgnIndirect @ 0x1C0050B70 (GreCreateRectRgnIndirect.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C00517A0 (SetOrCreateRectRgnIndirectPublic.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DestroyMonitor @ 0x1C00B5C00 (DestroyMonitor.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ApiSetEditionHandleNonUniformHMonitorDpi @ 0x1C023EEA0 (ApiSetEditionHandleNonUniformHMonitorDpi.c)
 */

__int64 __fastcall zzzUpdateUserScreen(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  struct tagMONITOR **v4; // rdi
  __int64 v5; // rbx
  PDEVICE_OBJECT v6; // rcx
  int v7; // esi
  unsigned int v8; // r15d
  unsigned int i; // ebx
  struct tagMONITOR *v10; // rax
  __int64 v11; // r8
  struct tagMONITOR *v12; // r9
  __int64 v13; // rbx
  unsigned __int16 v14; // si
  unsigned __int16 v15; // di
  __int64 v16; // rax
  __int64 j; // rcx
  int v18; // r14d
  int v19; // r9d
  int v20; // r10d
  int v21; // r11d
  int v22; // ebx
  _QWORD *k; // rdx
  PVOID v24; // rdx
  __int64 v25; // rcx
  CInputConfig *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rbx
  int v33; // esi
  __int64 v34; // rdx
  __int64 m; // r8
  unsigned __int8 DeviceCaps; // al
  __int16 v37; // r9
  _DWORD *v39; // r8
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  unsigned int v45; // eax
  __int64 v46; // rcx
  HRGN RectRgnIndirect; // rax
  HPALETTE v48; // rdi
  __int64 n; // r9
  struct tagMONITOR *v50; // rsi
  struct tagMONITOR **v51; // r15
  unsigned int v52; // eax
  __int128 v53; // [rsp+40h] [rbp-30h]
  __int128 v54; // [rsp+50h] [rbp-20h]

  v3 = *((_QWORD *)gpDispInfo + 2);
  v4 = (struct tagMONITOR **)((char *)gpDispInfo + 104);
  v5 = *((_QWORD *)gpDispInfo + 13);
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      10,
      (__int64)&WPP_5c9595ca5c6d3967a130a1a48d85f5c7_Traceguids);
  v7 = 0;
  v8 = 0;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v6, a2, a3) & 0xF) == 0 )
  {
    v8 = W32SetCurrentThreadDpiAwarenessContext(18LL);
    v7 = 1;
  }
  InitLoadResources(1LL);
  if ( v7 )
    W32SetCurrentThreadDpiAwarenessContext(v8);
  while ( v5 )
  {
    v50 = (struct tagMONITOR *)v5;
    v51 = (struct tagMONITOR **)(v5 + 56);
    v5 = *(_QWORD *)(v5 + 56);
    v52 = HdevFromMonitor(v50);
    if ( v52 == -1 )
    {
      DestroyMonitor(v50);
    }
    else
    {
      SetMonitorData(v50, v52);
      v4 = v51;
    }
  }
  for ( i = 0; i < *(_DWORD *)(v3 + 20); ++i )
  {
    if ( !MonitorFromHdev(*(_QWORD *)(56LL * i + v3 + 40)) )
    {
      v10 = SetMonitorData(0LL, i);
      v12 = v10;
      if ( v10 )
      {
        if ( *((_QWORD *)gpDispInfo + 13) )
        {
          *((_QWORD *)*(v4 - 2) + 2) = *((_QWORD *)v10 + 6);
          *v4 = v10;
        }
        else
        {
          tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorFirst<tagMONITOR>::operator=(
            (char *)gpDispInfo + 104,
            v10,
            v11,
            v10);
        }
        v4 = (struct tagMONITOR **)((char *)v12 + 56);
      }
    }
  }
  v13 = *((_QWORD *)gpDispInfo + 13);
  if ( !v13 || !*((_QWORD *)gpDispInfo + 12) )
    return 3221225495LL;
  v14 = *(_WORD *)(*(_QWORD *)(v13 + 40) + 60LL);
  v15 = v14;
  do
  {
    if ( v14 && v14 != *(_WORD *)(*(_QWORD *)(v13 + 40) + 60LL) )
    {
      v14 = 0;
      ApiSetEditionHandleNonUniformHMonitorDpi();
    }
    v16 = *(_QWORD *)(v13 + 40);
    v13 = *(_QWORD *)(v13 + 56);
    if ( v15 >= *(_WORD *)(v16 + 60) )
      v15 = *(_WORD *)(v16 + 60);
  }
  while ( v13 );
  WPP_MAIN_CB.DeviceLock.Header.SignalState = v14;
  for ( j = *((_QWORD *)gpDispInfo + 13); j; j = *(_QWORD *)(j + 56) )
    *(_WORD *)(*(_QWORD *)(j + 40) + 62LL) = v15;
  ApiSetzzzUpdateCursorSizes();
  *((_DWORD *)gpsi + 555) = (*(_DWORD *)(v3 + 16) & 1) == 0;
  v18 = GreGetDeviceCaps(*((HDC *)gpDispInfo + 7), 38) & 0x100;
  v53 = 0LL;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  *((_DWORD *)gpDispInfo + 33) = *((_DWORD *)gpDispInfo + 33) & 0xFFFFFFFD | (v18 != 0 ? 2 : 0);
  **(_DWORD **)gpDispInfo = 0;
  for ( k = (_QWORD *)*((_QWORD *)gpDispInfo + 13); k; k = (_QWORD *)k[7] )
  {
    v39 = (_DWORD *)k[5];
    if ( (v39[6] & 1) != 0 )
    {
      v40 = v39[7];
      if ( v22 < v40 )
        v40 = v22;
      v22 = v40;
      LODWORD(v53) = v40;
      v41 = v39[8];
      if ( v21 < v41 )
        v41 = v21;
      v21 = v41;
      DWORD1(v53) = v41;
      v42 = v39[9];
      if ( v20 > v42 )
        v42 = v20;
      v20 = v42;
      DWORD2(v53) = v42;
      v43 = v39[10];
      if ( v19 > v43 )
        v43 = v19;
      v19 = v43;
      HIDWORD(v53) = v43;
      ++**(_DWORD **)gpDispInfo;
      v39 = (_DWORD *)k[5];
    }
    if ( *((_DWORD *)gpsi + 555) )
    {
      v44 = v39[6];
      if ( v18 )
        v45 = v44 | 2;
      else
        v45 = v44 & 0xFFFFFFFD;
      v39[6] = v45;
    }
    else if ( (*(_DWORD *)(k[10] + 2140LL) & 0x100) != 0 )
    {
      v39[6] |= 2u;
      *((_DWORD *)gpDispInfo + 33) |= 2u;
    }
  }
  v24 = gpDispInfo;
  v54 = *(_OWORD *)(*(_QWORD *)gpDispInfo + 24LL);
  v25 = v53 - v54;
  if ( (_QWORD)v53 == (_QWORD)v54 )
    v25 = *((_QWORD *)&v53 + 1) - *((_QWORD *)&v54 + 1);
  *(_DWORD *)(*(_QWORD *)gpDispInfo + 24LL) = v22;
  *(_DWORD *)(*(_QWORD *)v24 + 28LL) = v21;
  *(_DWORD *)(*(_QWORD *)v24 + 32LL) = v20;
  *(_DWORD *)(*(_QWORD *)v24 + 36LL) = v19;
  if ( gfRemotingConsole && gpConsoleShadowDisplayChangeEvent && v25 )
    KeSetEvent(gpConsoleShadowDisplayChangeEvent, 1, 0);
  v26 = *(CInputConfig **)gpDispInfo;
  *((_DWORD *)gpsi + 554) = **(_DWORD **)gpDispInfo;
  CInputConfig::OnDisplayStateChange(v26);
  v31 = SGDGetUserSessionState(v28, v27, v29, v30);
  memset((void *)(v31 + 14368), 0, 0x600uLL);
  if ( qword_1C02D7090 && (int)qword_1C02D7090() >= 0 && qword_1C02D7098 )
    qword_1C02D7098();
  SetOrCreateRectRgnIndirectPublic((char *)gpDispInfo + 120, &gZero);
  if ( *((_QWORD *)gpDispInfo + 15) )
  {
    v32 = *((_QWORD *)gpDispInfo + 13);
    v33 = 0;
    while ( v32 )
    {
      v46 = *(_QWORD *)(v32 + 40);
      if ( (*(_DWORD *)(v46 + 24) & 1) != 0 )
      {
        RectRgnIndirect = (HRGN)GreCreateRectRgnIndirect((struct _RECTL *)(v46 + 28));
        v48 = (HPALETTE)RectRgnIndirect;
        if ( RectRgnIndirect )
        {
          v33 = GreCombineRgn(*((HRGN *)gpDispInfo + 15), *((HRGN *)gpDispInfo + 15), RectRgnIndirect, 2);
          GreDeleteObject(v48);
        }
      }
      v32 = *(_QWORD *)(v32 + 56);
    }
    *((_DWORD *)gpDispInfo + 33) = *((_DWORD *)gpDispInfo + 33) & 0xFFFFFFFE | (v33 == 2);
  }
  v34 = 0LL;
  if ( (*((_DWORD *)gpDispInfo + 33) & 1) == 0 )
    v34 = *((_QWORD *)gpDispInfo + 15);
  for ( m = grpWinStaList; m; m = *(_QWORD *)(m + 8) )
  {
    for ( n = *(_QWORD *)(m + 16); n; n = *(_QWORD *)(n + 32) )
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(n + 8) + 24LL) + 40LL) + 168LL) = v34;
  }
  *((_BYTE *)gpsi + 7002) = GreGetDeviceCaps(*((HDC *)gpDispInfo + 7), 14);
  DeviceCaps = GreGetDeviceCaps(*((HDC *)gpDispInfo + 7), 12);
  *((_BYTE *)gpsi + 7003) = DeviceCaps;
  v37 = *((unsigned __int8 *)gpsi + 7002) * DeviceCaps;
  *((_WORD *)gpsi + 3498) = v37;
  *((_WORD *)gpDispInfo + 64) = v37;
  if ( v18 )
    *((_DWORD *)gpsi + 1751) |= 1u;
  else
    *((_DWORD *)gpsi + 1751) &= ~1u;
  EnforceColorDependentSettings();
  if ( qword_1C02D8020 && (int)qword_1C02D8020() >= 0 )
  {
    if ( qword_1C02D8028 )
      qword_1C02D8028();
  }
  return 0LL;
}
