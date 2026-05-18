/*
 * XREFs of sub_180027FD0 @ 0x180027FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018900 @ 0x180018900 (sub_180018900.c)
 */

_QWORD *__fastcall sub_180027FD0(_QWORD *a1, __int64 a2)
{
  sub_180018900((__int64)a1, a2);
  *a1 = &Spectre::Engine::EngineInvalidArgException::`vftable';
  return a1;
}
