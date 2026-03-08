/*
 * XREFs of DCompositionProcessCallout @ 0x1C006BB30
 * Callers:
 *     <none>
 * Callees:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C006BB5C (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 *     ?OnProcessDestruction@CProcessData@DirectComposition@@SAXPEAU_W32PROCESS@@@Z @ 0x1C006BD3C (-OnProcessDestruction@CProcessData@DirectComposition@@SAXPEAU_W32PROCESS@@@Z.c)
 */

__int64 __fastcall DCompositionProcessCallout(struct _W32PROCESS *a1, char a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
    return (unsigned int)DirectComposition::CProcessData::OnProcessCreation(a1);
  else
    DirectComposition::CProcessData::OnProcessDestruction(a1);
  return v2;
}
