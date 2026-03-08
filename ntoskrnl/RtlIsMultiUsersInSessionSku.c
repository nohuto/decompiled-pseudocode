/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x1409B9410
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1402BEDA8 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     <none>
 */

bool RtlIsMultiUsersInSessionSku()
{
  return (MEMORY[0xFFFFF780000002F0] & 0x200) != 0;
}
