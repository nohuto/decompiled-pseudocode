/*
 * XREFs of ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C013E360
 * Callers:
 *     ?_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C016B480 (-_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESC.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C013DDD4 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     _CcdRetrieveSubkeyInfoFromRegistry @ 0x1C013E4E8 (_CcdRetrieveSubkeyInfoFromRegistry.c)
 *     _CcdOpenRegistrySubkey @ 0x1C013E5A0 (_CcdOpenRegistrySubkey.c)
 *     _CcdOpenRegistrySubkey_0 @ 0x1C013E608 (_CcdOpenRegistrySubkey_0.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C0141B10 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C014B4A0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

__int64 __fastcall CCD_STORE::_ForEachSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        __int64 a2,
        CCD_RECENT_TOPOLOGY_RETRIEVER *a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 TopologySetIdDescriptorCallback; // rbx
  ULONG i; // edi
  int SubkeyInfoFromRegistry; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  int v25; // [rsp+38h] [rbp-29h] BYREF
  int v26; // [rsp+3Ch] [rbp-25h]
  char *v27; // [rsp+40h] [rbp-21h]
  _BYTE v28[112]; // [rsp+48h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+6Fh] BYREF
  void *v31; // [rsp+E0h] [rbp+7Fh]

  HIDWORD(Handle) = HIDWORD(a2);
  KeyHandle = 0LL;
  LODWORD(Handle) = 0;
  v4 = CcdOpenRegistrySubkey(
         (int)&KeyHandle,
         131097,
         0,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
         (PULONG)&Handle);
  TopologySetIdDescriptorCallback = v4;
  if ( v4 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
    v20[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
    v20[3] = TopologySetIdDescriptorCallback;
    v20[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v20[6] = a3;
    WdLogEvent5_WdError(v20);
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      Handle = 0LL;
      v31 = 0LL;
      SubkeyInfoFromRegistry = CcdRetrieveSubkeyInfoFromRegistry(KeyHandle, i);
      TopologySetIdDescriptorCallback = SubkeyInfoFromRegistry;
      if ( SubkeyInfoFromRegistry == -2147483622 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
        LODWORD(TopologySetIdDescriptorCallback) = 0;
        v18[3] = i;
        v18[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v18[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v18[6] = a3;
        goto LABEL_11;
      }
      if ( SubkeyInfoFromRegistry < 0 )
        break;
      v12 = v31;
      LOWORD(v25) = *((_WORD *)v31 + 6);
      HIWORD(v25) = *((_WORD *)v31 + 6);
      v26 = 0;
      v27 = (char *)v31 + 16;
      if ( (unsigned __int16)v25 != *((_DWORD *)v31 + 3) )
      {
        v21 = WdLogNewEntry5_WdAssertion((unsigned __int16)v25, v10);
        WdLogEvent5_WdAssertion(v21);
      }
      TopologySetIdDescriptorCallback = (int)CcdOpenRegistrySubkey_0(
                                               (int)&Handle,
                                               983103,
                                               (int)KeyHandle,
                                               (int)&v25,
                                               0LL);
      operator delete[](v12);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
        v23[4] = i;
        v23[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v23[3] = TopologySetIdDescriptorCallback;
        v23[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v23[7] = a3;
        WdLogEvent5_WdWarning(v23);
        goto LABEL_11;
      }
      CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR(
        (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v28,
        Handle,
        0LL);
      TopologySetIdDescriptorCallback = (int)CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
                                               (struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v28,
                                               a3);
      ZwClose(Handle);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16);
        v22[4] = i;
        v22[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v22[3] = TopologySetIdDescriptorCallback;
        v22[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v22[7] = a3;
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v28);
        goto LABEL_11;
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v28);
    }
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
    v24[4] = i;
    v24[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
    v24[3] = TopologySetIdDescriptorCallback;
    v24[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v24[7] = a3;
LABEL_11:
    ZwClose(KeyHandle);
  }
  return (unsigned int)TopologySetIdDescriptorCallback;
}
