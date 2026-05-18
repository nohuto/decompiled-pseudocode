/*
 * XREFs of sub_180104F10 @ 0x180104F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A7698 @ 0x1800A7698 (sub_1800A7698.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_180104F10(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  *a1 = &Spectre::Engine::ImageProcessingCamera::`vftable';
  sub_1800A7698((__int64)a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
