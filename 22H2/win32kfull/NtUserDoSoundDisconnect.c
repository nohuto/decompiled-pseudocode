/*
 * XREFs of NtUserDoSoundDisconnect @ 0x1C00BEB50
 * Callers:
 *     <none>
 * Callees:
 *     ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x1C003C554 (-Disconnect@CUserPlaySound@@AEAAJXZ.c)
 */

__int64 __fastcall NtUserDoSoundDisconnect(CUserPlaySound *a1)
{
  return CUserPlaySound::Disconnect(a1);
}
