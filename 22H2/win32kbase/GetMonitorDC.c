/*
 * XREFs of GetMonitorDC @ 0x1C003B0E0
 * Callers:
 *     UserGetMonitorDC @ 0x1C0022638 (UserGetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C0070940 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     IsGreSelectRedirectionBitmapSupported @ 0x1C0008A90 (IsGreSelectRedirectionBitmapSupported.c)
 *     GreSetDCOrg @ 0x1C0022940 (GreSetDCOrg.c)
 *     GreCreateRectRgnIndirect @ 0x1C00357D0 (GreCreateRectRgnIndirect.c)
 *     GreGetBounds @ 0x1C0037E80 (GreGetBounds.c)
 *     GreSetDCOwnerEx @ 0x1C0038F20 (GreSetDCOwnerEx.c)
 *     GreSelectVisRgnShared @ 0x1C003A270 (GreSelectVisRgnShared.c)
 *     GreOffsetRgn @ 0x1C003A600 (GreOffsetRgn.c)
 *     IsSpbCheckDceSupported @ 0x1C003AC1C (IsSpbCheckDceSupported.c)
 *     GreIsRendering @ 0x1C003AC50 (GreIsRendering.c)
 *     GreCombineRgn @ 0x1C003ACD0 (GreCombineRgn.c)
 *     IsGreHintDCWndSupported @ 0x1C003E614 (IsGreHintDCWndSupported.c)
 *     CreateCacheDC @ 0x1C006B8B0 (CreateCacheDC.c)
 *     IsGetStyleWindowSupported @ 0x1C006BAD8 (IsGetStyleWindowSupported.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C007040C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C0070490 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 *     GetMonitorRect @ 0x1C0071134 (GetMonitorRect.c)
 *     IntersectRect @ 0x1C0071DE4 (IntersectRect.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0071F64 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     GreGetDCOrgEx @ 0x1C0072240 (GreGetDCOrgEx.c)
 *     GreSetRectRgn @ 0x1C0080E90 (GreSetRectRgn.c)
 *     IsGetRedirectionBitmapSupported @ 0x1C009A5CC (IsGetRedirectionBitmapSupported.c)
 *     GreCopyVisRgn @ 0x1C00BBBB0 (GreCopyVisRgn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetMonitorDC(__int64 a1, struct tagMONITOR *a2, int a3)
{
  __int64 *i; // rbx
  int v7; // eax
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r15
  int v14; // eax
  HDC v15; // rcx
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  HRGN MonitorRegionForDpi; // rax
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // r8
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int128 v29; // xmm0
  HDC v30; // rcx
  struct HOBJ__ *RectRgnIndirect; // rax
  __int128 v32; // [rsp+30h] [rbp-20h] BYREF
  __int128 v33; // [rsp+40h] [rbp-10h] BYREF

  v32 = 0LL;
  while ( 2 )
  {
    for ( i = *(__int64 **)(gpDispInfo + 24); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 0x401000) == 0 && !(unsigned int)GreIsRendering((HDC)i[1]) && (struct tagMONITOR *)i[11] == a2 )
      {
        if ( (i[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 && qword_1C02566E0 )
          qword_1C02566E0(i);
        if ( (unsigned int)GreSetDCOwnerEx(i[1], 0x80000002, 0, 0) )
        {
          i[2] = *(_QWORD *)(a1 + 16);
          i[3] = *(_QWORD *)(a1 + 24);
          i[4] = *(_QWORD *)(a1 + 32);
          i[9] = *(_QWORD *)(a1 + 72);
          i[10] = *(_QWORD *)(a1 + 80);
          v7 = *(_DWORD *)(a1 + 64) & 0x947F9 | 0x1002;
          *((_DWORD *)i + 16) = v7;
          v8 = *(_QWORD *)(a1 + 40);
          if ( v8 > 1 )
          {
            RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
            i[5] = (__int64)RectRgnIndirect;
            SetMonitorRegion(a2, (HRGN)RectRgnIndirect, *(HRGN *)(a1 + 40));
            v7 = *((_DWORD *)i + 16);
          }
          else
          {
            i[5] = v8;
          }
          v9 = 0LL;
          if ( (v7 & 0x4000) == 0 || (int)IsGetStyleWindowSupported() < 0 )
            goto LABEL_44;
          v10 = i[2];
          if ( qword_1C02566B0 )
            v9 = (_QWORD *)qword_1C02566B0(v10, 2848LL);
          if ( v9 )
          {
            if ( (*(_BYTE *)(v9[5] + 26LL) & 0x20) == 0 && (int)IsGetRedirectionBitmapSupported(v10) >= 0 )
            {
              v13 = qword_1C0256690 ? qword_1C0256690(v9, v11, v12) : 0LL;
              if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
              {
                v14 = (int)qword_1C0255AA8;
                v15 = (HDC)i[1];
                if ( qword_1C0255AA8 )
                {
                  v14 = qword_1C0255AA8(v15, v13);
                  v15 = (HDC)i[1];
                }
                if ( !v14 )
                  GreSelectVisRgnShared(v15, 0LL, 1);
              }
            }
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            GreOffsetRgn(ghrgnGDC, *(_DWORD *)(v9[5] + 88LL), *(_DWORD *)(v9[5] + 92LL));
            CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
            MonitorRegionForDpi = GetMonitorRegionForDpi(a2, CurrentThreadCompositedDpi);
            if ( !(unsigned int)GreCombineRgn(ghrgnGDC, ghrgnGDC, MonitorRegionForDpi, 1) )
              GreSetRectRgn(ghrgnGDC, 0);
            GreOffsetRgn(ghrgnGDC, -*(_DWORD *)(v9[5] + 88LL), -*(_DWORD *)(v9[5] + 92LL));
            GreSelectVisRgnShared((HDC)i[1], ghrgnGDC, 2);
            GreGetDCOrgEx(*(HDC *)(a1 + 8));
            if ( a3 )
            {
              v18 = v9[5];
              v19 = *(_DWORD *)(v18 + 92);
              LODWORD(v18) = 2 * *(_DWORD *)(v18 + 88);
              LODWORD(v32) = v18 + v32;
              DWORD2(v32) += v18;
              HIDWORD(v32) += 2 * v19;
              DWORD1(v32) += 2 * v19;
              v33 = *(_OWORD *)GetMonitorRect(&v33, a2);
              IntersectRect(&v32, &v32, &v33);
              v20 = v9[5];
              v21 = -*(_DWORD *)(v20 + 92);
              v22 = -*(_DWORD *)(v20 + 88);
              DWORD2(v32) -= *(_DWORD *)(v20 + 88);
              v23 = v22 + v32;
              HIDWORD(v32) += v21;
              v24 = v21 + DWORD1(v32);
              LODWORD(v32) = v22 + v32;
              DWORD1(v32) += v21;
            }
            else
            {
              v24 = DWORD1(v32);
              v23 = v32;
            }
            GreSetDCOrg((HDC)i[1], v23, v24, &v32);
            GreGetBounds((HDC)i[1], 0LL, 5);
          }
          else
          {
LABEL_44:
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            SetMonitorRegion(a2, ghrgnGDC, ghrgnGDC);
            GreSelectVisRgnShared((HDC)i[1], ghrgnGDC, 2);
            v29 = *(_OWORD *)GetMonitorRect(&v33, a2);
            v33 = v29;
            if ( a3 )
              v32 = v29;
            else
              GreGetDCOrgEx(*(HDC *)(a1 + 8));
            HIDWORD(v32) -= DWORD1(v33);
            DWORD2(v32) -= v33;
            v30 = (HDC)i[1];
            LODWORD(v32) = v32 - v33;
            DWORD1(v32) -= DWORD1(v33);
            GreSetDCOrg(v30, v32, SDWORD1(v32), &v32);
          }
          if ( (int)IsGreHintDCWndSupported() >= 0 && qword_1C0255AC8 )
            qword_1C0255AC8(i[1], *(_QWORD *)i[2], 0LL, 0LL, 0);
          if ( v9 && (*(_BYTE *)(v9[5] + 26LL) & 8) != 0 && (int)IsGreHintDCWndSupported() >= 0 && qword_1C0255AC8 )
            qword_1C0255AC8(
              i[1],
              *(_QWORD *)i[2],
              *v9,
              (*(_BYTE *)(v9[5] + 27LL) & 2) == 0,
              (*(_WORD *)(v9[5] + 42LL) & 0x2FFF) == 669);
          --gnDCECount;
          if ( a3 )
          {
            *((_DWORD *)i + 16) |= 0x80000000;
            i[9] = 0LL;
            i[10] = PsGetCurrentProcessWin32Process(v25);
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
            *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
          }
          return i[1];
        }
      }
    }
    if ( CreateCacheDC(0LL, *(_DWORD *)(a1 + 64) & 0x4000 | 0x802u, a2) )
      continue;
    return 0LL;
  }
}
