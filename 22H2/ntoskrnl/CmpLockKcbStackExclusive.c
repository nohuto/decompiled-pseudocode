/*
 * XREFs of CmpLockKcbStackExclusive @ 0x140710868
 * Callers:
 *     CmDeleteLayeredKey @ 0x14061695C (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x14071009C (CmDeleteKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077D410 (CmpStartSiloRegistryNamespace.c)
 *     CmpAssignKeySecurity @ 0x1408593F0 (CmpAssignKeySecurity.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1406D5850 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbExclusive @ 0x1406D8518 (CmpLockKcbExclusive.c)
 */

void __fastcall CmpLockKcbStackExclusive(__int64 a1)
{
  __int16 i; // bx
  __int64 KcbAtLayerHeight; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, i);
    CmpLockKcbExclusive(KcbAtLayerHeight);
  }
}
