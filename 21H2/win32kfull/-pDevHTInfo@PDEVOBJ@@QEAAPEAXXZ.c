/*
 * XREFs of ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0092E30
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C0009E08 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C0091710 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngHTBlt @ 0x1C009247C (EngHTBlt.c)
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C010BC88 (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C013CE28 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     GreCreateHalftonePalette @ 0x1C02B5EAC (GreCreateHalftonePalette.c)
 * Callees:
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C010BD78 (HT_DestroyDeviceHalftoneInfo.c)
 */

void *__fastcall PDEVOBJ::pDevHTInfo(PDEVOBJ *this)
{
  __int64 *ThreadWin32Thread; // rax
  __int64 v3; // rbx
  _QWORD *v5; // rdi

  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread )
    return *(void **)(*(_QWORD *)this + 1504LL);
  v3 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread || !*(_DWORD *)(v3 + 104) && !*(_DWORD *)(v3 + 108) )
    return *(void **)(*(_QWORD *)this + 1504LL);
  if ( !PDEVOBJ::bAllowShareAccess(this) )
    return *(void **)(*(_QWORD *)this + 1504LL);
  if ( *(_DWORD *)(v3 + 296) != gcModeChanges )
  {
    v5 = *(_QWORD **)(v3 + 288);
    if ( v5 )
    {
      bDeletePalette(*v5, 0LL, 0LL);
      HT_DestroyDeviceHalftoneInfo(v5);
      *(_QWORD *)(v3 + 288) = 0LL;
    }
  }
  return *(void **)(v3 + 288);
}
