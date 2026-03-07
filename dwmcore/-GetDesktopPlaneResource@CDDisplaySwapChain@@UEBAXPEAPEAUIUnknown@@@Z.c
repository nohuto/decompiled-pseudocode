void __fastcall CDDisplaySwapChain::GetDesktopPlaneResource(CDDisplaySwapChain *this, struct IUnknown **a2)
{
  struct IUnknown *v3; // rbx

  v3 = *(struct IUnknown **)(32LL * *((unsigned int *)this + 106) + *((_QWORD *)this + 50));
  if ( v3 )
    ((void (__fastcall *)(struct IUnknown *))v3->lpVtbl->AddRef)(v3);
  *a2 = v3;
}
