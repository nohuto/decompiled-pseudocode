/*
 * XREFs of ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0031758
 * Callers:
 *     GreExtCreateRegion @ 0x1C0024210 (GreExtCreateRegion.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C002E010 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0033EC0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreOffsetRgn @ 0x1C003A600 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x1C003ACD0 (GreCombineRgn.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0067670 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     GreGetRgnBox @ 0x1C00858A0 (GreGetRgnBox.c)
 *     ?IsEmpty@CRegion@@UEBA_NXZ @ 0x1C00944D0 (-IsEmpty@CRegion@@UEBA_NXZ.c)
 *     GreCopyVisRgn @ 0x1C00BBBB0 (GreCopyVisRgn.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00BDCFC (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0140900 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C0142300 (EngUpdateDeviceSurface.c)
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
