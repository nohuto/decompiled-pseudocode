/*
 * XREFs of ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x180058F14
 * Callers:
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z @ 0x180058EA0 (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18007B1C0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCDrawingContext@@W4.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180082850 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180088830 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCPreComputeConte.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z @ 0x1800926DC (-UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062AA8 (--2@YAPEAX_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18009DA14 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800C1370 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E3DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CThreadContext::RegisterGraphWalkRoot(void *a1)
{
  _QWORD *Value; // rbx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rdx
  int v5; // ebx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rdx
  unsigned int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v8 = operator new(0x118uLL);
    Value = v8;
    if ( v8 )
    {
      *v8 = 0LL;
      v8[1] = 0LL;
      v8[2] = 0LL;
      v8[3] = 0LL;
      v8[4] = 0LL;
      v8[5] = 0LL;
      v8[6] = 0LL;
      v8[7] = 0LL;
      v8[8] = 0LL;
      v8[9] = 0LL;
      v8[10] = 0LL;
      v8[11] = 0LL;
      v8[12] = 0LL;
      v8[13] = 0LL;
      v8[14] = 0LL;
      v8[15] = 0LL;
      v8[16] = 0LL;
      v8[17] = 0LL;
      v8[18] = 0LL;
      v8[19] = 0LL;
      v8[20] = 0LL;
      v8[21] = 0LL;
      v8[22] = 0LL;
      v8[23] = 0LL;
      v8[24] = 0LL;
      v8[25] = 0LL;
      v8[26] = 0LL;
      v8[27] = 0LL;
      v8[28] = 0LL;
      v8[29] = 0LL;
      v8[30] = 0LL;
      v8[31] = 0LL;
      v8[32] = 0LL;
      v8[33] = 0LL;
      v8[34] = 0LL;
    }
    else
    {
      Value = 0LL;
    }
    if ( !Value )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x42u, 0LL);
      v10 = 106LL;
      goto LABEL_18;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
  }
  if ( (*Value & 2) != 0 )
    v3 = *(_QWORD *)(*Value & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v3 = *Value & 1LL;
  v4 = 0LL;
  if ( v3 )
  {
    while ( a1 != (void *)CPtrArrayBase::operator[](Value, v4) )
    {
      v4 = v7 + 1;
      if ( v4 >= v3 )
        goto LABEL_5;
    }
    v5 = -2147467260;
    v10 = 115LL;
  }
  else
  {
LABEL_5:
    v5 = CPtrArrayBase::InsertAt((CPtrArrayBase *)Value, (unsigned __int64)a1, v3);
    if ( v5 >= 0 )
      return 0LL;
    v10 = 119LL;
  }
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
    (const char *)(unsigned int)v5,
    v11);
  return (unsigned int)v5;
}
