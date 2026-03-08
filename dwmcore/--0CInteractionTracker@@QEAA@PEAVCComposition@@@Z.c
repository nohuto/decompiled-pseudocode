/*
 * XREFs of ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x18022CFAC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003A2A4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x180213ACC (-RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z.c)
 *     ??0InteractionSourceManager@@QEAA@XZ @ 0x18022D18C (--0InteractionSourceManager@@QEAA@XZ.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x180232A6C (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 *     ?Initialize@InteractionSourceManager@@QEAAXPEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x180271248 (-Initialize@InteractionSourceManager@@QEAAXPEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 */

CInteractionTracker *__fastcall CInteractionTracker::CInteractionTracker(
        CInteractionTracker *this,
        struct CComposition *a2)
{
  InteractionSourceManager *v2; // rbx
  int v4; // xmm0_4
  __int64 v5; // rcx

  v2 = (CInteractionTracker *)((char *)this + 200);
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CInteractionTracker::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 34) = 1065353216;
  *((_DWORD *)this + 35) = 1065353216;
  *((_DWORD *)this + 36) = 1065353216;
  *((_DWORD *)this + 43) = 1014350479;
  InteractionSourceManager::InteractionSourceManager((CInteractionTracker *)((char *)this + 200));
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  `vector constructor iterator'(
    (char *)this + 368,
    8LL,
    2LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)this + 384,
    8LL,
    4LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_DWORD *)this + 126) = 0;
  v4 = *((_DWORD *)this + 34);
  *((_QWORD *)this + 80) = 0LL;
  v5 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 131) = v4;
  *((_DWORD *)this + 132) = v4;
  *((_DWORD *)this + 136) = 1117126656;
  *((_DWORD *)this + 137) = 1130430464;
  *((_DWORD *)this + 138) = 1104674816;
  *((_DWORD *)this + 139) = 1123680256;
  *((_DWORD *)this + 140) = 1102053376;
  *((_DWORD *)this + 141) = 1106247680;
  *((_DWORD *)this + 142) = 1177280512;
  *((_DWORD *)this + 143) = 1028443341;
  *((_DWORD *)this + 144) = 1084227584;
  CExpressionManager::RegisterInteractionTrackerNotification(*(CExpressionManager **)(v5 + 424), this);
  *((_DWORD *)this + 29) = 1028443341;
  *((_DWORD *)this + 30) = 1028443341;
  *((float *)this + 32) = (float)CCommonRegistryData::MousewheelAnimationDurationMs / 1000.0;
  *((float *)this + 33) = (float)CCommonRegistryData::MousewheelAnimationDurationMs / 1000.0;
  CInteractionTracker::UpdatePositionRoundingSuggestion(this);
  InteractionSourceManager::Initialize(v2, *((struct CComposition **)this + 2), this);
  return this;
}
