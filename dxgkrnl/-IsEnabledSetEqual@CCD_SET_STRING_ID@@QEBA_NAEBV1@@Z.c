/*
 * XREFs of ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C01C0A20
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01C03D0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C01BAF3C (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 *     ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1C01BF18C (-_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::IsEnabledSetEqual(CCD_SET_STRING_ID *this, const struct CCD_SET_STRING_ID *a2)
{
  __int16 v2; // ax
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  struct _STRING v9; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING v10; // [rsp+30h] [rbp-18h] BYREF

  v2 = *((_WORD *)this + 16);
  if ( v2 == *((_WORD *)a2 + 16) )
  {
    v5 = 0;
    if ( !v2 )
      return 1;
    while ( 1 )
    {
      v6 = *((_QWORD *)this + 3);
      v10 = 0LL;
      CCD_SET_STRING_ID::QueryMonitorId(this, *(unsigned __int16 *)(v6 + 8LL * v5 + 6), &v10);
      v7 = *((_QWORD *)a2 + 3);
      v9 = 0LL;
      CCD_SET_STRING_ID::QueryMonitorId(a2, *(unsigned __int16 *)(v7 + 8LL * v5 + 6), &v9);
      if ( CCD_SET_STRING_ID::_StringCompare(&v10, &v9) )
        break;
      if ( ++v5 >= *((unsigned __int16 *)this + 16) )
        return 1;
    }
  }
  return 0;
}
