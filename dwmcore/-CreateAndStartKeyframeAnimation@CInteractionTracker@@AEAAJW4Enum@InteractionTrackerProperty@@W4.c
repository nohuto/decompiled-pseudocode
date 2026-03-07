__int64 __fastcall CInteractionTracker::CreateAndStartKeyframeAnimation(
        struct CComposition **a1,
        unsigned int a2,
        unsigned int a3,
        const char *a4,
        int a5,
        __int64 *a6)
{
  CScrollKeyframeAnimation *v10; // rax
  CScrollKeyframeAnimation *v11; // rbx
  CScrollPositionKeyframeAnimation *v12; // rax
  __int64 v13; // rbx
  __int128 v15; // xmm0
  int v16; // eax
  unsigned int v17; // r14d
  int v18; // eax
  unsigned int v19; // edi
  __int64 v20[2]; // [rsp+80h] [rbp-69h] BYREF
  _DWORD v21[20]; // [rsp+90h] [rbp-59h] BYREF
  __int128 v22; // [rsp+E0h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+4Fh]

  v20[0] = 0LL;
  if ( a2 == 1 )
  {
    v12 = (CScrollPositionKeyframeAnimation *)DefaultHeap::AllocClear(0x308uLL);
    if ( v12 )
      v12 = CScrollPositionKeyframeAnimation::CScrollPositionKeyframeAnimation(
              v12,
              a1[2],
              (struct CInteractionTracker *)a1);
    Microsoft::WRL::ComPtr<CScrollKeyframeAnimation>::operator=<CScrollPositionKeyframeAnimation>(v20, (__int64)v12);
  }
  else
  {
    if ( a2 != 2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        6244LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
        a4);
    v10 = (CScrollKeyframeAnimation *)DefaultHeap::AllocClear(0x300uLL);
    v11 = v10;
    if ( v10 )
    {
      CScrollKeyframeAnimation::CScrollKeyframeAnimation(v10, a1[2], (struct CInteractionTracker *)a1);
      *(_QWORD *)v11 = &CScrollScaleKeyframeAnimation::`vftable';
    }
    else
    {
      v11 = 0LL;
    }
    Microsoft::WRL::ComPtr<CScrollKeyframeAnimation>::operator=<CScrollScaleKeyframeAnimation>(v20, (__int64)v11);
  }
  v13 = v20[0];
  if ( v20[0] )
  {
    memset_0(v21, 0, 0x60uLL);
    v21[0] = 0;
    v21[12] = a5;
    v15 = *(_OWORD *)a4;
    v21[1] = 65543;
    v21[13] = 65543;
    v22 = v15;
    v21[2] = 1065353216;
    v21[6] = 3;
    v21[14] = 1065353216;
    v21[18] = 1;
    v16 = CKeyframeAnimation::Initialize(v13, a1, a2, a3);
    v17 = v16;
    if ( v16 >= 0 )
    {
      v18 = CInteractionTracker::RegisterIndirectTargetsForBoundTrackers(a1, v13, a2);
      v19 = v18;
      if ( v18 >= 0 )
      {
        *a6 = v13;
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1895,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
          (const char *)(unsigned int)v18);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        return v19;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x188B,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
        (const char *)(unsigned int)v16);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      return v17;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1868,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
