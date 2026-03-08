/*
 * XREFs of ?SetHandleFallbackInteractions@CInteraction@@UEAAX_N@Z @ 0x180106440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::SetHandleFallbackInteractions(CInteraction *this, char a2)
{
  *((_BYTE *)this + 1552) = (4 * a2) | *((_BYTE *)this + 1552) & 0xFB;
}
