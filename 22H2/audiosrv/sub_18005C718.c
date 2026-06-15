/*
 * XREFs of sub_18005C718 @ 0x18005C718
 * Callers:
 *     sub_18005BC6C @ 0x18005BC6C (sub_18005BC6C.c)
 * Callees:
 *     sub_18006C4AC @ 0x18006C4AC (sub_18006C4AC.c)
 */

bool __fastcall sub_18005C718(__int64 a1)
{
  int v1; // eax

  if ( (unsigned __int8)sub_18006C4AC(a1) )
    v1 = IsSpatialAllowedOnPlatform();
  else
    v1 = 1;
  return v1 != 0;
}
