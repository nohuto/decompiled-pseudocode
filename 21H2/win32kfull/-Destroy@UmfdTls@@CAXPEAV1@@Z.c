/*
 * XREFs of ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C00F78BC
 * Callers:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00F77E8 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C011C498 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 * Callees:
 *     ?Destroy@UmfdUMBuffer@@SAXPEAV1@@Z @ 0x1C00F78F0 (-Destroy@UmfdUMBuffer@@SAXPEAV1@@Z.c)
 */

void __fastcall UmfdTls::Destroy(void **pv)
{
  void *v2; // rcx

  v2 = *pv;
  if ( v2 )
    UmfdUMBuffer::Destroy(v2);
  EngFreeMem(pv);
}
