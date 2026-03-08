/*
 * XREFs of ?SetHandledDeltaCurrentInteraction@CInteractionRoot@@UEAAXXZ @ 0x1801A3420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionRoot::SetHandledDeltaCurrentInteraction(CInteractionRoot *this)
{
  *((_BYTE *)this + 832) |= 7u;
  *((_DWORD *)this + 202) = 2;
}
