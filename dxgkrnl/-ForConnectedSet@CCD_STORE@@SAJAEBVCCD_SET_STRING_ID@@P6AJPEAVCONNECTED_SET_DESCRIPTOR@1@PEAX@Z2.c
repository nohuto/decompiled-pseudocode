/*
 * XREFs of ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C01C011C
 * Callers:
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C01C0ADC (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C0D10 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C01BB13C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C01BF8C0 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 */

__int64 __fastcall CCD_STORE::ForConnectedSet(
        const struct CCD_SET_STRING_ID *a1,
        int (*a2)(struct CCD_STORE::CONNECTED_SET_DESCRIPTOR *, void *),
        __int64 a3)
{
  struct _STRING *ConnectedSetStr; // rax
  __int64 v6; // rcx

  ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr(a1);
  return CCD_STORE::_ForSetSubkey<CCD_STORE::CONNECTED_SET_DESCRIPTOR>(
           v6,
           ConnectedSetStr,
           (int (__fastcall *)(_BYTE *, __int64))a2,
           a3);
}
