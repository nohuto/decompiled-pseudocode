/*
 * XREFs of ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C011E658
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C00C7464 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     GreDeleteDC @ 0x1C0007A60 (GreDeleteDC.c)
 *     HMDestroyObject @ 0x1C0007ED0 (HMDestroyObject.c)
 *     DrvIsUniformSpaceMapping @ 0x1C000FCA0 (DrvIsUniformSpaceMapping.c)
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     GreCreateDisplayDC @ 0x1C003B650 (GreCreateDisplayDC.c)
 *     IntersectRect @ 0x1C0071334 (IntersectRect.c)
 *     GreGetDeviceCaps @ 0x1C0091480 (GreGetDeviceCaps.c)
 *     ?GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00B1E08 (-GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00B3B10 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1C00B3E28 (-GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     ?GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1C00B3E88 (-GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall SetMonitorData(struct tagMONITOR *Monitor, unsigned int a2)
{
  int v3; // edi
  __int64 v4; // r13
  __int16 MonitorLogicalDPI; // bp
  HDEV v6; // rsi
  int v7; // r12d
  int v8; // r15d
  HDC DisplayDC; // r14
  int v10; // eax
  char *v11; // r14
  _DWORD *v12; // rax
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rcx
  HDEV v18; // rax
  int *v19; // r8
  int v20; // eax
  int v21; // eax
  _DWORD *v22; // rdx
  __int64 v23; // rdx
  __int16 MonitorPhysicalDPI; // [rsp+20h] [rbp-78h]
  int v26; // [rsp+24h] [rbp-74h]
  __int64 v27; // [rsp+38h] [rbp-60h]
  __int128 v28; // [rsp+40h] [rbp-58h]

  v3 = 0;
  v26 = 1;
  v4 = *(_QWORD *)(gpDispInfo + 16);
  MonitorLogicalDPI = 96;
  MonitorPhysicalDPI = 96;
  v27 = v4 + 56LL * a2;
  v6 = *(HDEV *)(v27 + 40);
  v7 = 0;
  v8 = 0;
  v28 = *(_OWORD *)(((unsigned int)DrvIsUniformSpaceMapping(v4) != 0 ? 0x14 : 0) + v27 + 56);
  DisplayDC = GreCreateDisplayDC(v6, 0, 0);
  v10 = v28;
  if ( DisplayDC )
  {
    if ( (GreGetDeviceCaps(DisplayDC, 94) & 0x4000) != 0 )
    {
      v26 = 0;
    }
    else
    {
      MonitorLogicalDPI = GetMonitorLogicalDPI((__int64)v6);
      MonitorPhysicalDPI = GetMonitorPhysicalDPI((__int64)v6);
    }
    GreDeleteDC((__int64)DisplayDC);
    if ( !v26 )
      goto LABEL_10;
    v10 = v28;
  }
  if ( !DWORD1(v28) && !v10 )
    v3 = 1;
LABEL_10:
  if ( !Monitor )
  {
    if ( v3 )
    {
      Monitor = gpMonitorCached;
      v8 = 1;
      gpMonitorCached = 0LL;
    }
    else
    {
      Monitor = CreateMonitor();
      v7 = 1;
    }
    if ( !Monitor )
      return 0LL;
  }
  v11 = (char *)Win32AllocPoolZInit(0x64uLL, 1886872661LL);
  if ( !v11 )
  {
    if ( v8 )
    {
      gpMonitorCached = Monitor;
    }
    else if ( v7 )
    {
      HMDestroyObject(Monitor);
    }
    return 0LL;
  }
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 68LL) = MonitorLogicalDPI;
  if ( (unsigned int)DrvIsUniformSpaceMapping(v4) )
    MonitorLogicalDPI = *(_WORD *)(v4 + 32);
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 64LL) = MonitorLogicalDPI;
  *((_WORD *)Monitor + 112) = MonitorPhysicalDPI;
  v12 = (_DWORD *)*((_QWORD *)Monitor + 39);
  if ( v12 )
  {
    --*v12;
    v13 = (_DWORD *)*((_QWORD *)Monitor + 39);
    if ( !*v13 )
      Win32FreePool((__int64)v13);
    *((_QWORD *)Monitor + 39) = 0LL;
  }
  GetMonitorDpiInfo(
    (__int64)v6,
    v3,
    (struct tagRECT *)(*((_QWORD *)Monitor + 5) + 28LL),
    (struct _DPI_INFORMATION *)(v11 + 4));
  *(_DWORD *)v11 = 1;
  *((_QWORD *)Monitor + 39) = v11;
  v14 = *((_QWORD *)Monitor + 5);
  v15 = *(_DWORD *)(v14 + 24);
  if ( v26 )
    v16 = v15 | 1;
  else
    v16 = v15 & 0xFFFFFFFE;
  *(_DWORD *)(v14 + 24) = v16;
  v17 = *((_QWORD *)Monitor + 5);
  if ( *(_OWORD *)(v17 + 28) != v28 )
  {
    *(_DWORD *)(v17 + 44) += v28 - *(_DWORD *)(v17 + 28);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) += DWORD1(v28) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) += DWORD2(v28) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 36LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) += HIDWORD(v28) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL);
    v17 = *((_QWORD *)Monitor + 5);
  }
  *(_DWORD *)(v17 + 28) = v28;
  *(_QWORD *)(*((_QWORD *)Monitor + 5) + 32LL) = *(_QWORD *)((char *)&v28 + 4);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL) = HIDWORD(v28);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 72LL) = *(_DWORD *)(v27 + 56);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 76LL) = *(_DWORD *)(v27 + 60);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 80LL) = *(_DWORD *)(v27 + 64);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 84LL) = *(_DWORD *)(v27 + 68);
  v18 = v6;
  if ( !v26 )
    v18 = *(HDEV *)v4;
  v19 = (int *)*((_QWORD *)Monitor + 5);
  *((_QWORD *)Monitor + 29) = v18;
  *((_QWORD *)Monitor + 30) = v6;
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
  if ( v3 )
  {
    v23 = gpDispInfo;
    *(_QWORD *)(*(_QWORD *)gpDispInfo + 8LL) = *((_QWORD *)Monitor + 6);
    *(_QWORD *)(v23 + 96) = Monitor;
  }
  *(_DWORD *)(struct HDEV__ *)(*((_QWORD *)Monitor + 5) + 60LL) = v6[661];
  return Monitor;
}
