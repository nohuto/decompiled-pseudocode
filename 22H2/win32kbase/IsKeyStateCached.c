/*
 * XREFs of IsKeyStateCached @ 0x1C0007390
 * Callers:
 *     NtUserGetKeyboardState @ 0x1C0006BE0 (NtUserGetKeyboardState.c)
 *     AllocQueue @ 0x1C00071A0 (AllocQueue.c)
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01BCFD4 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsKeyStateCached(unsigned __int8 a1)
{
  int v1; // edx
  _BYTE *i; // rax

  if ( a1 >= 0x20u )
  {
    v1 = 0;
    for ( i = &unk_1C0211308; *i != a1; ++i )
    {
      if ( (unsigned int)++v1 >= 0xE )
        return a1 <= 0xA5u
            && (a1 < 0x5Du || a1 >= 0xA0u)
            && a1 >= 0x5Bu
            && (a1 <= 0x5Cu || (unsigned __int8)(a1 + 96) <= 5u);
    }
  }
  return 1;
}
