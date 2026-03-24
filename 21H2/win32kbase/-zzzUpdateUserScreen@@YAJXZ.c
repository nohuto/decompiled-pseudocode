/*
 * XREFs of ?zzzUpdateUserScreen@@YAJXZ @ 0x1C00C7464
 * Callers:
 *     InitUserScreen @ 0x1C006A78C (InitUserScreen.c)
 *     xxxResetDisplayDevice @ 0x1C0075F20 (xxxResetDisplayDevice.c)
 * Callees:
 *     DestroyMonitor @ 0x1C0007AD0 (DestroyMonitor.c)
 *     MonitorFromHdev @ 0x1C00212C8 (MonitorFromHdev.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002AA84 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0034520 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreDeleteObject @ 0x1C0038500 (GreDeleteObject.c)
 *     GreCombineRgn @ 0x1C0039860 (GreCombineRgn.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C006D57C (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     InitLoadResources @ 0x1C006F680 (InitLoadResources.c)
 *     EnforceColorDependentSettings @ 0x1C0091410 (EnforceColorDependentSettings.c)
 *     GreGetDeviceCaps @ 0x1C0091480 (GreGetDeviceCaps.c)
 *     HdevFromMonitor @ 0x1C00AE100 (HdevFromMonitor.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00B28A8 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ApiSetzzzUpdateCursorSizes @ 0x1C00CDC30 (ApiSetzzzUpdateCursorSizes.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C011E658 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 */

__int64 zzzUpdateUserScreen(void)
{
  __int64 v0; // r14
  struct tagMONITOR **v1; // rdi
  __int64 v2; // rbx
  int v3; // r15d
  char CurrentThreadDpiAwarenessContext; // al
  int v5; // esi
  struct tagMONITOR *v6; // rsi
  struct tagMONITOR **v7; // r15
  unsigned int v8; // eax
  struct tagMONITOR *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r9
  unsigned __int16 v13; // r8
  __int64 v14; // rax
  int v15; // r15d
  signed int v16; // r9d
  signed int v17; // r10d
  signed int v18; // r11d
  signed int v19; // r8d
  _QWORD *v20; // rdx
  _DWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  CInputConfig *v31; // rcx
  int v32; // eax
  __int64 v33; // rbx
  int v34; // r14d
  unsigned int v35; // esi
  struct HOBJ__ **v36; // rdi
  __int64 v37; // rdx
  __int64 i; // r8
  __int64 j; // r9
  unsigned __int8 DeviceCaps; // al
  __int16 v41; // r9
  __int128 v43; // [rsp+30h] [rbp-30h]
  __int128 v44; // [rsp+40h] [rbp-20h]

  v0 = *(_QWORD *)(gpDispInfo + 16);
  v1 = (struct tagMONITOR **)(gpDispInfo + 104);
  v2 = *(_QWORD *)(gpDispInfo + 104);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 14, 10, (__int64)&WPP_6c8a7949f294354c3e3996abc6998fe2_Traceguids);
  v3 = 0;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v5 = CurrentThreadDpiAwarenessContext & 0xF;
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 0 )
    v3 = W32SetCurrentThreadDpiAwarenessContext(v5 + 18);
  InitLoadResources(1);
  if ( !v5 )
    W32SetCurrentThreadDpiAwarenessContext(v3);
  while ( v2 )
  {
    v6 = (struct tagMONITOR *)v2;
    v7 = (struct tagMONITOR **)(v2 + 56);
    v2 = *(_QWORD *)(v2 + 56);
    v8 = HdevFromMonitor((__int64)v6);
    if ( v8 == -1 )
    {
      DestroyMonitor(v6);
    }
    else
    {
      SetMonitorData(v6, v8);
      v1 = v7;
    }
  }
  if ( *(_DWORD *)(v0 + 20) )
  {
    do
    {
      if ( !MonitorFromHdev(*(_QWORD *)(56LL * (unsigned int)v2 + v0 + 40)) )
      {
        v9 = SetMonitorData(0LL, v2);
        if ( v9 )
        {
          v10 = gpDispInfo;
          if ( *(_QWORD *)(gpDispInfo + 104) )
          {
            *((_QWORD *)*(v1 - 2) + 2) = *((_QWORD *)v9 + 6);
            *v1 = v9;
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)gpDispInfo + 16LL) = *((_QWORD *)v9 + 6);
            *(_QWORD *)(v10 + 104) = v9;
          }
          v1 = (struct tagMONITOR **)((char *)v9 + 56);
        }
      }
      LODWORD(v2) = v2 + 1;
    }
    while ( (unsigned int)v2 < *(_DWORD *)(v0 + 20) );
  }
  v11 = *(_QWORD *)(gpDispInfo + 104);
  if ( !v11 || !*(_QWORD *)(gpDispInfo + 96) )
    return 3221225495LL;
  v12 = *(_QWORD *)(gpDispInfo + 104);
  v13 = *(_WORD *)(*(_QWORD *)(v11 + 40) + 64LL);
  do
  {
    v14 = *(_QWORD *)(v12 + 40);
    v12 = *(_QWORD *)(v12 + 56);
    if ( v13 >= *(_WORD *)(v14 + 64) )
      v13 = *(_WORD *)(v14 + 64);
  }
  while ( v12 );
  do
  {
    *(_WORD *)(*(_QWORD *)(v11 + 40) + 66LL) = v13;
    v11 = *(_QWORD *)(v11 + 56);
  }
  while ( v11 );
  ApiSetzzzUpdateCursorSizes();
  *((_DWORD *)gpsi + 555) = (*(_DWORD *)(v0 + 16) & 1) == 0;
  v15 = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 38) & 0x100;
  v43 = 0LL;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  *(_DWORD *)(gpDispInfo + 132) = *(_DWORD *)(gpDispInfo + 132) & 0xFFFFFFFD | (v15 != 0 ? 2 : 0);
  v19 = 0;
  **(_DWORD **)gpDispInfo = 0;
  v20 = *(_QWORD **)(gpDispInfo + 104);
  if ( v20 )
  {
    do
    {
      v21 = (_DWORD *)v20[5];
      if ( (v21[6] & 1) != 0 )
      {
        v22 = v21[7];
        if ( v18 < v22 )
          v22 = v18;
        v18 = v22;
        v23 = v21[8];
        if ( v17 < v23 )
          v23 = v17;
        v17 = v23;
        v24 = v21[9];
        if ( v16 > v24 )
          v24 = v16;
        v16 = v24;
        v25 = v21[10];
        if ( v19 > v25 )
          v25 = v19;
        v19 = v25;
        ++**(_DWORD **)gpDispInfo;
      }
      if ( *((_DWORD *)gpsi + 555) )
      {
        v26 = v20[5];
        v27 = *(_DWORD *)(v26 + 24);
        if ( v15 )
          v28 = v27 | 2;
        else
          v28 = v27 & 0xFFFFFFFD;
        *(_DWORD *)(v26 + 24) = v28;
      }
      else if ( (*(_DWORD *)(v20[29] + 2172LL) & 0x100) != 0 )
      {
        *(_DWORD *)(v20[5] + 24LL) |= 2u;
        *(_DWORD *)(gpDispInfo + 132) |= 2u;
      }
      v20 = (_QWORD *)v20[7];
    }
    while ( v20 );
    *((_QWORD *)&v43 + 1) = __PAIR64__(v19, v16);
    *(_QWORD *)&v43 = __PAIR64__(v17, v18);
  }
  v29 = gpDispInfo;
  v44 = *(_OWORD *)(*(_QWORD *)gpDispInfo + 24LL);
  v30 = v43 - v44;
  if ( (_QWORD)v43 == (_QWORD)v44 )
    v30 = *((_QWORD *)&v43 + 1) - *((_QWORD *)&v44 + 1);
  *(_DWORD *)(*(_QWORD *)gpDispInfo + 24LL) = v18;
  *(_DWORD *)(*(_QWORD *)v29 + 28LL) = v17;
  *(_DWORD *)(*(_QWORD *)v29 + 32LL) = v16;
  *(_DWORD *)(*(_QWORD *)v29 + 36LL) = v19;
  if ( gfRemotingConsole && gpConsoleShadowDisplayChangeEvent && v30 )
    KeSetEvent(gpConsoleShadowDisplayChangeEvent, 1, 0);
  v31 = *(CInputConfig **)gpDispInfo;
  *((_DWORD *)gpsi + 554) = **(_DWORD **)gpDispInfo;
  CInputConfig::OnDisplayStateChange(v31);
  memset(&gaptMouse, 0, 0x600uLL);
  if ( qword_1C0257B08 )
    v32 = qword_1C0257B08();
  else
    v32 = -1073741637;
  if ( v32 >= 0 && qword_1C0257B10 )
    qword_1C0257B10();
  SetOrCreateRectRgnIndirectPublic((HRGN *)(gpDispInfo + 120), (struct _RECTL *)&gZero);
  if ( *(_QWORD *)(gpDispInfo + 120) )
  {
    v33 = *(_QWORD *)(gpDispInfo + 104);
    v34 = 0;
    while ( v33 )
    {
      if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(
                           (HRGN *)(v33 + 72),
                           (struct _RECTL *)(*(_QWORD *)(v33 + 40) + 28LL))
        && (*(_DWORD *)(*(_QWORD *)(v33 + 40) + 24LL) & 1) != 0 )
      {
        v34 = GreCombineRgn(*(HRGN *)(gpDispInfo + 120), *(HRGN *)(gpDispInfo + 120), *(HRGN *)(v33 + 72), 2);
      }
      v35 = 0;
      v36 = (struct HOBJ__ **)(v33 + 80);
      do
      {
        if ( *v36 )
        {
          GreDeleteObject(*v36);
          *v36 = 0LL;
        }
        ++v35;
        ++v36;
      }
      while ( v35 < 0x12 );
      v33 = *(_QWORD *)(v33 + 56);
    }
    *(_DWORD *)(gpDispInfo + 132) = *(_DWORD *)(gpDispInfo + 132) & 0xFFFFFFFE | (v34 == 2);
  }
  if ( (*(_DWORD *)(gpDispInfo + 132) & 1) != 0 )
    v37 = 0LL;
  else
    v37 = *(_QWORD *)(gpDispInfo + 120);
  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(j + 8) + 24LL) + 40LL) + 168LL) = v37;
  }
  *((_BYTE *)gpsi + 7002) = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 14);
  DeviceCaps = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 12);
  *((_BYTE *)gpsi + 7003) = DeviceCaps;
  v41 = *((unsigned __int8 *)gpsi + 7002) * DeviceCaps;
  *((_WORD *)gpsi + 3498) = v41;
  *(_WORD *)(gpDispInfo + 128) = v41;
  if ( v15 )
    *((_DWORD *)gpsi + 1751) |= 1u;
  else
    *((_DWORD *)gpsi + 1751) &= ~1u;
  EnforceColorDependentSettings();
  return 0LL;
}
