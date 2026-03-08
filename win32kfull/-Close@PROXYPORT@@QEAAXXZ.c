/*
 * XREFs of ?Close@PROXYPORT@@QEAAXXZ @ 0x1C02C1E80
 * Callers:
 *     UMPDCachedResourceCleanupWrap @ 0x1C00DAE00 (UMPDCachedResourceCleanupWrap.c)
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C029CA14 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PROXYPORT::Close(void **this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)*this + 2);
  if ( v2 )
    MmUnmapViewInSessionSpace(v2);
  v3 = (void *)*((_QWORD *)*this + 1);
  if ( v3 )
    ZwClose(v3);
  v4 = *(void **)*this;
  if ( v4 )
    ObfDereferenceObject(v4);
  Win32FreePool(*this);
}
