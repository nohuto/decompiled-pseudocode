/*
 * XREFs of MonitorFromHdev @ 0x1C003C08C
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0014608 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     UserGetMonitorDC @ 0x1C003BFDC (UserGetMonitorDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorFromHdev(__int64 a1)
{
  __int64 result; // rax

  for ( result = *((_QWORD *)gpDispInfo + 13); result && *(_QWORD *)(result + 80) != a1; result = *(_QWORD *)(result + 56) )
    ;
  return result;
}
