/*
 * XREFs of ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180108E20
 * Callers:
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180108CA0 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFor.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@AEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAUHINSTANCE__@@@Z @ 0x1801090B8 (--0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@AEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@.c)
 *     ?Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z @ 0x1801092C8 (-Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::Create(
        struct CD3DDevice *a1,
        const unsigned __int16 *a2,
        const struct _UNSIGNED_RATIO *a3,
        struct IRenderTargetBitmap *a4,
        void *a5,
        struct ILegacyRemotingSwapChain **a6)
{
  __int64 v10; // rcx
  HMODULE LibraryA; // rbx
  CLegacyRemotingSwapChain *v12; // rax
  __int64 v13; // rcx
  CLegacyRemotingSwapChain *v14; // rax
  CLegacyRemotingSwapChain *v15; // rsi
  CMILRefCountImpl *v16; // rdi
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx

  *a6 = 0LL;
  LibraryA = LoadLibraryA("rdsdwmdr.dll");
  if ( LibraryA )
  {
    v12 = (CLegacyRemotingSwapChain *)DefaultHeap::Alloc(0x120uLL);
    if ( v12
      && (v14 = CLegacyRemotingSwapChain::CLegacyRemotingSwapChain(v12, a1, a3, a4, a5, LibraryA), (v15 = v14) != 0LL) )
    {
      v16 = (CLegacyRemotingSwapChain *)((char *)v14 + 16);
      CMILRefCountImpl::AddReference((CLegacyRemotingSwapChain *)((char *)v14 + 16));
      v17 = CLegacyRemotingSwapChain::Initialize(v15, a2);
      v19 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x24u, 0LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v16, 0xFFFFFFFF) == 1 )
        {
          CMILRefCountImpl::AddReference(v16);
          (*(void (__fastcall **)(CLegacyRemotingSwapChain *))(*(_QWORD *)v15 + 136LL))(v15);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v16, 0xFFFFFFFF) == 1 )
          {
            --*(_DWORD *)v16;
            (*(void (__fastcall **)(CLegacyRemotingSwapChain *, __int64))(*(_QWORD *)v15 + 128LL))(v15, 1LL);
          }
        }
      }
      else
      {
        *a6 = v15;
      }
    }
    else
    {
      v19 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x22u, 0LL);
    }
  }
  else
  {
    v19 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024809, 0x2Au, 0LL);
  }
  return v19;
}
