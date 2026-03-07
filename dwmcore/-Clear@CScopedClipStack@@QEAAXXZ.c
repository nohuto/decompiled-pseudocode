void __fastcall CScopedClipStack::Clear(CScopedClipStack *this)
{
  int v2; // edi
  int v3; // eax
  __int64 v4; // rsi
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rbp
  unsigned int v9; // eax
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::clear(this);
  detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::clear((char *)this + 1864);
  v2 = 0;
  *((_DWORD *)this + 580) = 0;
  v3 = *((_DWORD *)this + 582);
  v4 = 8LL;
  if ( v3 == 8 )
  {
    v7 = *((_DWORD *)this + 586);
    v8 = 8LL;
    if ( v7 > 8 )
      v8 = v7;
    if ( (unsigned __int64)(3 * v8) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v8) <= *((_DWORD *)this + 581) )
    {
      v14 = 0LL;
      v10 = HrMalloc(0x10uLL, (unsigned int)v8, &v14);
      if ( v10 >= 0 )
      {
        operator delete(*((void **)this + 292));
        *((_QWORD *)this + 292) = v14;
        *((_DWORD *)this + 581) = v8;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 586) = 0;
    v5 = 0;
  }
  else
  {
    v5 = v3 + 1;
  }
  *((_DWORD *)this + 582) = v5;
  *((_DWORD *)this + 572) = 0;
  v6 = *((_DWORD *)this + 574);
  if ( v6 == 8 )
  {
    v9 = *((_DWORD *)this + 578);
    if ( v9 > 8 )
      v4 = v9;
    if ( (unsigned __int64)(3 * v4) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v4) <= *((_DWORD *)this + 573) )
    {
      v14 = 0LL;
      v12 = HrMalloc(0x10uLL, (unsigned int)v4, &v14);
      if ( v12 >= 0 )
      {
        operator delete(*((void **)this + 288));
        *((_QWORD *)this + 288) = v14;
        *((_DWORD *)this + 573) = v4;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 578) = 0;
  }
  else
  {
    v2 = v6 + 1;
  }
  *((_DWORD *)this + 574) = v2;
}
