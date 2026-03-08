/*
 * XREFs of ?Invalidate@CD3DResource@@IEAAXXZ @ 0x1800F0568
 * Callers:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800F0480 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD3DResource::Invalidate(CD3DResource *this)
{
  __int64 i; // rbx
  void (__fastcall ***v3)(_QWORD, CD3DResource *); // rcx

  if ( *((_BYTE *)this + 70) )
  {
    *((_BYTE *)this + 70) = 0;
    for ( i = (__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) >> 3; (int)i > 0; LODWORD(i) = i - 1 )
    {
      v3 = *(void (__fastcall ****)(_QWORD, CD3DResource *))(*((_QWORD *)this + 9) + 8LL * (unsigned int)(i - 1));
      (**v3)(v3, this);
    }
  }
}
