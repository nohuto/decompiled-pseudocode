/*
 * XREFs of ?GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C00139F0
 * Callers:
 *     _BmlLogDiagnosticsPacket @ 0x1C016B1CC (_BmlLogDiagnosticsPacket.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetFirstPath(DMMVIDPNTOPOLOGY *this)
{
  _QWORD *v1; // rcx

  v1 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v1 == v1 )
    return 0LL;
  else
    return (struct DMMVIDPNPRESENTPATH *)(*v1 - 8LL);
}
