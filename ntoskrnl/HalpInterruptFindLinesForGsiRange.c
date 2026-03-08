/*
 * XREFs of HalpInterruptFindLinesForGsiRange @ 0x14028EF5C
 * Callers:
 *     HalDisableInterrupt @ 0x14028E8F0 (HalDisableInterrupt.c)
 *     HalpInterruptGsiToLine @ 0x14028EF10 (HalpInterruptGsiToLine.c)
 *     HalpInterruptRegisterLine @ 0x1403748A0 (HalpInterruptRegisterLine.c)
 *     HalpMaskInterrupt @ 0x140376370 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x140379600 (HalpUnmaskInterrupt.c)
 *     HalpInterruptApplyOverrides @ 0x140379748 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGetApicVersion @ 0x1403A5A50 (HalpInterruptGetApicVersion.c)
 *     HalpInterruptRequestInterrupt @ 0x1405031A0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x140504748 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1405047BC (HalpInterruptServiceActiveBoth.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall HalpInterruptFindLinesForGsiRange(unsigned int a1, unsigned int a2)
{
  ULONG_PTR *v2; // r8
  ULONG_PTR *v5; // r11
  _QWORD **v6; // r11
  _QWORD *v7; // r9
  _DWORD *v8; // r10
  unsigned int v9; // edx
  unsigned int v10; // eax

  v2 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  while ( v2 != &HalpRegisteredInterruptControllers )
  {
    v5 = v2;
    v2 = (ULONG_PTR *)*v2;
    v6 = (_QWORD **)(v5 + 33);
    v7 = *v6;
    while ( v7 != v6 )
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
      v9 = v8[7];
      if ( v9 != -1 )
      {
        if ( v9 >= a1 && v9 < a2 )
          return v8;
        v10 = v8[6] - v8[5] + v9 - 1;
        if ( v10 < a2 && v10 >= a1 )
          return v8;
        if ( v10 >= a2 && v9 < a1 )
          return v8;
      }
    }
  }
  return 0LL;
}
