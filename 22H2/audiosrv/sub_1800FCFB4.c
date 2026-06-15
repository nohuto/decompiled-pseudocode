/*
 * XREFs of sub_1800FCFB4 @ 0x1800FCFB4
 * Callers:
 *     sub_1800FC4C4 @ 0x1800FC4C4 (sub_1800FC4C4.c)
 *     sub_1800FC614 @ 0x1800FC614 (sub_1800FC614.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800FCFB4(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rcx
  char v5; // bl
  _QWORD *v6; // rcx

  v4 = a1 + 16;
  if ( v4[3] >= 8uLL )
    v4 = (_QWORD *)*v4;
  v5 = 0;
  if ( !(unsigned int)o__wcsnicmp(v4, a2, a1[18]) )
    return 1;
  v6 = a1 + 20;
  if ( a1[23] >= 8uLL )
    v6 = (_QWORD *)*v6;
  if ( !(unsigned int)o__wcsnicmp(v6, a2, a1[22]) )
    return 1;
  return v5;
}
