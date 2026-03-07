void __fastcall CComputeScribbleSynchronizer::EndRenderOperation(
        CComputeScribbleSynchronizer *this,
        struct CD3DDevice *a2,
        __int64 a3)
{
  __int64 v6; // rdx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0qx_EventWriteTransfer(
      (__int64)this,
      &EVTDESC_COMPUTESCRIBBLE_FENCESIGNAL,
      *((unsigned int *)this + 12),
      a3);
  v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_BYTE *)a2 + 1507) = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)a2 + 28) + 152LL))(
         *((_QWORD *)a2 + 28),
         v6,
         a3);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      60LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblesynchronizer.cpp",
      (const char *)(unsigned int)v7,
      v8);
}
