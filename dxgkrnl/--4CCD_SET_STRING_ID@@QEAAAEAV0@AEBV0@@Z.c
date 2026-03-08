/*
 * XREFs of ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C01BB2A4
 * Callers:
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C01BAD88 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C01BB028 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     _CcdRetrieveSetIdFromRegistry @ 0x1C01BF090 (_CcdRetrieveSetIdFromRegistry.c)
 *     ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C01BF808 (--0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01C03D0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01C0640 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C01C0978 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C01C191C (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C01C1A1C (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x1C01BB3AC (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01BB474 (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01C0374 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::operator=(CCD_SET_STRING_ID *this, __int64 a2)
{
  int v4; // eax
  _WORD *v5; // rdi
  void *v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rax

  if ( this != (CCD_SET_STRING_ID *)a2 )
  {
    if ( *(_WORD *)(a2 + 8) )
    {
      *((_DWORD *)this + 10) = 0;
      operator delete(*((void **)this + 6));
      *((_QWORD *)this + 6) = 0LL;
      v4 = CCD_SET_STRING_ID::_CopyString((struct _STRING *)((char *)this + 8), (const struct _STRING *)(a2 + 8));
      *(_DWORD *)this = v4;
      if ( v4 >= 0 )
      {
        v5 = (_WORD *)(a2 + 32);
        if ( !*(_QWORD *)(a2 + 24) || !*v5 )
          WdLogSingleEntry0(1LL);
        if ( !*(_QWORD *)(a2 + 24) || !*v5 )
        {
          CCD_SET_STRING_ID::_ParseMonitorDescriptors(this);
          return this;
        }
        if ( *v5 <= *((_WORD *)this + 16) )
          goto LABEL_12;
        v6 = (void *)*((_QWORD *)this + 3);
        *((_WORD *)this + 16) = 0;
        operator delete(v6);
        v7 = 8LL * (unsigned __int16)*v5;
        if ( !is_mul_ok((unsigned __int16)*v5, 8uLL) )
          v7 = -1LL;
        v8 = operator new[](v7, 0x63644356u, 256LL);
        *((_QWORD *)this + 3) = v8;
        if ( v8 )
        {
LABEL_12:
          memmove(*((void **)this + 3), *(const void **)(a2 + 24), 8LL * (unsigned __int16)*v5);
          *((_WORD *)this + 16) = *v5;
          return this;
        }
        WdLogSingleEntry1(6LL, 8LL * (unsigned __int16)*v5);
        *(_DWORD *)this = -1073741801;
      }
    }
    CCD_SET_STRING_ID::_Cleanup(this);
  }
  return this;
}
