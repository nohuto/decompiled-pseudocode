/*
 * XREFs of PepPerfStateControlHandler @ 0x1C00103A0
 * Callers:
 *     <none>
 * Callees:
 *     PepNotifyPerfSetState @ 0x1C0010244 (PepNotifyPerfSetState.c)
 */

__int64 __fastcall PepPerfStateControlHandler(__int64 a1, _QWORD *a2, char a3, char a4)
{
  __int64 result; // rax

  if ( a3 )
  {
    if ( !a4 )
      return PepNotifyPerfSetState(*(_QWORD *)(a1 + 16), *a2, BYTE1(*a2), BYTE2(*a2));
  }
  return result;
}
