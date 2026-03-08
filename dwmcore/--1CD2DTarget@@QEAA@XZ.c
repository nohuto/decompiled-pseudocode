/*
 * XREFs of ??1CD2DTarget@@QEAA@XZ @ 0x1800E5B6C
 * Callers:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18008D178 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x1800E5B40 (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD2DTarget::~CD2DTarget(CD2DTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    v5 = v4 + 8 + *(int *)(*(_QWORD *)(v4 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
