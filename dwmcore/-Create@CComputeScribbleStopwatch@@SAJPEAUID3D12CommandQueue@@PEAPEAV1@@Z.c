/*
 * XREFs of ?Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z @ 0x18020677C
 * Callers:
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1802000E0 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCComputeScribbleStopwatch@@U?$default_delete@VCComputeScribbleStopwatch@@@std@@@std@@QEAA@XZ @ 0x1801FF458 (--1-$unique_ptr@VCComputeScribbleStopwatch@@U-$default_delete@VCComputeScribbleStopwatch@@@std@@.c)
 *     ?Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x1802068EC (-Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z.c)
 */

__int64 __fastcall CComputeScribbleStopwatch::Create(
        struct ID3D12CommandQueue *a1,
        struct CComputeScribbleStopwatch **a2)
{
  struct CComputeScribbleStopwatch *v4; // rax
  struct CComputeScribbleStopwatch *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CComputeScribbleStopwatch *v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = (struct CComputeScribbleStopwatch *)DefaultHeap::Alloc(0x48uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = 0LL;
    *((_DWORD *)v4 + 2) = 0;
    *((_DWORD *)v4 + 3) = 0;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
    *((_BYTE *)v4 + 64) = 0;
    v12 = v4;
    v6 = CComputeScribbleStopwatch::Initialize(v4, a1);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *a2 = v5;
      return 0LL;
    }
    v8 = (unsigned int)v6;
    v9 = 8LL;
  }
  else
  {
    v12 = 0LL;
    v7 = -2147024882;
    v8 = 2147942414LL;
    v9 = 7LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblestopwatch.cpp",
    (const char *)v8);
  std::unique_ptr<CComputeScribbleStopwatch>::~unique_ptr<CComputeScribbleStopwatch>(&v12);
  return v7;
}
