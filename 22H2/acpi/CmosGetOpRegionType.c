/*
 * XREFs of CmosGetOpRegionType @ 0x1C0019D70
 * Callers:
 *     CmosConfigSpaceHandler @ 0x1C0019B90 (CmosConfigSpaceHandler.c)
 * Callees:
 *     CmosTranslatePNPIDToEnum @ 0x1C0019E10 (CmosTranslatePNPIDToEnum.c)
 *     ACPIGet @ 0x1C00293A4 (ACPIGet.c)
 *     AMLIIsNamedChildPresent @ 0x1C00487DC (AMLIIsNamedChildPresent.c)
 */

__int64 __fastcall CmosGetOpRegionType(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  AMLIIsNamedChildPresent(*(_QWORD *)(a3 + 56), 1145653343LL);
  result = ACPIGet(
             *(_QWORD *)(**(_QWORD **)(a3 + 56) + 104LL),
             1145653343,
             671613446,
             0,
             0,
             (__int64)CmosTranslatePNPIDToEnum,
             a3,
             a3 + 64,
             0LL);
  if ( (_DWORD)result == 259 )
    return 259LL;
  if ( (int)result >= 0 )
    return CmosTranslatePNPIDToEnum(a1, 0LL, 0LL, a3);
  return result;
}
