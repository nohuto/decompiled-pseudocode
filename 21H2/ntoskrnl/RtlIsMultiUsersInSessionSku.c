/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x140913920
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1403A484C (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     <none>
 */

bool RtlIsMultiUsersInSessionSku()
{
  return (MEMORY[0xFFFFF780000002F0] & 0x200) != 0;
}
