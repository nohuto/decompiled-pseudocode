/*
 * XREFs of ?QueryResourceInterface@CChannel@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1801CD330
 * Callers:
 *     ?VisualTargetSetRoot@CChannel@@UEAAJII@Z @ 0x18003FF00 (-VisualTargetSetRoot@CChannel@@UEAAJII@Z.c)
 *     ?VisualRemoveAllChildren@CChannel@@UEAAJI@Z @ 0x180040450 (-VisualRemoveAllChildren@CChannel@@UEAAJI@Z.c)
 *     ?VisualRemoveChild@CChannel@@UEAAJII@Z @ 0x180043A30 (-VisualRemoveChild@CChannel@@UEAAJII@Z.c)
 *     ?VisualInsertChild@CChannel@@UEAAJIII_N@Z @ 0x180043D90 (-VisualInsertChild@CChannel@@UEAAJIII_N@Z.c)
 * Callees:
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?IsValidHandle@CChannel@@AEAA_NI@Z @ 0x1800442E0 (-IsValidHandle@CChannel@@AEAA_NI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::QueryResourceInterface(CChannel *this, unsigned int a2, const struct _GUID *a3, void **a4)
{
  unsigned int v8; // ebx
  __int64 (__fastcall ***v9)(_QWORD, const struct _GUID *, void **); // rcx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v11, this);
  if ( CChannel::IsValidHandle(this, a2) )
  {
    *a4 = 0LL;
    v9 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 2) + 16LL * (a2 - 1) + 8);
    v8 = (**v9)(v9, a3, a4);
  }
  else
  {
    v8 = -2147024890;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x216,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070006LL);
  }
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v11);
  return v8;
}
