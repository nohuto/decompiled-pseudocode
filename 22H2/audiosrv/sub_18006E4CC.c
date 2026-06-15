/*
 * XREFs of sub_18006E4CC @ 0x18006E4CC
 * Callers:
 *     sub_18000BDF0 @ 0x18000BDF0 (sub_18000BDF0.c)
 * Callees:
 *     sub_1800DD894 @ 0x1800DD894 (sub_1800DD894.c)
 */

void __fastcall sub_18006E4CC(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    if ( !RevertToSelf() )
      sub_1800DD894(retaddr, 3214LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp");
  }
}
