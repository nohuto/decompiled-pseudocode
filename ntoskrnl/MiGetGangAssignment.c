/*
 * XREFs of MiGetGangAssignment @ 0x140386CC4
 * Callers:
 *     MiStartDpcGang @ 0x140386B74 (MiStartDpcGang.c)
 *     MiDpcGangTarget @ 0x140664900 (MiDpcGangTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetGangAssignment(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // r8
  _QWORD *v3; // r8
  bool v4; // zf

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 176)) - 1LL;
  if ( v2 >= *(unsigned int *)(a1 + 188) )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 184) & 1) != 0 )
  {
    v3 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * v2);
    v4 = v3[1] == 0LL;
  }
  else
  {
    v3 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v2);
    v4 = *v3 == 0LL;
  }
  if ( v4 )
    return 0LL;
  *a2 = v3;
  return 1LL;
}
