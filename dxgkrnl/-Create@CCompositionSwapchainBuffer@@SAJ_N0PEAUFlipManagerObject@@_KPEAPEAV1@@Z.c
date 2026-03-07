__int64 __fastcall CCompositionSwapchainBuffer::Create(
        bool a1,
        bool a2,
        struct FlipManagerObject *a3,
        unsigned __int64 a4,
        struct CCompositionSwapchainBuffer **a5)
{
  CFlipExBuffer *v9; // rax
  CCompositionSwapchainBuffer *v10; // rbx
  int v11; // edi

  *a5 = 0LL;
  v9 = (CFlipExBuffer *)operator new[](0x2E8uLL, 0x624D5343u, 256LL);
  v10 = v9;
  if ( v9 )
  {
    CFlipExBuffer::CFlipExBuffer(v9);
    *(_QWORD *)v10 = &CCompositionSwapchainBuffer::`vftable';
    v11 = CCompositionSwapchainBuffer::Initialize(v10, a1, a2, a3, a4);
    if ( v11 < 0 )
      (**(void (__fastcall ***)(CCompositionSwapchainBuffer *, __int64))v10)(v10, 1LL);
    else
      *a5 = v10;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}
