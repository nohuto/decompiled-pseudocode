/*
 * XREFs of PostPlaySoundMessage @ 0x1C00B46F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C009D5D0 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall PostPlaySoundMessage()
{
  return CUserPlaySound::PlaySync(CUserPlaySound::s_pUserPlaySound);
}
