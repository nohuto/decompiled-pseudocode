/*
 * XREFs of ?OnAddPulse@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J0N@Z @ 0x18016D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?AccumulateCurrent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@IEAAJ_J@Z @ 0x18016A8B4 (-AccumulateCurrent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@IEAAJ_J@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::AverageHapticsFilter::OnAddPulse(
        Windows::Internal::SpatialInteractions::AverageHapticsFilter *this,
        __int64 a2,
        __int64 a3,
        double a4)
{
  int v7; // edi
  __int64 v8; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::AverageHapticsFilter *, __int64, __int64))(*(_QWORD *)this + 32LL))(
         this,
         a2,
         0xFFFFFFFFLL);
  if ( v7 < 0 )
  {
    v8 = 238LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\HapticsEngine.h",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = Windows::Internal::SpatialInteractions::AverageHapticsFilter::AccumulateCurrent(this, a2);
  if ( v7 < 0 )
  {
    v8 = 241LL;
    goto LABEL_3;
  }
  *((double *)this + 9) = a4;
  result = 0LL;
  *((_QWORD *)this + 7) = a2;
  *((_QWORD *)this + 8) = a3;
  *((_BYTE *)this + 48) = 1;
  return result;
}
