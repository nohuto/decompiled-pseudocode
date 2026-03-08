/*
 * XREFs of ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800E5118
 * Callers:
 *     ?FinalRelease@CInteraction@@UEAAXXZ @ 0x1800E4BD0 (-FinalRelease@CInteraction@@UEAAXXZ.c)
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x1800E4C20 (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 *     ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x180209824 (-ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180099BBC (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 */

struct CInteraction::HANDLE_ENTRY *__fastcall CInteraction::GetEntry(unsigned int a1)
{
  int v1; // eax
  __int64 v2; // r8
  int v3; // r9d

  LOBYTE(v1) = HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)&CInteraction::s_InteractionHandleTable, a1);
  if ( v1 )
    return (struct CInteraction::HANDLE_ENTRY *)((char *)lpMem + (unsigned int)(Size * v3));
  return (struct CInteraction::HANDLE_ENTRY *)v2;
}
