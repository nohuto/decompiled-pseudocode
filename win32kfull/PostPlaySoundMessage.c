/*
 * XREFs of PostPlaySoundMessage @ 0x1C00EC690
 * Callers:
 *     <none>
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00D3E30 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall PostPlaySoundMessage()
{
  return CUserPlaySound::PlaySync(CUserPlaySound::s_pUserPlaySound);
}
