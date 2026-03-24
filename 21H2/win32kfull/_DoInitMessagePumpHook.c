/*
 * XREFs of _DoInitMessagePumpHook @ 0x1C0137A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DoInitMessagePumpHook()
{
  __int64 result; // rax

  result = 1LL;
  ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL);
  return result;
}
