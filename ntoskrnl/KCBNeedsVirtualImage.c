/*
 * XREFs of KCBNeedsVirtualImage @ 0x1402DD15C
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140768C00 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A152D4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A15598 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     KCBIsVirtualizable @ 0x1402DD194 (KCBIsVirtualizable.c)
 *     CmpIsSystemEntity @ 0x140768CB8 (CmpIsSystemEntity.c)
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
