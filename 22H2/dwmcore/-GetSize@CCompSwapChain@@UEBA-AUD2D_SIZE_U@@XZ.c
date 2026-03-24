/*
 * XREFs of ?GetSize@CCompSwapChain@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180251010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

struct D2D_SIZE_U __fastcall CCompSwapChain::GetSize(CCompSwapChain *this, __int64 a2)
{
  void (__fastcall ***v3)(_QWORD); // rcx

  v3 = (void (__fastcall ***)(_QWORD))(*((_QWORD *)this + 5)
                                     + 8LL
                                     + *(int *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + 16LL));
  (**v3)(v3);
  return (struct D2D_SIZE_U)a2;
}
