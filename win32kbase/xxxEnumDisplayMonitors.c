/*
 * XREFs of xxxEnumDisplayMonitors @ 0x1C003AE40
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1C003AD10 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00152E0 (TransformRectBetweenCoordinateSpaces.c)
 *     GreGetClipBox @ 0x1C001AB40 (GreGetClipBox.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C003A33C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003A360 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     GetScreenRectForDpi @ 0x1C003A9AC (GetScreenRectForDpi.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C003B2D0 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly.c)
 *     ThreadUnlock1 @ 0x1C003B460 (ThreadUnlock1.c)
 *     IntersectRect @ 0x1C003B560 (IntersectRect.c)
 *     GetCurrentThreadCompositedDpi @ 0x1C003B5D4 (GetCurrentThreadCompositedDpi.c)
 *     LookupDC @ 0x1C003C0C0 (LookupDC.c)
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 *     GetMonitorRect @ 0x1C003DBB4 (GetMonitorRect.c)
 *     ReleaseCacheDC @ 0x1C003F210 (ReleaseCacheDC.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0041AF0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004F968 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreGetDCPoint @ 0x1C0053880 (GreGetDCPoint.c)
 *     GreIntersectClipRect @ 0x1C0056F30 (GreIntersectClipRect.c)
 *     GreLockVisRgn @ 0x1C00794E0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C00795D0 (GreUnlockVisRgn.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C00CB114 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxEnumDisplayMonitors(
        HDC a1,
        __int64 a2,
        __int64 (__fastcall *a3)(struct tagMONITOR *, HDC, struct tagRECT *, __int64),
        __int64 a4,
        int a5)
{
  unsigned int v5; // ebx
  __int64 v8; // r13
  __int64 v9; // rdi
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  unsigned int v11; // r15d
  struct tagMONITOR *i; // rdi
  HDC MonitorDC; // r12
  unsigned int v14; // eax
  char v15; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // edx
  struct tagMONITOR *v23; // rax
  __int64 v24; // [rsp+30h] [rbp-D0h]
  __int64 v25; // [rsp+38h] [rbp-C8h]
  __int64 v28; // [rsp+50h] [rbp-B0h]
  struct tagTHREADINFO *v29; // [rsp+58h] [rbp-A8h]
  __int128 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h]
  __m128i v32; // [rsp+80h] [rbp-80h] BYREF
  __int128 v33; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v34[16]; // [rsp+A0h] [rbp-60h] BYREF
  __m128i v35; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v36; // [rsp+C0h] [rbp-40h] BYREF
  PERESOURCE *v37; // [rsp+D0h] [rbp-30h] BYREF
  char v38; // [rsp+F8h] [rbp-8h]
  char v39; // [rsp+100h] [rbp+0h]

  v5 = 0;
  v35 = 0LL;
  v24 = 0LL;
  v36 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v29 = PtiCurrentShared();
  v8 = 0LL;
  v25 = 0LL;
  v9 = 0LL;
  v28 = 0LL;
  if ( !a1 )
  {
    CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
    GetScreenRectForDpi(&v32, CurrentThreadCompositedDpi);
    v35 = v32;
    if ( a2 && !(unsigned int)IntersectRect(&v35, &v35, a2) )
      return 1LL;
    goto LABEL_3;
  }
  GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
  v17 = LookupDC(a1, 1LL);
  v25 = v17;
  v8 = v17;
  if ( !v17 )
  {
LABEL_61:
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
    return v5;
  }
  v28 = *(_QWORD *)(v17 + 16);
  if ( (*(_DWORD *)(v17 + 64) & 0x4000) != 0 && qword_1C02D6C38 )
    v9 = qword_1C02D6C38(*(_QWORD *)(v17 + 16), 2848LL);
  if ( (unsigned int)GreGetClipBox(a1, v35.m128i_i32, 0) == 1 )
    goto LABEL_60;
  if ( v9 )
  {
    v20 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF;
    if ( (_DWORD)v20 == 669 && (W32GetCurrentThreadDpiAwarenessContext(v20, v18, v19) & 0xF) != 2 )
      TransformRectBetweenCoordinateSpaces((struct tagRECT *)&v35, (const struct tagRECT *)&v35, 0LL, v9);
  }
  if ( a2 && !(unsigned int)IntersectRect(&v35, &v35, a2) )
  {
LABEL_60:
    v5 = 1;
    goto LABEL_61;
  }
  if ( v9 )
  {
    if ( (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) != 0x29D )
    {
      GreGetDCPoint(a1);
      v21 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 88LL);
      LODWORD(v24) = v21;
      v22 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 92LL);
      HIDWORD(v24) = v22;
      goto LABEL_48;
    }
  }
  else
  {
    GreGetDCPoint(a1);
  }
  v21 = 0;
  v22 = 0;
LABEL_48:
  v35.m128i_i32[0] += v21;
  v35.m128i_i32[2] += v21;
  v35.m128i_i32[3] += v22;
  v35.m128i_i32[1] += v22;
LABEL_3:
  v11 = 1;
  for ( i = (struct tagMONITOR *)*((_QWORD *)gpDispInfo + 13); i; i = (struct tagMONITOR *)*((_QWORD *)i + 7) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)i + 5) + 24LL) & 1) == 0 )
      continue;
    v33 = *(_OWORD *)GetMonitorRect(v34, i);
    if ( !(unsigned int)IntersectRect(&v36, &v35, &v33) )
      continue;
    if ( a1 )
    {
      v23 = AdjustDisplayMonitor(i, &v36);
      MonitorDC = (HDC)GetMonitorDC(v8, v23, v23 != i);
      if ( !MonitorDC )
        goto LABEL_61;
      v36.top -= HIDWORD(v24);
      v36.left -= v24;
      v36.bottom -= HIDWORD(v24);
      v36.right -= v24;
      GreIntersectClipRect(MonitorDC, v36.bottom);
    }
    else
    {
      MonitorDC = 0LL;
    }
    *(_QWORD *)&v30 = *((_QWORD *)v29 + 52);
    *((_QWORD *)v29 + 52) = &v30;
    *((_QWORD *)&v30 + 1) = i;
    _InterlockedAdd((volatile signed __int32 *)i + 2, 1u);
    if ( a1 )
      GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
    if ( a5 )
    {
      v14 = a3(i, MonitorDC, &v36, a4);
      goto LABEL_16;
    }
    if ( !qword_1C02D6C90 || (int)qword_1C02D6C90() < 0 )
      goto LABEL_17;
    if ( qword_1C02D6C98 )
    {
      v14 = qword_1C02D6C98(*(_QWORD *)i, MonitorDC, &v36, a4, a3);
LABEL_16:
      v11 = v14;
      goto LABEL_17;
    }
    v11 = 0;
LABEL_17:
    SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(&v37);
    if ( !gbInDestroyHandleTableObjects
      && !IS_USERCRIT_OWNED_EXCLUSIVE()
      && (!IS_USERCRIT_OWNED_AT_ALL()
       || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)
       && !tagDomLock::IsLockedShared(&gDomainHandleManagerLock)) )
    {
      __int2c();
    }
    v15 = *((_BYTE *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*(_DWORD *)i + 25) & 1;
    if ( v39 && v38 && v37 )
      ExReleaseResourceAndLeaveCriticalRegion(*v37);
    if ( !ThreadUnlock1() || v15 )
      v11 = 0;
    if ( MonitorDC )
      ReleaseCacheDC(MonitorDC, 0LL);
    if ( !v11 )
      return 0LL;
    if ( a1 )
    {
      GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
      v25 = LookupDC(a1, 1LL);
      v8 = v25;
      if ( !v25 || *(_QWORD *)(v25 + 16) != v28 )
        goto LABEL_61;
    }
    else
    {
      v8 = v25;
    }
  }
  if ( a1 )
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
  return v11;
}
