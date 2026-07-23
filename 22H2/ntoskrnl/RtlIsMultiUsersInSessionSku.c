/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x140913970
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1403A414C (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiUsersInSessionSku(void)
{
  return (MEMORY[0xFFFFF780000002F0] & 0x200) != 0;
}
