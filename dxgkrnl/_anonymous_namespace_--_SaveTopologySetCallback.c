/*
 * XREFs of _anonymous_namespace_::_SaveTopologySetCallback @ 0x1C03B7D70
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C03BE870 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 */

__int64 __fastcall anonymous_namespace_::_SaveTopologySetCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *a1,
        const struct CCD_TOPOLOGY *a2,
        bool a3)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::SaveTopology(a1, a2, a3);
  v5 = v4;
  if ( v4 < 0 )
    WdLogSingleEntry3(2LL, v4, a2, *((_QWORD *)a2 + 8));
  return v5;
}
