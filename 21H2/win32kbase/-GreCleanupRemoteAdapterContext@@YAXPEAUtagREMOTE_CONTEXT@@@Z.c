/*
 * XREFs of ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C00C5284
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C008F7E4 (MultiUserNtGreCleanup.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C017511C (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

void __fastcall GreCleanupRemoteAdapterContext(struct tagREMOTE_CONTEXT *a1)
{
  if ( Object )
  {
    if ( dword_1C0297080 )
      ObfDereferenceObject(Object);
    Object = 0LL;
  }
  qword_1C0297084 = 0LL;
  *(_OWORD *)&xmmword_1C0297098 = 0LL;
  xmmword_1C02970A8 = 0LL;
}
