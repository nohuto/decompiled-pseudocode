/*
 * XREFs of ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C00A03DC
 * Callers:
 *     ?MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ @ 0x1C00A0118 (-MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C0194E80 (DrvUpdateRemoteGraphicsDeviceList.c)
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
