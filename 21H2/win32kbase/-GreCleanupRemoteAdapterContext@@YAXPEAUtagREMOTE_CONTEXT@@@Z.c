/*
 * XREFs of ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C007D514
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C007BDB8 (MultiUserNtGreCleanup.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C0148048 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

void __fastcall GreCleanupRemoteAdapterContext(struct tagREMOTE_CONTEXT *a1)
{
  if ( Object )
  {
    if ( dword_1C02522A0 )
      ObfDereferenceObject(Object);
    Object = 0LL;
  }
  qword_1C02522A4 = 0LL;
  *(_OWORD *)&Dest = 0LL;
  xmmword_1C02522C8 = 0LL;
}
