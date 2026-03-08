/*
 * XREFs of PlaySndClient_midl_user_allocate @ 0x1C00D3ED0
 * Callers:
 *     PlaySoundPostMessage @ 0x1C039C3D0 (PlaySoundPostMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PlaySndClient_midl_user_allocate(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1399025746LL);
}
