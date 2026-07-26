/*
 * XREFs of ?ndisInitializeULongRef@@YAXPEAU_ULONG_REFERENCE@@@Z @ 0x1C0031F9C
 * Callers:
 *     ?ndisMInitializeMiniportBlockFront@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0132568 (-ndisMInitializeMiniportBlockFront@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisInitializeULongRef(struct _ULONG_REFERENCE *a1)
{
  a1->Closing = 0;
  a1->ReferenceCount = 1;
  KeInitializeSpinLock(&a1->SpinLock);
}
