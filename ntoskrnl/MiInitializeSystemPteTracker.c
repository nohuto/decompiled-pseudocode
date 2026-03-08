/*
 * XREFs of MiInitializeSystemPteTracker @ 0x140B6B974
 * Callers:
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 */

_QWORD *MiInitializeSystemPteTracker()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  if ( ((unsigned __int8)&stru_140C68000 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  qword_140C68010 = 0LL;
  result = &unk_140C69EB0;
  v1 = 16LL;
  stru_140C68000 = 0LL;
  do
  {
    result[1] = result;
    *result = result;
    result += 2;
    --v1;
  }
  while ( v1 );
  return result;
}
