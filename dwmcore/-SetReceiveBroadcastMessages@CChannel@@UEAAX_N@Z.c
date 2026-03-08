/*
 * XREFs of ?SetReceiveBroadcastMessages@CChannel@@UEAAX_N@Z @ 0x180104110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CChannel::SetReceiveBroadcastMessages(CChannel *this, char a2)
{
  *((_BYTE *)this + 232) = a2;
}
