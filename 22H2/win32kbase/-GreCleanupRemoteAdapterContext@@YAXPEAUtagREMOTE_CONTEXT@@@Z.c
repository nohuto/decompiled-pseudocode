/*
 * XREFs of ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C007EBF4
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C007D498 (MultiUserNtGreCleanup.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C0148398 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

void __fastcall GreCleanupRemoteAdapterContext(struct tagREMOTE_CONTEXT *a1)
{
  if ( Object )
  {
    if ( dword_1C02512E0 )
      ObfDereferenceObject(Object);
    Object = 0LL;
  }
  qword_1C02512E4 = 0LL;
  *(_OWORD *)&Dest = 0LL;
  xmmword_1C0251308 = 0LL;
}
