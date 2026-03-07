__int64 __fastcall CLegacyStereoSwapChain::Create(
        struct CD3DDevice *a1,
        struct _LUID *a2,
        struct IDXGISwapChainDWM1 *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct CLegacyStereoSwapChain **a6)
{
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  CLegacyStereoSwapChain *v13; // rax
  __int64 v14; // rcx
  struct CLegacyStereoSwapChain *v15; // rbx
  unsigned int v17; // [rsp+20h] [rbp-E8h]
  __int64 v18[2]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v19[8]; // [rsp+70h] [rbp-98h] BYREF
  struct DXGI_RATIONAL v20; // [rsp+78h] [rbp-90h]
  unsigned int v21; // [rsp+98h] [rbp-70h]

  v18[0] = 0LL;
  *a6 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, _BYTE *))(*(_QWORD *)a3 + 80LL))(a3, v19);
  v12 = v10;
  if ( v10 < 0 )
  {
    v17 = 26;
    goto LABEL_10;
  }
  v13 = (CLegacyStereoSwapChain *)DefaultHeap::Alloc(0x1C8uLL);
  if ( v13 )
    v13 = CLegacyStereoSwapChain::CLegacyStereoSwapChain(
            v13,
            a1,
            a3,
            a4,
            a5,
            *a2,
            v21,
            a2[1].LowPart,
            a2[1].HighPart,
            v20);
  wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::operator=(v18, (__int64)v13);
  v15 = (struct CLegacyStereoSwapChain *)v18[0];
  if ( v18[0] )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18[0] + 264LL))(v18[0]);
    v12 = v10;
    if ( v10 >= 0 )
    {
      v18[0] = 0LL;
      *a6 = v15;
      goto LABEL_11;
    }
    v17 = 42;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, v17, 0LL);
    goto LABEL_11;
  }
  v12 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x28u, 0LL);
LABEL_11:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v18);
  return v12;
}
