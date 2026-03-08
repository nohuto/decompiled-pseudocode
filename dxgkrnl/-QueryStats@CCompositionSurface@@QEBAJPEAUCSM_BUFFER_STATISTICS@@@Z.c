/*
 * XREFs of ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C007C3A0
 * Callers:
 *     NtQueryCompositionSurfaceStatistics @ 0x1C007AB20 (NtQueryCompositionSurfaceStatistics.c)
 *     ?PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C007B7B0 (-PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C000DB08 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall CCompositionSurface::QueryStats(CCompositionSurface *this, struct CSM_BUFFER_STATISTICS *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  struct CCompositionBuffer *ActiveBuffer; // rax

  v4 = *((_QWORD *)this + 13);
  v5 = -1073741823;
  if ( v4 )
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  if ( !*((_QWORD *)this + 13) || v5 == -1073741637 )
  {
    ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
    if ( ActiveBuffer )
    {
      v5 = -1073741823;
      if ( *((_BYTE *)ActiveBuffer + 42) )
      {
        v5 = 0;
        *(_OWORD *)a2 = *((_OWORD *)ActiveBuffer + 12);
        *((_OWORD *)a2 + 1) = *((_OWORD *)ActiveBuffer + 13);
        *((_OWORD *)a2 + 2) = *((_OWORD *)ActiveBuffer + 14);
        *((_OWORD *)a2 + 3) = *((_OWORD *)ActiveBuffer + 15);
      }
    }
  }
  if ( v5 < 0 )
    memset(a2, 0, 0x40uLL);
  return (unsigned int)v5;
}
