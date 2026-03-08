/*
 * XREFs of KiProcessPendingDisconnect @ 0x14039E4D0
 * Callers:
 *     KiInterruptDispatchCommon @ 0x14039E224 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KiDisconnectInterruptInternal @ 0x14028E85C (KiDisconnectInterruptInternal.c)
 *     KiDisconnectSecondaryInterruptInternal @ 0x14056F5B0 (KiDisconnectSecondaryInterruptInternal.c)
 */

_QWORD *__fastcall KiProcessPendingDisconnect(int a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  __int64 v6; // rsi
  int v7; // eax
  _QWORD *v8; // rbx

  result = (_QWORD *)*(unsigned int *)(a2 + 104);
  if ( ((unsigned __int8)result & 2) != 0 )
  {
    result = 0LL;
    if ( !*(_WORD *)(a2 + 102) )
    {
      v6 = *(_QWORD *)(a2 + 144);
      if ( a1 )
        v7 = KiDisconnectSecondaryInterruptInternal(a2);
      else
        v7 = KiDisconnectInterruptInternal(a2, *(_QWORD *)(v6 + 8));
      *(_DWORD *)(v6 + 16) = v7;
      v8 = (_QWORD *)(a2 + 8);
      result = *(_QWORD **)(a3 + 8);
      if ( *result != a3 )
        __fastfail(3u);
      *v8 = a3;
      v8[1] = result;
      *result = v8;
      *(_QWORD *)(a3 + 8) = v8;
    }
  }
  return result;
}
