/*
 * XREFs of ?_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z @ 0x1C01C09B8
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01C03D0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01BE5F4 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 */

struct CCD_TOPOLOGY *__fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_GetOverflowTopology(
        CCD_RECENT_TOPOLOGY_RETRIEVER *this,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int16 v6; // ax
  char *v8; // rbx

  v4 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)this + 64LL);
  if ( v5 )
    v6 = *(_WORD *)(v5 + 22);
  else
    v6 = 0;
  if ( a2 <= v6 )
    return *(struct CCD_TOPOLOGY **)this;
  v8 = (char *)this + 80;
  if ( (unsigned __int16)(a2 + 16) <= (unsigned __int16)CCD_TOPOLOGY::Reserve(
                                                          (CCD_RECENT_TOPOLOGY_RETRIEVER *)((char *)this + 80),
                                                          (unsigned __int16)(a2 + 16),
                                                          a3,
                                                          a4) )
    return (struct CCD_TOPOLOGY *)v8;
  return (struct CCD_TOPOLOGY *)v4;
}
