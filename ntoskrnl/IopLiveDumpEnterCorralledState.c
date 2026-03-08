/*
 * XREFs of IopLiveDumpEnterCorralledState @ 0x140A980DC
 * Callers:
 *     IopLiveDumpCapture @ 0x14094AEEC (IopLiveDumpCapture.c)
 *     IopLiveDumpEndMirroringCallback @ 0x140A98070 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     IopLiveDumpGetMillisecondCounter @ 0x14055793C (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpCorralProcessors @ 0x140A97E30 (IopLiveDumpCorralProcessors.c)
 */

__int64 __fastcall IopLiveDumpEnterCorralledState(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  IopLiveDumpCorralProcessors((char *)(a1 + 312));
  result = IopLiveDumpGetMillisecondCounter(0);
  *(_QWORD *)(a1 + 536) = result;
  return result;
}
