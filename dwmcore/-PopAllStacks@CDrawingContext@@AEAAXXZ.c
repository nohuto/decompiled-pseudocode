void __fastcall CDrawingContext::PopAllStacks(CDrawingContext *this)
{
  int v2; // eax
  __int64 v3; // r15
  int v4; // eax
  __int64 v5; // r14
  int v6; // eax
  int v7; // eax
  unsigned int i; // esi
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rsi
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rdi
  unsigned int v26; // eax
  __int64 v27; // rdi
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rdi
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // rcx
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // eax
  unsigned int v43; // ecx
  void *v44; // [rsp+60h] [rbp+30h] BYREF

  *((_DWORD *)this + 92) = 0;
  v2 = *((_DWORD *)this + 94);
  v3 = 64LL;
  if ( v2 == 10 )
  {
    v24 = *((_DWORD *)this + 98);
    v25 = 64LL;
    if ( v24 > 0x40 )
      v25 = v24;
    if ( (unsigned __int64)(3 * v25) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v25) <= *((_DWORD *)this + 93) )
    {
      v44 = 0LL;
      v31 = HrMalloc(0x10uLL, (unsigned int)v25, &v44);
      if ( v31 >= 0 )
      {
        operator delete(*((void **)this + 48));
        *((_QWORD *)this + 48) = v44;
        *((_DWORD *)this + 93) = v25;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 98) = 0;
    v4 = 0;
  }
  else
  {
    v4 = v2 + 1;
  }
  *((_DWORD *)this + 94) = v4;
  v5 = 8LL;
  *((_DWORD *)this + 100) = 0;
  v6 = *((_DWORD *)this + 102);
  if ( v6 == 8 )
  {
    v29 = *((_DWORD *)this + 106);
    v30 = 8LL;
    if ( v29 > 8 )
      v30 = v29;
    if ( (unsigned __int64)(3 * v30) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v30) <= *((_DWORD *)this + 101) )
    {
      v44 = 0LL;
      v33 = HrMalloc(0x44uLL, (unsigned int)v30, &v44);
      if ( v33 >= 0 )
      {
        operator delete(*((void **)this + 52));
        *((_QWORD *)this + 52) = v44;
        *((_DWORD *)this + 101) = v30;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 106) = 0;
    v7 = 0;
  }
  else
  {
    v7 = v6 + 1;
  }
  *((_DWORD *)this + 102) = v7;
  *((_DWORD *)this + 108) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize((char *)this + 432);
  *((_DWORD *)this + 116) = 0;
  CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Optimize((char *)this + 464);
  while ( *((_DWORD *)this + 130) )
    CDrawingContext::PopLayerInternal(this);
  for ( i = 0; i < *((_DWORD *)this + 146); ++i )
  {
    v35 = *(_QWORD *)(*((_QWORD *)this + 70) + 16LL * i);
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  *((_DWORD *)this + 146) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 560, 16LL);
  v9 = *((_QWORD *)this + 83);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    *((_QWORD *)this + 83) = 0LL;
  }
  *((_DWORD *)this + 192) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 744, 8LL);
  *((_DWORD *)this + 206) = 0;
  *((_DWORD *)this + 216) = 0;
  v10 = *((_DWORD *)this + 218);
  if ( v10 == 10 )
  {
    v26 = *((_DWORD *)this + 222);
    v27 = 64LL;
    if ( v26 > 0x40 )
      v27 = v26;
    if ( (unsigned __int64)(3 * v27) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v27) <= *((_DWORD *)this + 217) )
    {
      v44 = 0LL;
      v36 = HrMalloc(0x1CuLL, (unsigned int)v27, &v44);
      if ( v36 >= 0 )
      {
        operator delete(*((void **)this + 110));
        *((_QWORD *)this + 110) = v44;
        *((_DWORD *)this + 217) = v27;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 222) = 0;
    v11 = 0;
  }
  else
  {
    v11 = v10 + 1;
  }
  *((_DWORD *)this + 218) = v11;
  if ( 0xD37A6F4DE9BD37A7uLL * ((__int64)(*((_QWORD *)this + 113) - *((_QWORD *)this + 112)) >> 3) )
    detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 896,
      0LL);
  v12 = (__int64 *)((char *)this + 2760);
  v13 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 346) - *((_QWORD *)this + 345)) >> 3);
  if ( v13 )
    detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::clear_region(
      v12,
      0LL,
      v13);
  *((_DWORD *)this + 804) = 0;
  v14 = *((_DWORD *)this + 806);
  if ( v14 == 8 )
  {
    v21 = *((_DWORD *)this + 810);
    v22 = 8LL;
    LODWORD(v12) = -1;
    if ( v21 > 8 )
      v22 = v21;
    if ( (unsigned __int64)(3 * v22) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v22) <= *((_DWORD *)this + 805) )
    {
      v44 = 0LL;
      v38 = HrMalloc(0x10uLL, (unsigned int)v22, &v44);
      if ( v38 >= 0 )
      {
        operator delete(*((void **)this + 404));
        *((_QWORD *)this + 404) = v44;
        *((_DWORD *)this + 805) = v22;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 810) = 0;
    v15 = 0;
  }
  else
  {
    v15 = v14 + 1;
  }
  *((_DWORD *)this + 806) = v15;
  *((_DWORD *)this + 796) = 0;
  v16 = *((_DWORD *)this + 798);
  if ( v16 == 8 )
  {
    v23 = *((_DWORD *)this + 802);
    if ( v23 > 8 )
      v5 = v23;
    if ( (unsigned __int64)(3 * v5) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v5) <= *((_DWORD *)this + 797) )
    {
      v44 = 0LL;
      v40 = HrMalloc(0x10uLL, (unsigned int)v5, &v44);
      if ( v40 >= 0 )
      {
        operator delete(*((void **)this + 400));
        *((_QWORD *)this + 400) = v44;
        *((_DWORD *)this + 797) = v5;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 802) = 0;
    v17 = 0;
  }
  else
  {
    v17 = v16 + 1;
  }
  *((_DWORD *)this + 798) = v17;
  *((_DWORD *)this + 812) = 0;
  CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Optimize((char *)this + 3248);
  *((_DWORD *)this + 848) = 0;
  v19 = *((_DWORD *)this + 850);
  if ( v19 == 10 )
  {
    v28 = *((_DWORD *)this + 854);
    if ( v28 > 0x40 )
      v3 = v28;
    if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v3) <= *((_DWORD *)this + 849) )
    {
      v44 = 0LL;
      v42 = HrMalloc(0x10uLL, (unsigned int)v3, &v44);
      if ( v42 >= 0 )
      {
        operator delete(*((void **)this + 426));
        *((_QWORD *)this + 426) = v44;
        *((_DWORD *)this + 849) = v3;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 854) = 0;
    v20 = 0;
  }
  else
  {
    v20 = v19 + 1;
  }
  *((_DWORD *)this + 850) = v20;
  *((_DWORD *)this + 820) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize((char *)this + 3280);
}
