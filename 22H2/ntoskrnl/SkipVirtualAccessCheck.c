/*
 * XREFs of SkipVirtualAccessCheck @ 0x140347F98
 * Callers:
 *     CmpCreateChild @ 0x1406E08C4 (CmpCreateChild.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x1406CF8B0 (CmpIsSystemEntity.c)
 */

bool __fastcall SkipVirtualAccessCheck(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 184) & 0x2000000) == 0 )
    return 0;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(a1) == 0;
}
