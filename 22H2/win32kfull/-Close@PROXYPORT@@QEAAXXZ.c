/*
 * XREFs of ?Close@PROXYPORT@@QEAAXXZ @ 0x1C02BF7AC
 * Callers:
 *     UMPDCachedResourceCleanupWrap @ 0x1C00A4000 (UMPDCachedResourceCleanupWrap.c)
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C029A258 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PROXYPORT::Close(void **this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)*this + 3);
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
