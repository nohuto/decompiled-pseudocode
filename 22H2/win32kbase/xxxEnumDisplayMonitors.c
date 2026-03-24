/*
 * XREFs of xxxEnumDisplayMonitors @ 0x1C0070940
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1C00708A0 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     LookupDC @ 0x1C00226F0 (LookupDC.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002BEF4 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ThreadUnlock1 @ 0x1C002F910 (ThreadUnlock1.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0033100 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ReleaseCacheDC @ 0x1C0037B20 (ReleaseCacheDC.c)
 *     GreUnlockVisRgn @ 0x1C0039F20 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C003A140 (GreLockVisRgn.c)
 *     GetMonitorDC @ 0x1C003B0E0 (GetMonitorDC.c)
 *     GreGetClipBox @ 0x1C003B540 (GreGetClipBox.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0070D00 (TransformRectBetweenCoordinateSpaces.c)
 *     GetMonitorRect @ 0x1C0071134 (GetMonitorRect.c)
 *     IntersectRect @ 0x1C0071DE4 (IntersectRect.c)
 *     GetScreenRectForDpi @ 0x1C0071EE0 (GetScreenRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0071F64 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     GreGetDCPoint @ 0x1C00722C0 (GreGetDCPoint.c)
 *     GreIntersectClipRect @ 0x1C0072520 (GreIntersectClipRect.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C00726B8 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxEnumDisplayMonitors(
        HDC a1,
        __int64 a2,
        __int64 (__fastcall *a3)(struct tagMONITOR *, HDC, struct tagRECT *, __int64),
        __int64 a4,
        int a5)
{
  unsigned int v5; // ebx
  __int64 *v8; // r13
  __int64 v9; // rdi
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __int64 v11; // rdx
  int v12; // r8d
  unsigned int v13; // r15d
  struct tagMONITOR *i; // rdi
  HDC MonitorDC; // r12
  __int64 v16; // rdx
  int v17; // r8d
  int v18; // eax
  unsigned int v19; // eax
  __int64 *v21; // rax
  int v22; // ecx
  struct tagMONITOR *v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+30h] [rbp-A1h]
  __int64 v28; // [rsp+48h] [rbp-89h]
  struct tagTHREADINFO *v29; // [rsp+50h] [rbp-81h]
  __int128 v30; // [rsp+58h] [rbp-79h] BYREF
  __int64 v31; // [rsp+68h] [rbp-69h]
  __int128 v32; // [rsp+70h] [rbp-61h] BYREF
  _BYTE v33[16]; // [rsp+80h] [rbp-51h] BYREF
  _BYTE v34[16]; // [rsp+90h] [rbp-41h] BYREF
  _BYTE v35[16]; // [rsp+A0h] [rbp-31h] BYREF
  _BYTE v36[16]; // [rsp+B0h] [rbp-21h] BYREF
  __int128 v37; // [rsp+C0h] [rbp-11h] BYREF
  struct tagRECT v38; // [rsp+D0h] [rbp-1h] BYREF

  v5 = 0;
  v31 = 0LL;
  v29 = gptiCurrent;
  v25 = 0LL;
  v28 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v30 = 0LL;
  if ( !a1 )
  {
    CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
    v37 = *(_OWORD *)GetScreenRectForDpi(v33, CurrentThreadCompositedDpi);
    if ( a2 && !(unsigned int)IntersectRect(&v37, &v37, a2) )
      return 1LL;
    goto LABEL_3;
  }
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, (int)a3);
  v21 = LookupDC((__int64)a1, 1);
  v8 = v21;
  if ( !v21 )
  {
LABEL_47:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v11, v12);
    return v5;
  }
  v28 = v21[2];
  if ( (v21[8] & 0x4000) != 0 && qword_1C02566B0 )
    v9 = qword_1C02566B0(v21[2], 2848LL);
  if ( (unsigned int)GreGetClipBox(a1, (int *)&v37, 0) == 1 )
    goto LABEL_46;
  if ( v9
    && (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) == 0x29D
    && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
  {
    TransformRectBetweenCoordinateSpaces(&v37, &v37, 0LL, v9);
  }
  if ( a2 && !(unsigned int)IntersectRect(&v37, &v37, a2) )
  {
LABEL_46:
    v5 = 1;
    goto LABEL_47;
  }
  if ( v9 )
  {
    if ( (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) != 0x29D )
    {
      GreGetDCPoint(a1);
      v22 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 88LL);
      LODWORD(v25) = v22;
      v24 = *(_QWORD *)(v9 + 40);
      v11 = *(unsigned int *)(v24 + 92);
      HIDWORD(v25) = *(_DWORD *)(v24 + 92);
      goto LABEL_37;
    }
  }
  else
  {
    GreGetDCPoint(a1);
  }
  v22 = 0;
  v11 = 0LL;
LABEL_37:
  LODWORD(v37) = v22 + v37;
  DWORD2(v37) += v22;
  HIDWORD(v37) += v11;
  DWORD1(v37) += v11;
LABEL_3:
  v13 = 1;
  for ( i = *(struct tagMONITOR **)(gpDispInfo + 104); i; i = (struct tagMONITOR *)*((_QWORD *)i + 7) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)i + 5) + 24LL) & 1) == 0 )
      continue;
    v32 = *(_OWORD *)GetMonitorRect(v34, i);
    if ( !(unsigned int)IntersectRect(&v38, &v37, &v32) )
      continue;
    if ( a1 )
    {
      v23 = AdjustDisplayMonitor(i, &v38);
      MonitorDC = (HDC)GetMonitorDC((__int64)v8, v23, v23 != i);
      if ( !MonitorDC )
        goto LABEL_47;
      v38.top -= HIDWORD(v25);
      v38.left -= v25;
      v38.bottom -= HIDWORD(v25);
      v38.right -= v25;
      GreIntersectClipRect(MonitorDC, v38.bottom);
    }
    else
    {
      MonitorDC = 0LL;
    }
    *(_QWORD *)&v30 = *((_QWORD *)v29 + 52);
    *((_QWORD *)v29 + 52) = &v30;
    *((_QWORD *)&v30 + 1) = i;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v35);
    _InterlockedAdd((volatile signed __int32 *)i + 2, 1u);
    if ( a1 )
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v16, v17);
    if ( a5 )
    {
      v19 = a3(i, MonitorDC, &v38, a4);
      goto LABEL_17;
    }
    if ( qword_1C0256708 )
      v18 = qword_1C0256708();
    else
      v18 = -1073741637;
    if ( v18 < 0 )
      goto LABEL_18;
    if ( qword_1C0256710 )
    {
      v19 = qword_1C0256710(*(_QWORD *)i, MonitorDC, &v38, a4, a3);
LABEL_17:
      v13 = v19;
      goto LABEL_18;
    }
    v13 = 0;
LABEL_18:
    if ( !ThreadUnlock1()
      || (CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v36),
          (*((_BYTE *)qword_1C024FA38 + dword_1C024FA40 * (unsigned int)(unsigned __int16)*(_DWORD *)i + 25) & 1) != 0) )
    {
      v13 = 0;
    }
    if ( MonitorDC )
      ReleaseCacheDC((__int64)MonitorDC, 0, v12);
    if ( !v13 )
      return 0LL;
    if ( a1 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), v11, v12);
      v8 = LookupDC((__int64)a1, 1);
      if ( !v8 || v8[2] != v28 )
        goto LABEL_47;
    }
  }
  if ( a1 )
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v11, v12);
  return v13;
}
