/*
 * XREFs of ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C01BF27C
 * Callers:
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C01BFA3C (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01C03D0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01C08E0 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 * Callees:
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C01BF2B0 (_CcdLazyRetrieveSetIdFromRegistry.c)
 */

const struct CCD_SET_STRING_ID *__fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this)
{
  int SetIdFromRegistry; // eax

  SetIdFromRegistry = CcdLazyRetrieveSetIdFromRegistry(*((_QWORD *)this + 8), L"SetId", this);
  if ( SetIdFromRegistry >= 0 )
    return this;
  WdLogSingleEntry3(2LL, SetIdFromRegistry, this, *((_QWORD *)this + 8));
  return 0LL;
}
