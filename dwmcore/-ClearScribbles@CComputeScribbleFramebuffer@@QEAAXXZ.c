void __fastcall CComputeScribbleFramebuffer::ClearScribbles(CComputeScribbleFramebuffer *this)
{
  RTL_SRWLOCK *v1; // rdi

  v1 = (RTL_SRWLOCK *)((char *)this + 64);
  AcquireSRWLockExclusive((PSRWLOCK)this + 8);
  wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset((__int64 *)this + 9);
  *((_BYTE *)this + 240) = 0;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
