/*
 * XREFs of ?Create@CapturedWindowSWRVisual@@SAJPEAUHWND__@@PEAPEAV1@@Z @ 0x18008E4C8
 * Callers:
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowSWRVisual@@@Z @ 0x180091F04 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006300 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CapturedWindowSWRVisual@@AEAAJPEAUHWND__@@PEAUISecondaryWindowRepresentationChangedListener@@@Z @ 0x18008E718 (-Initialize@CapturedWindowSWRVisual@@AEAAJPEAUHWND__@@PEAUISecondaryWindowRepresentationChangedL.c)
 */

__int64 __fastcall CapturedWindowSWRVisual::Create(HWND a1, struct CapturedWindowSWRVisual **a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // edi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         32LL);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &CapturedWindowSWRVisual::`vftable'{for `CBaseObject'};
    *(_QWORD *)(v4 + 16) = &CapturedWindowSWRVisual::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  }
  else
  {
    v5 = 0LL;
  }
  v10 = (CBaseObject *)v5;
  if ( v5 )
  {
    v7 = CapturedWindowSWRVisual::Initialize(
           (CapturedWindowSWRVisual *)v5,
           a1,
           (struct ISecondaryWindowRepresentationChangedListener *)(v5 + 16));
    v6 = v7;
    if ( v7 >= 0 )
    {
      v10 = 0LL;
      *a2 = (struct CapturedWindowSWRVisual *)v5;
      v5 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x4EDu);
    }
    if ( v5 )
      Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v10);
  }
  else
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4EB,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v10);
  return v6;
}
