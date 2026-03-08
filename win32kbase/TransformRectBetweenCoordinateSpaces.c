/*
 * XREFs of TransformRectBetweenCoordinateSpaces @ 0x1C00152E0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C003AE40 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     Is_MonitorFromRectSupported @ 0x1C000A0C4 (Is_MonitorFromRectSupported.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1C000C860 (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C000C99C (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     Is_GetTopLevelWindowSupported @ 0x1C000CBB0 (Is_GetTopLevelWindowSupported.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0015510 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IntersectRect @ 0x1C003B560 (IntersectRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0041AF0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     IsDpiAwarenessBoundaryInParentChain @ 0x1C0168404 (IsDpiAwarenessBoundaryInParentChain.c)
 *     TransformOffscreenAdjacentRect @ 0x1C016845C (TransformOffscreenAdjacentRect.c)
 *     HMValidateSharedHandleNoRip @ 0x1C0247060 (HMValidateSharedHandleNoRip.c)
 */

__int64 __fastcall TransformRectBetweenCoordinateSpaces(
        struct tagRECT *a1,
        const struct tagRECT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // r12d
  unsigned int v10; // esi
  struct tagRECT v11; // xmm1
  unsigned int v12; // edi
  __int64 v13; // rax
  __int64 v14; // r15
  int top; // r13d
  int v16; // eax
  int v17; // r14d
  LONG v18; // r15d
  __int64 v19; // rax
  __int64 v21; // rax
  int v22; // eax
  unsigned int bottom; // ecx
  int v24; // eax
  LONG v25; // eax
  LONG v26; // eax
  LONG v27; // eax
  LONG v28; // eax
  int v29; // ebx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // [rsp+30h] [rbp-89h]
  int left; // [rsp+40h] [rbp-79h]
  int right; // [rsp+50h] [rbp-69h]
  __int128 v38; // [rsp+60h] [rbp-59h] BYREF
  struct tagRECT v39; // [rsp+70h] [rbp-49h] BYREF
  struct tagRECT v40; // [rsp+80h] [rbp-39h] BYREF
  struct tagRECT v41; // [rsp+90h] [rbp-29h] BYREF
  struct tagRECT v42; // [rsp+A0h] [rbp-19h] BYREF
  struct tagRECT v43; // [rsp+B0h] [rbp-9h] BYREF

  v4 = 0LL;
  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2, 0LL);
  if ( a4 )
    v10 = *(_DWORD *)(*(_QWORD *)(a4 + 40) + 288LL);
  else
    v10 = W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3);
  v11 = *a2;
  v34 = 0;
  v12 = 0;
  v42 = 0LL;
  v43 = v11;
  v41 = 0LL;
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v10 >> 8)) & 0x1FF) == 0
    || (unsigned int)IsRectEmptyInl(a2) && !a2->left && !a2->top )
  {
    *a1 = v11;
    return 0LL;
  }
  if ( a3 && (int)Is_GetTopLevelWindowSupported() >= 0 )
  {
    v13 = qword_1C02D7028 ? qword_1C02D7028(a3) : 0LL;
    if ( v13 )
    {
      if ( v13 != a3 )
      {
        if ( (unsigned int)IsDpiAwarenessBoundaryInParentChain(a3) )
        {
          v21 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(a3 + 40) + 256LL));
          if ( v21 )
            return TransformRectBetweenCoordinateSpacesPerMonitor(
                     (__int64)a1,
                     (__int64)a2,
                     CurrentThreadDpiAwarenessContext,
                     v10,
                     v21);
        }
      }
    }
  }
  v14 = *((_QWORD *)gpDispInfo + 13);
  if ( !v14 )
    goto LABEL_63;
  top = v41.top;
  right = v41.right;
  left = v41.left;
  do
  {
    v40 = 0LL;
    v38 = (__int128)*ExpandedMonitorRect(&v39, (struct tagMONITOR *)v14, v10);
    if ( (unsigned int)IntersectRect(&v40, &v38, a2) )
    {
      if ( v34 )
      {
        v22 = left;
        bottom = v41.bottom;
        if ( left >= v40.left )
          v22 = v40.left;
        left = v22;
        if ( top >= v40.top )
          top = v40.top;
        *(_QWORD *)&v41.left = __PAIR64__(top, v22);
        v24 = right;
        if ( right <= v40.right )
          v24 = v40.right;
        right = v24;
        if ( v41.bottom <= v40.bottom )
          bottom = v40.bottom;
        *(_QWORD *)&v41.right = __PAIR64__(bottom, v24);
      }
      else
      {
        v41 = v40;
        top = v40.top;
        right = v40.right;
        left = v40.left;
      }
      v12 |= TransformRectBetweenCoordinateSpacesPerMonitor(
               (__int64)&v40,
               (__int64)&v40,
               CurrentThreadDpiAwarenessContext,
               v10,
               v14);
      if ( !v34 )
      {
        v16 = 1;
        v42 = v40;
        v34 = 1;
        goto LABEL_20;
      }
      v25 = v42.left;
      if ( v42.left >= v40.left )
        v25 = v40.left;
      v42.left = v25;
      v26 = v42.top;
      if ( v42.top >= v40.top )
        v26 = v40.top;
      v42.top = v26;
      v27 = v42.right;
      if ( v42.right <= v40.right )
        v27 = v40.right;
      v42.right = v27;
      v28 = v42.bottom;
      if ( v42.bottom <= v40.bottom )
        v28 = v40.bottom;
      v42.bottom = v28;
    }
    v16 = v34;
LABEL_20:
    v14 = *(_QWORD *)(v14 + 56);
  }
  while ( v14 );
  if ( v16 )
  {
    v17 = v43.right;
    v18 = v43.left;
    v19 = *(_QWORD *)&v41.left - *(_QWORD *)&v43.left;
    if ( *(_QWORD *)&v41.left == *(_QWORD *)&v43.left )
      v19 = *(_QWORD *)&v41.right - *(_QWORD *)&v43.right;
    if ( v19 )
    {
      v29 = v43.top;
      if ( left <= v43.left )
      {
        v31 = right;
      }
      else
      {
        *(_QWORD *)&v40.right = __PAIR64__(v43.bottom, left);
        *(_QWORD *)&v40.left = *(_QWORD *)&v43.left;
        v30 = TransformOffscreenAdjacentRect(&v41, &v42, &v40, CurrentThreadDpiAwarenessContext, v10);
        top = v41.top;
        v12 |= v30;
        v31 = v41.right;
      }
      if ( v31 < v17 )
      {
        *(_QWORD *)&v40.left = __PAIR64__(v29, v31);
        *(_QWORD *)&v40.right = __PAIR64__(v43.bottom, v17);
        v32 = TransformOffscreenAdjacentRect(&v41, &v42, &v40, CurrentThreadDpiAwarenessContext, v10);
        top = v41.top;
        v12 |= v32;
      }
      if ( top > v29 )
      {
        *(_QWORD *)&v40.left = __PAIR64__(v29, v18);
        *(_QWORD *)&v40.right = __PAIR64__(top, v17);
        v12 |= TransformOffscreenAdjacentRect(&v41, &v42, &v40, CurrentThreadDpiAwarenessContext, v10);
      }
      if ( v41.bottom < v43.bottom )
      {
        *(_QWORD *)&v43.left = __PAIR64__(v41.bottom, v18);
        v43.right = v17;
        v33 = TransformOffscreenAdjacentRect(&v41, &v42, &v43, CurrentThreadDpiAwarenessContext, v10);
        goto LABEL_67;
      }
    }
    goto LABEL_25;
  }
LABEL_63:
  if ( (int)Is_MonitorFromRectSupported() >= 0 )
  {
    if ( qword_1C02D71C8 )
      v4 = qword_1C02D71C8(a2, 2LL, v10);
    v33 = TransformRectBetweenCoordinateSpacesPerMonitor(
            (__int64)&v42,
            (__int64)a2,
            CurrentThreadDpiAwarenessContext,
            v10,
            v4);
LABEL_67:
    v12 |= v33;
  }
LABEL_25:
  *a1 = v42;
  return v12;
}
