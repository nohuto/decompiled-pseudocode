/*
 * XREFs of HalpGetAdapter @ 0x140829354
 * Callers:
 *     HalPnpGetDmaAdapter @ 0x14038ED40 (HalPnpGetDmaAdapter.c)
 *     HaliGetDmaAdapter @ 0x1405050D0 (HaliGetDmaAdapter.c)
 *     HalGetAdapter @ 0x140933270 (HalGetAdapter.c)
 * Callees:
 *     HalpAreDriversDmarCompatible @ 0x14038EF58 (HalpAreDriversDmarCompatible.c)
 *     HalGetAdapterV3 @ 0x140829080 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140829610 (HalGetAdapterV2.c)
 */

_QWORD *__fastcall HalpGetAdapter(__int64 a1, struct _DEVICE_OBJECT *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  int v7; // esi

  v3 = 0LL;
  *a3 = 0;
  v7 = 0;
  if ( a2 && HalpAreDriversDmarCompatible(a2) )
    v7 = 3;
  if ( *(_DWORD *)a1 > 2u )
  {
    if ( *(_DWORD *)a1 != 3 )
      return (_QWORD *)v3;
    return HalGetAdapterV3(a1, (__int64)a2, v7, a3);
  }
  if ( v7 )
  {
    if ( !*(_BYTE *)(a1 + 4) )
      return (_QWORD *)v3;
    return HalGetAdapterV3(a1, (__int64)a2, v7, a3);
  }
  return (_QWORD *)HalGetAdapterV2(a1, a2, a3);
}
