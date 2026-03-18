/*
 * XREFs of MiDeleteSessionDriverProtos @ 0x140682C1C
 * Callers:
 *     MiMapSystemImage @ 0x140695E88 (MiMapSystemImage.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiCreateSessionDriverProtos @ 0x140A45E40 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x1402A25C4 (MiGetSubsectionDriverProtos.c)
 *     MiDeletePerSessionProtos @ 0x14033E9C4 (MiDeletePerSessionProtos.c)
 */

__int64 __fastcall MiDeleteSessionDriverProtos(__int64 *a1)
{
  __int64 v1; // rdi
  _QWORD *i; // rbx
  _QWORD *SubsectionDriverProtos; // rax
  __int64 result; // rax

  v1 = *a1;
  for ( i = a1 + 16; i; i = (_QWORD *)i[2] )
  {
    if ( (*((_BYTE *)i + 34) & 2) == 0 )
    {
      SubsectionDriverProtos = (_QWORD *)MiGetSubsectionDriverProtos(i);
      if ( SubsectionDriverProtos )
      {
        i[3] = 0LL;
        SubsectionDriverProtos[8] = i;
        MiDeletePerSessionProtos(SubsectionDriverProtos);
      }
    }
  }
  result = 63487LL;
  *(_WORD *)(v1 + 12) &= ~0x800u;
  return result;
}
