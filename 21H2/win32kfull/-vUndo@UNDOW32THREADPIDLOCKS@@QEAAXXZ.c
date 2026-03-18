/*
 * XREFs of ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C00FAD78
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0031BF0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00FA780 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027E220 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

void __fastcall UNDOW32THREADPIDLOCKS::vUndo(UNDOW32THREADPIDLOCKS *this)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemSprite) )
  {
    v3 = *(__int64 **)(ThreadWin32Thread + 312);
    *(_QWORD *)this = v3;
    v4 = *(_QWORD *)(ThreadWin32Thread + 320);
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 5) = 0;
    *((_QWORD *)this + 1) = v4;
    if ( v3 )
    {
      v5 = *v3;
      if ( _bittest((const signed __int32 *)(v5 + 36), 0xEu) )
      {
        SURFACE::bUnMap(*(SURFACE **)(v5 + 496), 0LL, (struct DC *)v5);
        v4 = *((_QWORD *)this + 1);
        *((_DWORD *)this + 4) = 1;
      }
    }
    if ( v4 )
    {
      if ( _bittest((const signed __int32 *)(*(_QWORD *)v4 + 36LL), 0xEu) )
      {
        SURFACE::bUnMap(*(SURFACE **)(*(_QWORD *)v4 + 496LL), 0LL, 0LL);
        *((_DWORD *)this + 5) = 1;
      }
    }
  }
}
