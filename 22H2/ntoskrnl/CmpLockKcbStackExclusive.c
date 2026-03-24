/*
 * XREFs of CmpLockKcbStackExclusive @ 0x1406E4F28
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404ECFB8 (CmDeleteLayeredKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406A630C (CmpStartSiloRegistryNamespace.c)
 *     CmDeleteKey @ 0x1406E47E4 (CmDeleteKey.c)
 *     CmpAssignKeySecurity @ 0x1407D0370 (CmpAssignKeySecurity.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x1405EC35C (CmpLockKcbExclusive.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405EF550 (CmpGetKcbAtLayerHeight.c)
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
