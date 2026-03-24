/*
 * XREFs of GreGetDpiDepDefaultGuiFont @ 0x1C01422E0
 * Callers:
 *     GreGetStockObject @ 0x1C002AB20 (GreGetStockObject.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002AA84 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EngSetLastError @ 0x1C009E670 (EngSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     GetDpiDepStockObjectPlateauSlot @ 0x1C0142270 (GetDpiDepStockObjectPlateauSlot.c)
 */

void *__fastcall GreGetDpiDepDefaultGuiFont(int a1)
{
  __int64 v1; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int DpiDepStockObjectPlateauSlot; // eax
  unsigned int v4; // r11d
  void **v5; // rax
  __int64 v6; // rdi

  v1 = 0LL;
  if ( a1 != 17 )
    return (void *)v1;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  DpiDepStockObjectPlateauSlot = GetDpiDepStockObjectPlateauSlot(
                                   (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF,
                                   gdmLogPixels);
  if ( DpiDepStockObjectPlateauSlot == -1 )
  {
    v5 = gahStockObjects96;
    return v5[17];
  }
  if ( DpiDepStockObjectPlateauSlot == -2 )
  {
LABEL_11:
    v5 = gahStockObjects;
    return v5[17];
  }
  if ( DpiDepStockObjectPlateauSlot < 0 )
  {
    EngSetLastError(0x57u);
    goto LABEL_11;
  }
  v6 = DpiDepStockObjectPlateauSlot;
  if ( !gahDpiDepDefaultGuiFonts[DpiDepStockObjectPlateauSlot] && qword_1C0256268 )
    qword_1C0256268(v4);
  return gahDpiDepDefaultGuiFonts[v6];
}
