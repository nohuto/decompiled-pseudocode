/*
 * XREFs of InsertOwnerObjList @ 0x1C004BDF0
 * Callers:
 *     InitializeNativeNamespace @ 0x1C0049FD4 (InitializeNativeNamespace.c)
 *     AMLIAddNamespaceOverride @ 0x1C004A2A8 (AMLIAddNamespaceOverride.c)
 *     MigrateDefunctObjectsToNewOwner @ 0x1C004C0DC (MigrateDefunctObjectsToNewOwner.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall InsertOwnerObjList(struct _EX_RUNDOWN_REF *a1, struct _EX_RUNDOWN_REF *a2)
{
  BOOLEAN result; // al

  a2[6].Count = (unsigned __int64)a1;
  if ( a1 )
  {
    a2[7].Count = a1[3].Count;
    a1[3].Count = (unsigned __int64)a2;
    return ExAcquireRundownProtection(a1 + 4);
  }
  return result;
}
