/*
 * XREFs of MonitorFromHdev @ 0x1C0071B98
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0063D18 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     UserGetMonitorDC @ 0x1C0071A64 (UserGetMonitorDC.c)
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
