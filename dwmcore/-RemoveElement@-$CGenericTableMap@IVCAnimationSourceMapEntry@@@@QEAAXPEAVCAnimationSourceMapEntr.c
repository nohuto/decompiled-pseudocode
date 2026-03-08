/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAXPEAVCAnimationSourceMapEntry@@@Z @ 0x1800BC40C
 * Callers:
 *     ??1CResource@@MEAA@XZ @ 0x18009A0B0 (--1CResource@@MEAA@XZ.c)
 *     ?RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z @ 0x1800BC5F8 (-RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)Buffer + 8);
  if ( !RtlDeleteElementGenericTable(Table, Buffer) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
