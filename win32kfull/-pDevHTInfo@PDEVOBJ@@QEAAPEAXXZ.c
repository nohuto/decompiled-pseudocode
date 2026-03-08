/*
 * XREFs of ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C001A4A0
 * Callers:
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C001826C (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C001A0C0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C012448C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C028E978 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     GreCreateHalftonePalette @ 0x1C02D32E0 (GreCreateHalftonePalette.c)
 *     EngHTBlt @ 0x1C02E0A38 (EngHTBlt.c)
 * Callees:
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C0018188 (HT_DestroyDeviceHalftoneInfo.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

void *__fastcall PDEVOBJ::pDevHTInfo(PDEVOBJ *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rbx
  _DWORD *v6; // rdi

  v2 = Gre::Base::Globals(this);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v4 = ThreadWin32Thread;
  if ( !ThreadWin32Thread
    || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108)
    || !PDEVOBJ::bAllowShareAccess(this) )
  {
    return *(void **)(*(_QWORD *)this + 1504LL);
  }
  if ( *(_DWORD *)(v4 + 296) != *((_DWORD *)v2 + 954) )
  {
    v6 = *(_DWORD **)(v4 + 288);
    if ( v6 )
    {
      bDeletePalette(*(_QWORD *)v6);
      HT_DestroyDeviceHalftoneInfo(v6);
      *(_QWORD *)(v4 + 288) = 0LL;
    }
  }
  return *(void **)(v4 + 288);
}
