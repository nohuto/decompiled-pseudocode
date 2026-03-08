/*
 * XREFs of NtUserDoSoundDisconnect @ 0x1C00F6710
 * Callers:
 *     <none>
 * Callees:
 *     ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x1C00F6C0C (-Disconnect@CUserPlaySound@@AEAAJXZ.c)
 */

__int64 __fastcall NtUserDoSoundDisconnect(CUserPlaySound *a1)
{
  return CUserPlaySound::Disconnect(a1);
}
