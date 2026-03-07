void __fastcall CComputeScribbleFramebuffer::AcquireForRender(CComputeScribbleFramebuffer *this, __int64 a2)
{
  __int64 *v2; // rdi

  v2 = (__int64 *)((char *)this + 232);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xq_EventWriteTransfer(
      (__int64)this,
      (__int64)&EVTDESC_COMPUTESCRIBBLE_FRAMECOMPLETED,
      *v2,
      *((_DWORD *)this + 61));
  AcquireSRWLockExclusive((PSRWLOCK)this + 8);
  *((_QWORD *)this + 7) = CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a5058a3170b2c94992cd95324fb803e7___(*((PSRWLOCK *)this + 6));
  *v2 = a2;
  CComputeScribbleFramebuffer::SaveDirtyForPreRender((int **)this);
  if ( this != (CComputeScribbleFramebuffer *)-64LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 8);
}
