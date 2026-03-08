/*
 * XREFs of ?vDisableTimers@@YAXK@Z @ 0x1C00F1730
 * Callers:
 *     vDisableSynchronize @ 0x1C00F1660 (vDisableSynchronize.c)
 *     ?vDisableSynchronizeNKAPC@@YAXPEAX00@Z @ 0x1C02AA340 (-vDisableSynchronizeNKAPC@@YAXPEAX00@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vDisableTimers(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rdx

  v1 = a1;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  if ( (v1 & 0x40) != 0 )
    --*(_DWORD *)(v2 + 20248);
  if ( v1 < 0 )
    --*(_QWORD *)(v2 + 20256);
}
