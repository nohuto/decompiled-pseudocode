/*
 * XREFs of ?_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_UNICODE_STRING@@@Z @ 0x1C01C0C8C
 * Callers:
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C01BF2D8 (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C01C191C (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass(int a1, __int64 a2)
{
  const wchar_t *v3; // rcx
  __int64 result; // rax

  switch ( a1 )
  {
    case 1:
      v3 = L"Internal";
LABEL_11:
      *(_WORD *)(a2 + 2) = 18;
      result = 16LL;
      goto LABEL_9;
    case 2:
      v3 = L"Clone";
      *(_WORD *)(a2 + 2) = 12;
      result = 10LL;
      goto LABEL_9;
    case 4:
      v3 = L"eXtend";
      goto LABEL_7;
    case 8:
      v3 = L"External";
      goto LABEL_11;
  }
  if ( a1 != 15 )
  {
    WdLogSingleEntry1(1LL, a1);
    v3 = L"Recent";
    *(_WORD *)(a2 + 2) = 14;
    goto LABEL_8;
  }
  v3 = L"Recent";
LABEL_7:
  *(_WORD *)(a2 + 2) = 14;
LABEL_8:
  result = 12LL;
LABEL_9:
  *(_QWORD *)(a2 + 8) = v3;
  *(_WORD *)a2 = result;
  return result;
}
