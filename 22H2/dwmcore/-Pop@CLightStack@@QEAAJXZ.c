/*
 * XREFs of ?Pop@CLightStack@@QEAAJXZ @ 0x1800159B8
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180084280 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800CDDE0 (-Pop@CDrawingContext@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLightStack::Pop(CLightStack *this)
{
  __int128 v1; // xmm0

  v1 = *(_OWORD *)(*(_QWORD *)this + 16LL * (unsigned int)--*((_DWORD *)this + 6));
  if ( (_QWORD)v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(v1);
  return 0LL;
}
