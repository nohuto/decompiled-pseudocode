/*
 * XREFs of ?CreateDxSharedSurfaceHandle@CPoolBufferResource@@QEAAJPEAPEAX@Z @ 0x1C0085BE8
 * Callers:
 *     ?ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C007FEFC (-ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 * Callees:
 *     DxgkGetSharedAllocationObjectType @ 0x1C01D8380 (DxgkGetSharedAllocationObjectType.c)
 */

NTSTATUS __fastcall CPoolBufferResource::CreateDxSharedSurfaceHandle(PVOID *this, void **a2)
{
  struct _OBJECT_TYPE *ObjectType; // rax

  ObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType();
  return ObOpenObjectByPointer(this[8], 0, 0LL, 0xF0000u, ObjectType, 0, a2);
}
