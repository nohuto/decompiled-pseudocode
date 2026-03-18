/*
 * XREFs of ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00C7F94
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0063D18 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 *     HMDestroyObject @ 0x1C004E3A0 (HMDestroyObject.c)
 *     GreDeleteDC @ 0x1C00518D0 (GreDeleteDC.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C005201C (--4-$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUta.c)
 *     GreGetDeviceCaps @ 0x1C00642D0 (GreGetDeviceCaps.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0068314 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     IntersectRect @ 0x1C006EC48 (IntersectRect.c)
 *     Win32AllocPoolZInit @ 0x1C00869F0 (Win32AllocPoolZInit.c)
 *     DrvIsUniformSpaceMapping @ 0x1C00B1D90 (DrvIsUniformSpaceMapping.c)
 *     ?GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00C1708 (-GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1C00C2CE4 (-GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     ?GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1C00C2D44 (-GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall SetMonitorData(struct tagMONITOR *Monitor, unsigned int a2)
{
  int v2; // edi
  __int16 MonitorLogicalDPI; // r14
  int v5; // r13d
  __int64 v6; // rcx
  HDEV v7; // rbp
  int v8; // r12d
  int v9; // r15d
  HDC DisplayDC; // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rcx
  _DWORD *v14; // rax
  char *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  HDEV v18; // rax
  int *v19; // r8
  int v20; // eax
  int v21; // eax
  _DWORD *v22; // rdx
  __int16 MonitorPhysicalDPI; // [rsp+20h] [rbp-68h]
  __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int128 v27; // [rsp+38h] [rbp-50h]

  v2 = 0;
  MonitorLogicalDPI = 96;
  v5 = 1;
  v6 = *((_QWORD *)gpDispInfo + 2);
  v25 = v6;
  MonitorPhysicalDPI = 96;
  v26 = v6 + 56LL * a2;
  v7 = *(HDEV *)(v26 + 40);
  v8 = 0;
  v9 = 0;
  v27 = *(_OWORD *)(((unsigned int)DrvIsUniformSpaceMapping(v6) != 0 ? 0x14 : 0) + v26 + 56);
  DisplayDC = GreCreateDisplayDC(v7, 0, 0);
  v11 = (__int64)DisplayDC;
  if ( !DisplayDC
    || ((GreGetDeviceCaps(DisplayDC, 94) & 0x4000) == 0
      ? (MonitorLogicalDPI = GetMonitorLogicalDPI((__int64)v7), MonitorPhysicalDPI = GetMonitorPhysicalDPI((__int64)v7))
      : (v5 = 0),
        GreDeleteDC(v11),
        v5) )
  {
    if ( !(_QWORD)v27 )
      v2 = 1;
  }
  if ( !Monitor )
  {
    if ( v2 )
    {
      Monitor = gpMonitorCached;
      v9 = 1;
      gpMonitorCached = 0LL;
    }
    else
    {
      Monitor = CreateMonitor();
      v8 = 1;
    }
    if ( !Monitor )
      return 0LL;
  }
  v12 = Win32AllocPoolZInit(0x64uLL, 1886872661);
  if ( !v12 )
  {
    if ( v9 )
    {
      gpMonitorCached = Monitor;
    }
    else if ( v8 )
    {
      HMDestroyObject(Monitor);
    }
    return 0LL;
  }
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 64LL) = MonitorLogicalDPI;
  if ( (unsigned int)DrvIsUniformSpaceMapping(v25) )
    MonitorLogicalDPI = *(_WORD *)(v25 + 32);
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 60LL) = MonitorLogicalDPI;
  v13 = *((_QWORD *)Monitor + 5);
  *((_WORD *)Monitor + 36) = MonitorPhysicalDPI;
  *(_WORD *)(v13 + 84) = *(_WORD *)(v26 + 92);
  v14 = (_DWORD *)*((_QWORD *)Monitor + 16);
  if ( v14 )
  {
    --*v14;
    v15 = (char *)*((_QWORD *)Monitor + 16);
    if ( !*(_DWORD *)v15 )
      Win32FreePool(v15);
    *((_QWORD *)Monitor + 16) = 0LL;
  }
  GetMonitorDpiInfo(
    (__int64)v7,
    v2,
    (struct tagRECT *)(*((_QWORD *)Monitor + 5) + 28LL),
    (struct _DPI_INFORMATION *)(v12 + 4));
  *(_DWORD *)v12 = 1;
  *((_QWORD *)Monitor + 16) = v12;
  v16 = *((_QWORD *)Monitor + 5);
  if ( v5 )
    *(_DWORD *)(v16 + 24) |= 1u;
  else
    *(_DWORD *)(v16 + 24) &= ~1u;
  v17 = *((_QWORD *)Monitor + 5);
  if ( *(_OWORD *)(v17 + 28) != v27 )
  {
    *(_DWORD *)(v17 + 44) += v27 - *(_DWORD *)(v17 + 28);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) += DWORD1(v27) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) += DWORD2(v27) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 36LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) += HIDWORD(v27) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL);
    v17 = *((_QWORD *)Monitor + 5);
  }
  *(_DWORD *)(v17 + 28) = v27;
  *(_QWORD *)(*((_QWORD *)Monitor + 5) + 32LL) = *(_QWORD *)((char *)&v27 + 4);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL) = HIDWORD(v27);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 68LL) = *(_DWORD *)(v26 + 56);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 72LL) = *(_DWORD *)(v26 + 60);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 76LL) = *(_DWORD *)(v26 + 64);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 80LL) = *(_DWORD *)(v26 + 68);
  v18 = v7;
  if ( !v5 )
    v18 = *(HDEV *)v25;
  v19 = (int *)*((_QWORD *)Monitor + 5);
  *((_QWORD *)Monitor + 10) = v18;
  *((_QWORD *)Monitor + 11) = v7;
  v20 = v19[11];
  if ( v19[13] < v20 )
  {
    v19[13] = v20;
    v19 = (int *)*((_QWORD *)Monitor + 5);
  }
  v21 = v19[12];
  if ( v19[14] < v21 )
  {
    v19[14] = v21;
    v19 = (int *)*((_QWORD *)Monitor + 5);
  }
  if ( !(unsigned int)IntersectRect(v19 + 11, v19 + 11, v19 + 7) )
  {
    v22 = (_DWORD *)*((_QWORD *)Monitor + 5);
    v22[11] = v22[7];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) = v22[8];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) = v22[9];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) = v22[10];
  }
  if ( v2 )
    tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorPrimary<tagMONITOR>::operator=(
      (_QWORD *)gpDispInfo + 12,
      (__int64)Monitor);
  return Monitor;
}
