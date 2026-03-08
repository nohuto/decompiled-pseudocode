/*
 * XREFs of PlaySndClient_midl_user_free @ 0x1C024E470
 * Callers:
 *     PlaySoundPostMessage @ 0x1C039C3D0 (PlaySoundPostMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall PlaySndClient_midl_user_free(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
