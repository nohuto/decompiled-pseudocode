/*
 * XREFs of KCBNeedsVirtualImage @ 0x14034749C
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1407BA9F4 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A18024 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A182E8 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     KCBIsVirtualizable @ 0x1403474D4 (KCBIsVirtualizable.c)
 *     CmpIsSystemEntity @ 0x1407BAAAC (CmpIsSystemEntity.c)
 */

bool KCBNeedsVirtualImage()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8

  if ( !(unsigned __int8)KCBIsVirtualizable() )
    return 0;
  LOBYTE(v1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(v1, v0, v2) == 0;
}
