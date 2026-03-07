__int64 __fastcall CDDisplayRenderTarget::CheckOcclusionState(CDDisplaySwapChain **this)
{
  unsigned int v2; // ebx
  void **v3; // rsi
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  v2 = 142213121;
  if ( *((_DWORD *)this - 4654) )
  {
    if ( *((_DWORD *)this - 4653) )
    {
      v3 = (void **)(this - 2319);
      if ( (unsigned __int64)*(this - 2319) - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v4 = CDDisplayRenderTarget::TryEnsureSwapChain((CDDisplayRenderTarget *)(this - 2340));
        if ( v4 == -2147023728 )
        {
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
            v3,
            0LL);
        }
        else if ( v4 != -2003304309 && v4 != 142213121 )
        {
          if ( v4 < 0 )
          {
            v2 = v4;
            MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x140u, 0LL);
          }
          else
          {
            v6 = CDDisplaySwapChain::CheckOcclusionState(*(this - 2317));
            v2 = v6;
            if ( v6 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x13Bu, 0LL);
          }
        }
      }
    }
  }
  CDDisplayRenderTarget::CheckForOcclusionChange((CDDisplayRenderTarget *)(this - 2340), v2);
  return v2;
}
