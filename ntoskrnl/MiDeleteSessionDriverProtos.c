/*
 * XREFs of MiDeleteSessionDriverProtos @ 0x14067F83C
 * Callers:
 *     MiMapSystemImage @ 0x1407F5DFC (MiMapSystemImage.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MiCreateSessionDriverProtos @ 0x140A4316C (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiDeletePerSessionProtos @ 0x1402CF6DC (MiDeletePerSessionProtos.c)
 *     MiGetSubsectionDriverProtos @ 0x1403443A4 (MiGetSubsectionDriverProtos.c)
 */

__int64 __fastcall MiDeleteSessionDriverProtos(__int64 *a1)
{
  __int64 v1; // rdi
  _QWORD *i; // rbx
  __int64 SubsectionDriverProtos; // rax
  __int64 result; // rax

  v1 = *a1;
  for ( i = a1 + 16; i; i = (_QWORD *)i[2] )
  {
    if ( (*((_BYTE *)i + 34) & 2) == 0 )
    {
      SubsectionDriverProtos = MiGetSubsectionDriverProtos(i);
      if ( SubsectionDriverProtos )
      {
        i[3] = 0LL;
        *(_QWORD *)(SubsectionDriverProtos + 64) = i;
        MiDeletePerSessionProtos((char *)SubsectionDriverProtos);
      }
    }
  }
  result = 63487LL;
  *(_WORD *)(v1 + 12) &= ~0x800u;
  return result;
}
