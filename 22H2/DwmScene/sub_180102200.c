/*
 * XREFs of sub_180102200 @ 0x180102200
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_180102200(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::ShaderDatabase::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
