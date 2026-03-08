/*
 * XREFs of _CCD_TOPOLOGY::GetModalitySetId_::_2_::_AUTO_USING_PM_MapIndex2374::__AUTO_USING_PM_MapIndex2374 @ 0x1C01C2754
 * Callers:
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C01C1A1C (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_TOPOLOGY::GetModalitySetId_::_2_::_AUTO_USING_PM_MapIndex2374::__AUTO_USING_PM_MapIndex2374(
        __int64 *a1)
{
  unsigned int i; // r8d
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax

  for ( i = 0; i < *((_DWORD *)a1 + 2); *(_DWORD *)(v3 + *a1 + 256) &= ~2u )
  {
    v2 = i++;
    v3 = 296 * v2;
    *(_DWORD *)(v3 + *a1 + 264) = 0;
    result = *a1;
  }
  return result;
}
