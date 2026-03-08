/*
 * XREFs of ?FindElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@I@Z @ 0x1800BC868
 * Callers:
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180097AB0 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z @ 0x1800BC5F8 (-RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z.c)
 *     ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x1800BC710 (-AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z.c)
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800D27C0 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetSourceAnimationsForProperty@CResource@@QEAAPEAV?$DynArray@PEAVCBaseExpression@@$0A@@@I@Z @ 0x1800EF8B4 (-GetSourceAnimationsForProperty@CResource@@QEAAPEAV-$DynArray@PEAVCBaseExpression@@$0A@@@I@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 */

PVOID __fastcall CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(
        struct _RTL_GENERIC_TABLE *a1,
        int a2)
{
  PVOID v2; // rbx
  int Buffer; // [rsp+20h] [rbp-38h] BYREF
  void *lpMem[2]; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+40h] [rbp-18h]

  Buffer = a2;
  v6 = 0LL;
  v7 = 0;
  *(_OWORD *)lpMem = 0LL;
  v2 = RtlLookupElementGenericTable(a1, &Buffer);
  if ( lpMem[0] != lpMem[1] )
    operator delete(lpMem[0]);
  return v2;
}
