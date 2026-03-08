/*
 * XREFs of CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a6417a357a345f1ca7153e0f2978444f___ @ 0x180206DB0
 * Callers:
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIUnknown@@PEAUComputeScribbleLatencyData@@@Z @ 0x1802019CC (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0qx_EventWriteTransfer @ 0x1801E4EBC (McTemplateU0qx_EventWriteTransfer.c)
 */

char *__fastcall CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a6417a357a345f1ca7153e0f2978444f___(
        PSRWLOCK SRWLock,
        _QWORD *a2)
{
  __int64 v4; // rcx
  PVOID Ptr; // r8
  _QWORD *v6; // rdx
  int v7; // eax
  char *v8; // rbx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  AcquireSRWLockExclusive(SRWLock);
  Ptr = SRWLock[3].Ptr;
  if ( Ptr )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      McTemplateU0qx_EventWriteTransfer(v4, &EVTDESC_COMPUTESCRIBBLE_FENCEWAIT, LODWORD(SRWLock[6].Ptr), SRWLock[3].Ptr);
      Ptr = SRWLock[3].Ptr;
    }
    if ( LOBYTE(SRWLock[4].Ptr) )
      v6 = SRWLock[1].Ptr;
    else
      v6 = SRWLock[2].Ptr;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, PVOID))(*(_QWORD *)*a2 + 120LL))(*a2, v6[3], Ptr);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        52LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblesynchronizer.cpp",
        (const char *)(unsigned int)v7,
        v10);
  }
  v8 = (char *)SRWLock[3].Ptr + 1;
  LOBYTE(SRWLock[4].Ptr) = 0;
  SRWLock[3].Ptr = v8;
  ReleaseSRWLockExclusive(SRWLock);
  return v8;
}
