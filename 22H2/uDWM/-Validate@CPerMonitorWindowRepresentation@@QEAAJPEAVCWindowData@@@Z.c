/*
 * XREFs of ?Validate@CPerMonitorWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x1800BEEDC
 * Callers:
 *     ?UpdatePerMonitorWindowRepresentation@CTopLevelWindow@@AEAAJXZ @ 0x18001F554 (-UpdatePerMonitorWindowRepresentation@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001116C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001FEE0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027148 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002A9A8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800334D0 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180037690 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     ?EnsureRootVisuals@CPerMonitorWindowRepresentation@@AEAAJXZ @ 0x1800BE99C (-EnsureRootVisuals@CPerMonitorWindowRepresentation@@AEAAJXZ.c)
 *     ?EnsureSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@PEAVCWindowData@@PEAPEAUSecondaryRepresentation@1@@Z @ 0x1800BEA6C (-EnsureSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@PEAVCWindow.c)
 *     ?RemoveSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800BEDFC (-RemoveSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CPerMonitorWindowRepresentation::Validate(CPerMonitorWindowRepresentation *this, RECT *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  __int64 v6; // rcx
  int AllDisplaysNoRef; // eax
  __int64 i; // r14
  __int64 v9; // rcx
  HMONITOR v10; // rdi
  bool v11; // r15
  RECT *v12; // r12
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int RectangleGeometry; // eax
  CBaseObject *v17; // rcx
  int v18; // eax
  CBaseObject *v19; // r15
  int updated; // eax
  __int64 v21; // rcx
  struct tagPOINT *v22; // rcx
  CBaseObject *v23; // rbx
  int v24; // eax
  int v25; // eax
  CBaseObject *v27[2]; // [rsp+30h] [rbp-49h] BYREF
  RECT v28; // [rsp+40h] [rbp-39h]
  __int128 v29; // [rsp+50h] [rbp-29h] BYREF
  int v30; // [rsp+60h] [rbp-19h]
  int v31; // [rsp+64h] [rbp-15h]
  unsigned int v32; // [rsp+68h] [rbp-11h]
  struct tagPOINT v33; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT rcDst; // [rsp+78h] [rbp-1h] BYREF
  RECT rcSrc1; // [rsp+90h] [rbp+17h] BYREF

  v2 = 0;
  if ( (a2[21].bottom & 2) != 0 )
  {
    v5 = CPerMonitorWindowRepresentation::EnsureRootVisuals(this);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x53u);
      return v2;
    }
    v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21);
    if ( !v6 )
      return v2;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v28 = 0LL;
    v29 = 0LL;
    AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(v6, (__int64)&v29);
    v2 = AllDisplaysNoRef;
    if ( AllDisplaysNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x5Bu);
      goto LABEL_35;
    }
    for ( i = 0LL; (unsigned int)i < v32; i = (unsigned int)(i + 1) )
    {
      v9 = *(_QWORD *)(v29 + 8 * i);
      v10 = *(HMONITOR *)(v9 + 16);
      if ( !v10 )
        continue;
      rcSrc1 = *(RECT *)(v9 + 56);
      v11 = rcSrc1.left == a2[21].left && rcSrc1.top == a2[21].top;
      v12 = a2 + 3;
      rcDst = 0LL;
      IntersectRect(&rcDst, &rcSrc1, a2 + 3);
      if ( v11 )
      {
        v28 = rcSrc1;
      }
      else if ( !IsRectEmpty(&rcDst) )
      {
        v27[0] = 0LL;
        v18 = CPerMonitorWindowRepresentation::EnsureSecondaryRepresentation(this, v10, (struct CWindowData *)a2, v27);
        v2 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x7Du);
          goto LABEL_35;
        }
        v19 = v27[0];
        *(_DWORD *)(*((_QWORD *)v27[0] + 1) + 56LL) = rcDst.left - v12->left;
        *(_DWORD *)(*((_QWORD *)v19 + 1) + 60LL) = rcDst.top - a2[3].top;
        *(_DWORD *)(*((_QWORD *)v19 + 1) + 64LL) = rcDst.right - v12->left;
        *(_DWORD *)(*((_QWORD *)v19 + 1) + 68LL) = rcDst.bottom - a2[3].top;
        *(_DWORD *)(*((_QWORD *)v19 + 1) + 40LL) = 0;
        *(_DWORD *)(*((_QWORD *)v19 + 1) + 44LL) = 0;
        *(_DWORD *)(*((_QWORD *)v19 + 1) + 48LL) = rcDst.right - rcDst.left;
        *(_DWORD *)(*((_QWORD *)v19 + 1) + 52LL) = rcDst.bottom - rcDst.top;
        updated = CThumbnailVisual::UpdateProperties(
                    *(CThumbnailVisual **)(*((_QWORD *)v19 + 1) + 88LL),
                    *(_DWORD *)(*((_QWORD *)v19 + 1) + 36LL));
        v2 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x89u);
          goto LABEL_35;
        }
        v21 = *((_QWORD *)v19 + 1);
        v33.x = rcDst.left - v12->left;
        v22 = *(struct tagPOINT **)(v21 + 88);
        v33.y = rcDst.top - a2[3].top;
        CVisual::SetOffset(v22, &v33);
        continue;
      }
      v13 = CPerMonitorWindowRepresentation::RemoveSecondaryRepresentation(this, v10);
      v2 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x91u);
        goto LABEL_35;
      }
    }
    if ( !*((_DWORD *)this + 14) )
    {
      v25 = CVisualProxy::SetClip(*(CVisualProxy **)(*((_QWORD *)this + 2) + 16LL), 0LL);
      v2 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0xACu);
      goto LABEL_35;
    }
    v14 = v28.left - a2[3].left;
    v15 = v28.top - a2[3].top;
    v27[0] = 0LL;
    RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                          v14,
                          v15,
                          v28.right - v28.left,
                          v28.bottom - v28.top,
                          v27);
    v2 = RectangleGeometry;
    if ( RectangleGeometry >= 0 )
    {
      v23 = v27[0];
      v24 = CVisualProxy::SetClip(*(CVisualProxy **)(*((_QWORD *)this + 2) + 16LL), v27[0]);
      v2 = v24;
      if ( v24 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0xA8u);
      if ( !v23 )
        goto LABEL_35;
      v17 = v23;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0xA6u);
      v17 = v27[0];
      if ( !v27[0] )
        goto LABEL_35;
    }
    CBaseObject::Release(v17);
LABEL_35:
    DynArrayImpl<0>::~DynArrayImpl<0>(&v29);
  }
  return v2;
}
