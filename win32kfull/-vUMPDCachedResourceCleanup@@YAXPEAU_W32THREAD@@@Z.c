/*
 * XREFs of ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C029CA14
 * Callers:
 *     ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C02BB8D0 (-UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C029B570 (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 *     ?Close@PROXYPORT@@QEAAXXZ @ 0x1C02C1E80 (-Close@PROXYPORT@@QEAAXXZ.c)
 */

void __fastcall vUMPDCachedResourceCleanup(struct _W32THREAD *a1)
{
  struct _UMPDHEAP *v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _UMPDHEAP *)*((_QWORD *)a1 + 7);
  if ( v2 )
  {
    DestroyUMPDHeap(v2);
    *((_QWORD *)a1 + 7) = 0LL;
  }
  if ( *((_QWORD *)a1 + 8) )
  {
    v3 = *((_QWORD *)a1 + 8);
    PROXYPORT::Close((PROXYPORT *)&v3);
    *((_QWORD *)a1 + 8) = 0LL;
  }
}
