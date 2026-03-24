/*
 * XREFs of RtlHashBytes2 @ 0x1403F80A4
 * Callers:
 *     MiFindUserSidHotPatchContext @ 0x1408C9E9C (MiFindUserSidHotPatchContext.c)
 *     MiLoadHotPatchForUserSid @ 0x1408CAF80 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140300354 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 */

__int64 __fastcall RtlHashBytes2(const unsigned __int8 *a1, unsigned __int64 a2)
{
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  MetroHash64::Hash(a1, a2, (unsigned __int8 *const)&v3);
  return v3;
}
