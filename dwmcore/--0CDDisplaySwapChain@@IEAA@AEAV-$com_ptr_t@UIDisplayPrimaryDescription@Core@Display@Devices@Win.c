__int64 __fastcall CDDisplaySwapChain::CDDisplaySwapChain(
        __int64 a1,
        __int64 *a2,
        struct CD3DDevice **a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        struct RenderTargetInfo *a8)
{
  const struct RenderTargetInfo *v9; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  SIZE_T size_of; // rax
  _QWORD *v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx

  *(_QWORD *)(a1 + 8) = &CDDisplaySwapChain::`vbtable'{for `ISwapChain'};
  v9 = a8;
  *(_QWORD *)(a1 + 48) = &CDDisplaySwapChain::`vbtable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 568) = &CInk::`vbtable'{for `IContent'};
  *(_QWORD *)(a1 + 592) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  COverlaySwapChainBase::COverlaySwapChainBase(
    (COverlaySwapChainBase *)a1,
    *a3,
    v9,
    *(_DWORD *)(a5 + 80),
    *(_DWORD *)(a5 + 84),
    *(struct _LUID *)v9);
  *(_QWORD *)a1 = &CDDisplaySwapChain::`vftable'{for `IOverlaySwapChain'};
  *(_QWORD *)(a1 + 16) = &CDDisplaySwapChain::`vftable'{for `CMILCOMBaseWeakRef'};
  *(_QWORD *)(a1 + 40) = &CDDisplaySwapChain::`vftable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 216) = &CDDisplaySwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(a1 + 224) = &CDDisplaySwapChain::`vftable'{for `IDDisplayEventListener'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 8) + 4LL) + a1 + 8) = &CDDisplaySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 8) + 8LL) + a1 + 8) = &CDDisplaySwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 8) + 12LL) + a1 + 8) = &CDDisplaySwapChain::`vftable'{for `IDeviceResource'};
  v13 = *(int *)(*(_QWORD *)(a1 + 8) + 4LL);
  *(_DWORD *)(v13 + a1 + 4) = v13 - 536;
  v14 = *(int *)(*(_QWORD *)(a1 + 8) + 8LL);
  *(_DWORD *)(v14 + a1 + 4) = v14 - 552;
  v15 = *(int *)(*(_QWORD *)(a1 + 8) + 12LL);
  *(_DWORD *)(v15 + a1 + 4) = v15 - 576;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v17 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v17 = v17;
  v17[1] = v17;
  *(_QWORD *)(a1 + 256) = v17;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  v18 = (__int64 *)(a1 + 400);
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_DWORD *)(a1 + 392) = -1;
  *(_DWORD *)(a1 + 396) = -1;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = *(_QWORD *)a7;
  *(_DWORD *)(a1 + 440) = *(_DWORD *)(a7 + 8);
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_DWORD *)(a1 + 444) = 0;
  *(_BYTE *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_DWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  v19 = *a2;
  *a2 = 0LL;
  v20 = *(_QWORD *)(a1 + 272);
  *(_QWORD *)(a1 + 272) = v19;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  DDisplayTaskPoolResources::operator=(a1 + 280, a4);
  DDisplayTargetResources::operator=(a1 + 312, a5);
  if ( v18 != a6 )
  {
    v21 = *v18;
    *v18 = *a6;
    v22 = a6[1];
    *a6 = v21;
    v23 = *(_QWORD *)(a1 + 408);
    *(_QWORD *)(a1 + 408) = v22;
    v24 = a6[2];
    a6[1] = v23;
    v25 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v24;
    a6[2] = v25;
  }
  a8 = (struct RenderTargetInfo *)(a1 + 224);
  if ( (_QWORD)xmmword_1803E32D0 == *((_QWORD *)&xmmword_1803E32D0 + 1) )
  {
    std::vector<IDDisplayEventListener *>::_Emplace_reallocate<IDDisplayEventListener * const &>(
      (const void **)&xmmword_1803E32C0 + 1,
      (_BYTE *)xmmword_1803E32D0,
      &a8);
  }
  else
  {
    *(_QWORD *)xmmword_1803E32D0 = a1 + 224;
    *(_QWORD *)&xmmword_1803E32D0 = xmmword_1803E32D0 + 8;
  }
  return a1;
}
