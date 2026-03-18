/*
 * XREFs of GreGetSystemFont @ 0x1C00BEE80
 * Callers:
 *     InitUserScreen @ 0x1C005CD6C (InitUserScreen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetSystemFont(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = a1;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v2 + 3168) + 104LL);
  result = *(_QWORD *)(*(_QWORD *)(v2 + 3176) + 104LL);
  if ( !result )
    return *(_QWORD *)(*(_QWORD *)(v2 + 3168) + 104LL);
  return result;
}
