/*
 * XREFs of ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x1C007C5B0
 * Callers:
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0360780 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C00016E8 (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C000D9C0 (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::UnPair(CCompositionSurface *this)
{
  char *v2; // rdi
  char *i; // rbx
  CFlipExBuffer *v4; // rax

  if ( *((_QWORD *)this + 13) )
  {
    v2 = (char *)this + 72;
    for ( i = (char *)*((_QWORD *)this + 9); i != v2; i = *(char **)i )
    {
      v4 = CFlipExBuffer::FromBuffer((struct CCompositionBuffer *)(i - 24));
      CFlipExBuffer::DisableCascadedSignaling(v4);
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 16LL))(*((_QWORD *)this + 13));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 13) + 8LL))(*((_QWORD *)this + 13), 0LL);
    *((_QWORD *)this + 13) = 0LL;
  }
  return 0LL;
}
