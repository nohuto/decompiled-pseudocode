/*
 * XREFs of ?WaitForOperationComplete12@CComputeScribbleSynchronizer@@QEAAJ_K@Z @ 0x180207194
 * Callers:
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIUnknown@@PEAUComputeScribbleLatencyData@@@Z @ 0x1802019CC (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801028E4 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180196B80 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CComputeScribbleSynchronizer::WaitForOperationComplete12(wil::details **this, void *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  DWORD v7; // eax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::ResetEvent(this[5], a2);
  v4 = (*(__int64 (__fastcall **)(_QWORD, void *, wil::details *))(**((_QWORD **)this[2] + 3) + 72LL))(
         *((_QWORD *)this[2] + 3),
         a2,
         this[5]);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = WaitForSingleObjectEx(this[5], 0xFFFFFFFF, 0);
    if ( v7 == 258 )
    {
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x4A,
               (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblesynchronizer.cpp",
               v8);
    }
    else
    {
      if ( v7 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          2602LL,
          (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
          v8);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblesynchronizer.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
