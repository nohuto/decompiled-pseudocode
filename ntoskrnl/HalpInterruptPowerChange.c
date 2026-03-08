/*
 * XREFs of HalpInterruptPowerChange @ 0x140518364
 * Callers:
 *     HalpInterruptPowerComponentActiveCallback @ 0x140518400 (HalpInterruptPowerComponentActiveCallback.c)
 *     HalpInterruptPowerComponentIdleCallback @ 0x140518420 (HalpInterruptPowerComponentIdleCallback.c)
 *     HalpInterruptPowerCriticalTransitionCallback @ 0x140518460 (HalpInterruptPowerCriticalTransitionCallback.c)
 * Callees:
 *     HalpInterruptInitializeController @ 0x14037B24C (HalpInterruptInitializeController.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HalpInterruptRestoreController @ 0x140518478 (HalpInterruptRestoreController.c)
 */

__int64 __fastcall HalpInterruptPowerChange(ULONG_PTR BugCheckParameter3, char a2)
{
  int v2; // eax
  __int64 result; // rax
  int v5; // eax

  v2 = *(_DWORD *)(BugCheckParameter3 + 248);
  if ( a2 )
  {
    result = v2 & 0xFFFFFFFB;
    *(_DWORD *)(BugCheckParameter3 + 248) = result;
    if ( (result & 2) == 0 )
    {
      v5 = HalpInterruptInitializeController(BugCheckParameter3);
      if ( v5 < 0 )
        KeBugCheckEx(0x5Cu, 0x204uLL, HalpInterruptLastProblem, BugCheckParameter3, v5);
      result = HalpInterruptRestoreController(BugCheckParameter3, 0LL);
      if ( (int)result < 0 )
        KeBugCheckEx(0x5Cu, 0x204uLL, HalpInterruptLastProblem, BugCheckParameter3, (int)result);
    }
  }
  else
  {
    result = v2 & 0xFFFFFFFA | 4;
    *(_DWORD *)(BugCheckParameter3 + 248) = result;
  }
  return result;
}
