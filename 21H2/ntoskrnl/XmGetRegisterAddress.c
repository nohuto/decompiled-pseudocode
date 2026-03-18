/*
 * XREFs of XmGetRegisterAddress @ 0x1403A343C
 * Callers:
 *     XmMoveRegImmediate @ 0x1403A2920 (XmMoveRegImmediate.c)
 *     XmMoveGeneral @ 0x1403A2980 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x1403A2EE0 (XmGroup1General.c)
 *     XmEvaluateAddressSpecifier @ 0x1403A30B4 (XmEvaluateAddressSpecifier.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmGetRegisterAddress(__int64 a1, unsigned int a2)
{
  if ( a2 < 4 || *(_DWORD *)(a1 + 120) )
    return a1 + 4 * (a2 + 6LL);
  else
    return a1 + 25 + 4LL * (a2 - 4);
}
