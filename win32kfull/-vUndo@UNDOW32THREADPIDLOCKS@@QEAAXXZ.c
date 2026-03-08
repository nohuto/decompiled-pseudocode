/*
 * XREFs of ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C0018C10
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0018CB0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C001C7C4 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02803E0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

void __fastcall UNDOW32THREADPIDLOCKS::vUndo(UNDOW32THREADPIDLOCKS *this)
{
  __int64 ThreadWin32Thread; // rdi
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v4 = Gre::Base::Globals(v3);
  if ( ThreadWin32Thread && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v4 + 14)) )
  {
    v5 = *(__int64 **)(ThreadWin32Thread + 312);
    *(_QWORD *)this = v5;
    v6 = *(_QWORD *)(ThreadWin32Thread + 320);
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 5) = 0;
    *((_QWORD *)this + 1) = v6;
    if ( v5 )
    {
      v7 = *v5;
      if ( _bittest((const signed __int32 *)(v7 + 36), 0xEu) )
      {
        SURFACE::bUnMap(*(SURFACE **)(v7 + 496), 0LL, (struct DC *)v7);
        *((_DWORD *)this + 4) = 1;
      }
    }
    v8 = *((_QWORD *)this + 1);
    if ( v8 )
    {
      if ( _bittest((const signed __int32 *)(*(_QWORD *)v8 + 36LL), 0xEu) )
      {
        SURFACE::bUnMap(*(SURFACE **)(*(_QWORD *)v8 + 496LL), 0LL, 0LL);
        *((_DWORD *)this + 5) = 1;
      }
    }
  }
}
