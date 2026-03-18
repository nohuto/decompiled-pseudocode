/*
 * XREFs of MiReferenceFileObjectForMap @ 0x140720E88
 * Callers:
 *     MiInsertInSystemSpace @ 0x140213D30 (MiInsertInSystemSpace.c)
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiAllowImageMap @ 0x1406AF6A4 (MiAllowImageMap.c)
 *     MiMapViewOfDataSection @ 0x1407202F0 (MiMapViewOfDataSection.c)
 * Callees:
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 */

void *__fastcall MiReferenceFileObjectForMap(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rbx

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 3) == 0 )
    return 0LL;
  v2 = (void *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
  ObfReferenceObject(v2);
  return v2;
}
