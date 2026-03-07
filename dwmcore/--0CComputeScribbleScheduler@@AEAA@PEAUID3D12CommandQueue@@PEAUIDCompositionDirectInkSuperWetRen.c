CComputeScribbleScheduler *__fastcall CComputeScribbleScheduler::CComputeScribbleScheduler(
        CComputeScribbleScheduler *this,
        struct ID3D12CommandQueue *a2,
        struct IDCompositionDirectInkSuperWetRenderer *a3,
        struct CLegacySwapChain *a4)
{
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct ID3D12CommandQueue *))a2->lpVtbl->AddRef)(a2);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = a4;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkSuperWetRenderer *))(*(_QWORD *)a3 + 8LL))(a3);
  return this;
}
