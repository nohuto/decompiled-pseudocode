/*
 * XREFs of ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A898
 * Callers:
 *     GreSetBrushOrg @ 0x1C004562C (GreSetBrushOrg.c)
 *     GreGetLayout @ 0x1C0045FB4 (GreGetLayout.c)
 *     GreDrawStream @ 0x1C0083A60 (GreDrawStream.c)
 *     NtGdiAlphaBlend @ 0x1C00851E0 (NtGdiAlphaBlend.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C008C890 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     GreGetTextFaceW @ 0x1C0097620 (GreGetTextFaceW.c)
 *     NtGdiModifyWorldTransform @ 0x1C0098420 (NtGdiModifyWorldTransform.c)
 *     ulGetFontData @ 0x1C009B3E8 (ulGetFontData.c)
 *     GreGetCharSet @ 0x1C009B770 (GreGetCharSet.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C009BA88 (GreGetOutlineTextMetricsInternalW.c)
 *     GreExtTextOutRect @ 0x1C00AA21C (GreExtTextOutRect.c)
 *     GrePolyTextOutW @ 0x1C00AA89C (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C00AAE5C (GreExtTextOutWInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00AAFE8 (GreCreateCompatibleBitmapInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C00AE0CC (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00AF5A0 (GreSetDIBitsToDeviceInternal.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00B29E0 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreStretchBltInternal @ 0x1C00B4D10 (GreStretchBltInternal.c)
 *     GreGetAppClipBox @ 0x1C00B6A6C (GreGetAppClipBox.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00B80F8 (-vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00B8374 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00D5DD0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     GreTransformPoints @ 0x1C00FA65C (GreTransformPoints.c)
 *     GreGetBoundsRect @ 0x1C00FC958 (GreGetBoundsRect.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00FF638 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     NtGdiSetMetaRgn @ 0x1C0100DF0 (NtGdiSetMetaRgn.c)
 *     GreMaskBlt @ 0x1C010979C (GreMaskBlt.c)
 *     NtGdiLineTo @ 0x1C01453C0 (NtGdiLineTo.c)
 *     NtGdiSetFontXform @ 0x1C014D8A0 (NtGdiSetFontXform.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C027B5FC (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C027BB94 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02ADF94 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CFBDC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C013A9D0 (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026EBE0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  HDC v2; // rax
  int v4; // esi
  __int64 v5; // rax
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rcx

  v2 = a2;
  v4 = 1;
  LOBYTE(a2) = 1;
  v5 = HmgLockEx(v2, a2, *((unsigned int *)this + 3));
  *(_QWORD *)this = v5;
  if ( v5 )
  {
    ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
    v8 = *(_QWORD *)this;
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) == 1 )
    {
      *(_QWORD *)(v8 + 2136) = ThreadCurrentObj;
      *(_DWORD *)(*(_QWORD *)this + 2144LL) = 0xFFFF;
      v8 = *(_QWORD *)this;
    }
    else if ( *(struct UMPDOBJ **)(v8 + 2136) != ThreadCurrentObj )
    {
      XDCOBJ::LogUmpdCallbackStatus(this, ThreadCurrentObj);
LABEL_10:
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
LABEL_11:
      *(_QWORD *)this = 0LL;
      return;
    }
    if ( *((_DWORD *)this + 3) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v8 + 48) + 40LL) & 0x8000) == 0 )
        goto LABEL_10;
      v9 = *(_DWORD *)(v8 + 2120);
      if ( v9 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_10;
    }
    else if ( *(_DWORD *)(v8 + 2120) )
    {
      *(_DWORD *)(v8 + 2120) = 0;
    }
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
    {
      if ( XDCOBJ::SaveAttributesHelper(this) )
      {
        *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
        *((_DWORD *)this + 2) = 1;
      }
      else
      {
        v4 = 0;
      }
    }
    v10 = *(_QWORD *)this;
    if ( !v4 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v10 + 520) & 4) != 0 )
      DC::vMarkTransformDirty((DC *)v10);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
}
