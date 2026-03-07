void __fastcall CIndirectSwapchainRenderTarget::GetMetaData(
        CIndirectSwapchainRenderTarget *this,
        void **a2,
        unsigned int *a3)
{
  unsigned int v3; // r9d
  void *v4; // rax

  v3 = *((_DWORD *)this + 480);
  v4 = 0LL;
  if ( v3 )
    v4 = (void *)*((_QWORD *)this + 237);
  *a2 = v4;
  *a3 = v3;
}
