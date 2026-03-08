/*
 * XREFs of ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C029B5E4
 * Callers:
 *     FreeNonCachedUserMemWrap @ 0x1C014DCB0 (FreeNonCachedUserMemWrap.c)
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C029C0E4 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C029B570 (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1C029C334 (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 */

void __fastcall UMPDOBJ::FreeNonCachedUserMem(UMPDOBJ *this)
{
  __int64 ThreadWin32Thread; // rax
  struct _UMPDHEAP *v3; // rcx

  if ( (unsigned int)UMPDOBJ::bSandboxedClient(this) )
  {
    *((_QWORD *)this + 49) = 0LL;
  }
  else if ( *((_QWORD *)this + 7) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v3 = (struct _UMPDHEAP *)*((_QWORD *)this + 7);
    if ( *(struct _UMPDHEAP **)(ThreadWin32Thread + 56) != v3 )
      DestroyUMPDHeap(v3);
    *((_QWORD *)this + 7) = 0LL;
  }
}
