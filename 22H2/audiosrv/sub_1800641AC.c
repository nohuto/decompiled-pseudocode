/*
 * XREFs of sub_1800641AC @ 0x1800641AC
 * Callers:
 *     sub_18006409C @ 0x18006409C (sub_18006409C.c)
 *     sub_180064128 @ 0x180064128 (sub_180064128.c)
 *     sub_18006CEC4 @ 0x18006CEC4 (sub_18006CEC4.c)
 *     sub_180135278 @ 0x180135278 (sub_180135278.c)
 * Callees:
 *     <none>
 */

__int64 (*sub_1800641AC())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_18019FA50;
  if ( qword_18019FA50 )
    return (__int64 (*)(void))result();
  result = (__int64 (*)(void))qword_18019F998;
  if ( qword_18019F998 )
    return (__int64 (*)(void))result();
  return result;
}
