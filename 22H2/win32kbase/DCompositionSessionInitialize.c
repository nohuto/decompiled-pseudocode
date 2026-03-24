/*
 * XREFs of DCompositionSessionInitialize @ 0x1C00AD840
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ @ 0x1C00AD868 (-Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C00AD928 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C00ADA00 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 */

__int64 __fastcall DCompositionSessionInitialize(int a1)
{
  __int64 result; // rax

  result = DirectComposition::CConnection::OnSessionCreation(a1);
  if ( (int)result >= 0 )
  {
    result = DirectComposition::CSynchronizationManager::OnSessionCreation();
    if ( (int)result >= 0 )
      return DirectComposition::CMaterialPropertiesTable::Initialize();
  }
  return result;
}
