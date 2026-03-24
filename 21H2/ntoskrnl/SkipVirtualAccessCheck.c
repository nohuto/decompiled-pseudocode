/*
 * XREFs of SkipVirtualAccessCheck @ 0x14027EF88
 * Callers:
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x140656AF0 (CmpIsSystemEntity.c)
 */

bool __fastcall SkipVirtualAccessCheck(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 184) & 0x2000000) == 0 )
    return 0;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(a1, 0LL, a2) == 0;
}
