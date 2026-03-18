/*
 * XREFs of PlaySndClient_midl_user_free @ 0x1C024B7B0
 * Callers:
 *     PlaySoundPostMessage @ 0x1C039957C (PlaySoundPostMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall PlaySndClient_midl_user_free(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
