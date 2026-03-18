/*
 * XREFs of ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C00A5A98
 * Callers:
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C00750A8 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00A5928 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?Destroy@UmfdUMBuffer@@SAXPEAV1@@Z @ 0x1C00A5ACC (-Destroy@UmfdUMBuffer@@SAXPEAV1@@Z.c)
 */

void __fastcall UmfdTls::Destroy(void **pv)
{
  void *v2; // rcx

  v2 = *pv;
  if ( v2 )
    UmfdUMBuffer::Destroy(v2);
  EngFreeMem(pv);
}
