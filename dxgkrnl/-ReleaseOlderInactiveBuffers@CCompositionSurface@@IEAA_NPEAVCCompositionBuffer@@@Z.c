/*
 * XREFs of ?ReleaseOlderInactiveBuffers@CCompositionSurface@@IEAA_NPEAVCCompositionBuffer@@@Z @ 0x1C007C454
 * Callers:
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C007C038 (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurface::ReleaseOlderInactiveBuffers(
        CCompositionSurface *this,
        struct CCompositionBuffer *a2)
{
  CCompositionSurface *v2; // rbx
  CCompositionSurface *v3; // rbp
  char v4; // di
  CCompositionSurface *v6; // rdx
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  CCompositionSurface *v8; // r8
  CCompositionSurface **v9; // rax

  v2 = (CCompositionSurface *)*((_QWORD *)a2 + 3);
  v3 = (CCompositionSurface *)((char *)this + 72);
  v4 = 0;
  if ( v2 != (CCompositionSurface *)((char *)this + 72) )
  {
    v4 = 1;
    do
    {
      v6 = *(CCompositionSurface **)v2;
      v7 = (void (__fastcall ***)(_QWORD, __int64))((char *)v2 - 24);
      v8 = v2;
      v2 = v6;
      if ( *((CCompositionSurface **)v6 + 1) != v8 || (v9 = (CCompositionSurface **)*((_QWORD *)v8 + 1), *v9 != v8) )
        __fastfail(3u);
      *v9 = v6;
      *((_QWORD *)v6 + 1) = v9;
      --*((_DWORD *)this + 22);
      if ( v7 )
        (**v7)(v7, 1LL);
    }
    while ( v2 != v3 );
  }
  return v4;
}
