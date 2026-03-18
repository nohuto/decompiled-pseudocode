/*
 * XREFs of ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C00A9A44
 * Callers:
 *     ?MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ @ 0x1C00A99B8 (-MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C01680F0 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

void __fastcall GreCleanupRemoteAdapterContext(struct tagREMOTE_CONTEXT *a1)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)a1 + 10);
  if ( v2 )
  {
    if ( *((_DWORD *)a1 + 16) )
      ObfDereferenceObject(v2);
    *((_QWORD *)a1 + 10) = 0LL;
  }
  *(_OWORD *)((char *)a1 + 88) = 0LL;
  *(_OWORD *)((char *)a1 + 104) = 0LL;
  *(_QWORD *)((char *)a1 + 68) = 0LL;
}
