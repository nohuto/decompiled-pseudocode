__int64 __fastcall CCompositionSwapchainBuffer::NotifyFlipContentTokenInFrame(
        CCompositionSwapchainBuffer *this,
        const struct CFlipContentToken *a2,
        bool *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // ecx
  __int64 v8; // rax
  bool v9; // bp

  v3 = 0;
  *a3 = 0;
  v6 = *((_DWORD *)a2 + 24);
  if ( v6 == -1 || v6 < *((_DWORD *)this + 68) )
  {
    v8 = *((_QWORD *)a2 + 13);
    *((_QWORD *)this + 91) = v8;
    *((_DWORD *)this + 69) = v8;
    v9 = 0;
    if ( *((_DWORD *)this + 95) != v6 )
    {
      *((_DWORD *)this + 95) = v6;
      *a3 = 1;
      v9 = (*(unsigned __int8 (__fastcall **)(const struct CFlipContentToken *))(*(_QWORD *)a2 + 144LL))(a2) != 0;
    }
    if ( CCompositionSwapchainBuffer::UpdateAttributes(this, a2) )
      *a3 = 1;
    if ( CCompositionSwapchainBuffer::UpdateIndependentFlipState(this, a2) )
      *a3 = 1;
    if ( v9 )
      *((_BYTE *)this + 626) = 0;
    CCompositionBuffer::NotifyDirty(
      this,
      *((const struct IRegion **)a2 + 10),
      (const struct CFlipContentToken *)((char *)a2 + 52));
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
