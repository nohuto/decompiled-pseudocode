/*
 * XREFs of ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0113C20
 * Callers:
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C002CE74 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C003F250 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C003FC60 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x1C003FCAC (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1C0040528 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00414F0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00421B8 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0042384 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00DBA70 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00E9590 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C012C564 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C012CC5C (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     GreResetDCInternal @ 0x1C014BAFC (GreResetDCInternal.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0113C58 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C016EA98 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C016EAE6 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

void __fastcall DC::pSurface(DC *this, struct SURFACE *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // eax

  *((_QWORD *)this + 62) = a2;
  if ( (unsigned int)DC::bDpiScaledSurface(this) )
  {
    DC::vSetDpiScaling(
      v3,
      _mm_unpacklo_ps((__m128)*(unsigned int *)(v2 + 660), (__m128)*(unsigned int *)(v2 + 664)).m128_u64[0]);
  }
  else
  {
    v4 = *(_DWORD *)(v3 + 520);
    if ( (v4 & 1) != 0 )
    {
      *(_DWORD *)(v3 + 36) |= 0x10u;
      *(_QWORD *)(v3 + 524) = 0LL;
      *(_QWORD *)(v3 + 532) = 0LL;
      *(_DWORD *)(v3 + 520) = v4 & 0xFFFFFFF8 | 4;
      DC::vUpdateCachedDPIScaleValue((DC *)v3);
    }
  }
}
