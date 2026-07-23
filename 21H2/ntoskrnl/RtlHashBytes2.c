/*
 * XREFs of RtlHashBytes2 @ 0x1403F8A54
 * Callers:
 *     MiFindUserSidHotPatchContext @ 0x1408C9FAC (MiFindUserSidHotPatchContext.c)
 *     MiLoadHotPatchForUserSid @ 0x1408CB090 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140225B74 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 */

__int64 __fastcall RtlHashBytes2(const unsigned __int8 *a1, unsigned __int64 a2)
{
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  MetroHash64::Hash(a1, a2, (unsigned __int8 *const)&v3);
  return v3;
}
