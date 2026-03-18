/*
 * XREFs of ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0022E08
 * Callers:
 *     GreOffsetRgn @ 0x1C001B040 (GreOffsetRgn.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00201E0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0024B20 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreExtCreateRegion @ 0x1C00311B0 (GreExtCreateRegion.c)
 *     GreCombineRgn @ 0x1C006EFF0 (GreCombineRgn.c)
 *     ?IsEmpty@CRegion@@UEBA_NXZ @ 0x1C009CF30 (-IsEmpty@CRegion@@UEBA_NXZ.c)
 *     GreCopyVisRgn @ 0x1C00CA430 (GreCopyVisRgn.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00CC88C (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C016D4E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C016EED0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RGNOBJ::iComplexity(RGNOBJ *this)
{
  __int64 result; // rax

  result = 1LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 84LL) != 1 )
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 80LL) > 0x38u) + 2;
  return result;
}
