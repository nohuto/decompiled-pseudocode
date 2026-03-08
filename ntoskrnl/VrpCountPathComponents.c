/*
 * XREFs of VrpCountPathComponents @ 0x1406C1E90
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1406C2968 (VrpPostOpenOrCreate.c)
 *     VrpCreateNamespaceNode @ 0x140737348 (VrpCreateNamespaceNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     VrpGetNextToken @ 0x1406C24E8 (VrpGetNextToken.c)
 */

__int64 __fastcall VrpCountPathComponents(__int64 a1)
{
  unsigned __int16 v2; // bx
  UNICODE_STRING v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  v2 = 0;
  RtlInitUnicodeString(&v4, 0LL);
  while ( 1 )
  {
    VrpGetNextToken(a1, &v5, &v4);
    if ( !v4.Length )
      break;
    ++v2;
  }
  return v2;
}
