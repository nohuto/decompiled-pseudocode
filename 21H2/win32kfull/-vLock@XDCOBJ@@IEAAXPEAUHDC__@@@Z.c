/*
 * XREFs of ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C
 * Callers:
 *     GreGetCharSet @ 0x1C001C490 (GreGetCharSet.c)
 *     GreGetTextFaceW @ 0x1C001C7E0 (GreGetTextFaceW.c)
 *     GreStretchDIBitsInternal @ 0x1C0029B2C (GreStretchDIBitsInternal.c)
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C002E3F0 (GreSetDIBitsToDeviceInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0039BB0 (NtGdiAlphaBlend.c)
 *     GreDrawStream @ 0x1C003C990 (GreDrawStream.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00408D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00419B4 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00421B8 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0042384 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     GreMaskBlt @ 0x1C0087168 (GreMaskBlt.c)
 *     GreGetAppClipBox @ 0x1C00889A8 (GreGetAppClipBox.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0089934 (-vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     GreExtTextOutWInternal @ 0x1C008ABC0 (GreExtTextOutWInternal.c)
 *     GreExtTextOutRect @ 0x1C008AD4C (GreExtTextOutRect.c)
 *     GreGetBoundsRect @ 0x1C008B388 (GreGetBoundsRect.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0090C1C (GreCreateCompatibleBitmapInternal.c)
 *     GreGetLayout @ 0x1C00C1400 (GreGetLayout.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00DBA70 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     GreSaveDCInternal @ 0x1C00DE7E8 (GreSaveDCInternal.c)
 *     GreTransformPoints @ 0x1C00E2F9C (GreTransformPoints.c)
 *     GrePolyTextOutW @ 0x1C00E3570 (GrePolyTextOutW.c)
 *     NtGdiModifyWorldTransform @ 0x1C00E4720 (NtGdiModifyWorldTransform.c)
 *     NtGdiSetMetaRgn @ 0x1C00EC010 (NtGdiSetMetaRgn.c)
 *     NtGdiSetFontXform @ 0x1C013A9E0 (NtGdiSetFontXform.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02791A8 (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C02796D8 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02AC700 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     PtiCurrentShared @ 0x1C00418E4 (PtiCurrentShared.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C012CAC0 (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 *     ?Feature_3190902075__private_IsEnabled@@YAHXZ @ 0x1C015D760 (-Feature_3190902075__private_IsEnabled@@YAHXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026C8D4 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  HDC v2; // rax
  __int64 v4; // rax
  struct _W32THREAD *v5; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rax
  bool v10; // zf

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = HmgLockEx(v2, a2, *((unsigned int *)this + 3));
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    v5 = (struct _W32THREAD *)PtiCurrentShared();
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(v5);
    v7 = *(_QWORD *)this;
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) == 1 )
    {
      *(_QWORD *)(v7 + 2128) = ThreadCurrentObj;
      *(_DWORD *)(*(_QWORD *)this + 2136LL) = 0xFFFF;
    }
    else if ( *(struct UMPDOBJ **)(v7 + 2128) != ThreadCurrentObj )
    {
      XDCOBJ::LogUmpdCallbackStatus(this, ThreadCurrentObj);
LABEL_10:
      v9 = *(_QWORD *)this;
LABEL_11:
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 12));
      *(_QWORD *)this = 0LL;
      return;
    }
    if ( *((_DWORD *)this + 3) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 48LL) + 40LL) & 0x8000) == 0 )
        goto LABEL_10;
      v8 = *(_DWORD *)(*(_QWORD *)this + 2112LL);
      if ( v8 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_10;
    }
    else if ( (unsigned int)Feature_3190902075__private_IsEnabled() && *(_DWORD *)(*(_QWORD *)this + 2112LL) )
    {
      *(_DWORD *)(*(_QWORD *)this + 2112LL) = 0;
    }
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
    {
      v10 = !XDCOBJ::SaveAttributesHelper(this);
      v9 = *(_QWORD *)this;
      if ( v10 )
        goto LABEL_11;
      *(_DWORD *)(v9 + 44) |= 2u;
      *((_DWORD *)this + 2) = 1;
    }
    if ( (*(_DWORD *)(*(_QWORD *)this + 520LL) & 4) != 0 )
      DC::vMarkTransformDirty(*(DC **)this);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
}
