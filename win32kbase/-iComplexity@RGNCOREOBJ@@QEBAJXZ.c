/*
 * XREFs of ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1C004832C
 * Callers:
 *     GreExtCreateRegion @ 0x1C0019830 (GreExtCreateRegion.c)
 *     GreGetClipBox @ 0x1C001AB40 (GreGetClipBox.c)
 *     GreCopyVisRgn @ 0x1C003CF00 (GreCopyVisRgn.c)
 *     GreCombineRgn @ 0x1C0041BD0 (GreCombineRgn.c)
 *     GreOffsetRgn @ 0x1C0042C20 (GreOffsetRgn.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0044F90 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C0048610 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?IsEmpty@CRegion@@UEBA_NXZ @ 0x1C00B95F0 (-IsEmpty@CRegion@@UEBA_NXZ.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0184084 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0189A30 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C018BD80 (EngUpdateDeviceSurface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RGNCOREOBJ::iComplexity(RGNCOREOBJ *this)
{
  __int64 result; // rax

  result = 1LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 28LL) != 1 )
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 24LL) > 0x38u) + 2;
  return result;
}
