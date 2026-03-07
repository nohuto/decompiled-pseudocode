__int64 __fastcall CDDASwapChain::Create(
        struct CD3DDevice *a1,
        struct IDXGISwapChainDWM1 *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4,
        struct IDDASwapChain **a5)
{
  CDDASwapChain *v9; // rax
  __int64 v10; // rcx
  CDDASwapChain *v11; // rbx
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rcx
  struct IDDASwapChain *v15; // rcx
  CDDASwapChain *v16; // rcx
  CDDASwapChain *v18; // [rsp+30h] [rbp-18h] BYREF

  v18 = 0LL;
  *a5 = 0LL;
  v9 = (CDDASwapChain *)DefaultHeap::Alloc(0xD8uLL);
  if ( v9 )
    v9 = CDDASwapChain::CDDASwapChain(v9, a2, a3, a4);
  wil::com_ptr_t<CDDASwapChain,wil::err_returncode_policy>::operator=(
    (volatile signed __int32 **)&v18,
    (volatile signed __int32 *)v9);
  v11 = v18;
  if ( v18 )
  {
    v13 = CDDASwapChain::Initialize(v18, a1);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1Du, 0LL);
    }
    else
    {
      v15 = v11;
      v11 = 0LL;
      v18 = 0LL;
      *a5 = v15;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x1Bu, 0LL);
  }
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 4, 0xFFFFFFFF) == 1 )
    {
      CMILRefCountImpl::AddReference((CDDASwapChain *)((char *)v11 + 16));
      (*(void (__fastcall **)(CDDASwapChain *))(*(_QWORD *)v18 + 64LL))(v18);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 4, 0xFFFFFFFF) == 1 )
      {
        v16 = v18;
        --*((_DWORD *)v11 + 4);
        (*(void (__fastcall **)(CDDASwapChain *, __int64))(*(_QWORD *)v16 + 56LL))(v16, 1LL);
      }
    }
  }
  return v12;
}
