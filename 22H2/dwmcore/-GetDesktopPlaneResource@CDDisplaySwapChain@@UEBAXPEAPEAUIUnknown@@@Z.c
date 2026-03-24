/*
 * XREFs of ?GetDesktopPlaneResource@CDDisplaySwapChain@@UEBAXPEAPEAUIUnknown@@@Z @ 0x180239920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDDisplaySwapChain::GetDesktopPlaneResource(CDDisplaySwapChain *this, struct IUnknown **a2)
{
  __int64 v3; // rax
  struct IUnknown *v4; // rbx

  v3 = 32LL * *((unsigned int *)this + 42);
  v4 = *(struct IUnknown **)(v3 + *((_QWORD *)this + 17));
  if ( v4 )
    ((void (__fastcall *)(_QWORD))v4->lpVtbl->AddRef)(*(_QWORD *)(v3 + *((_QWORD *)this + 17)));
  *a2 = v4;
}
