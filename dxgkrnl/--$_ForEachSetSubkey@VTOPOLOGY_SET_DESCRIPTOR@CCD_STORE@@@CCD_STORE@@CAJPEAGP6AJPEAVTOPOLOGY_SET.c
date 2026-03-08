/*
 * XREFs of ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C01BE998
 * Callers:
 *     ?_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01DD570 (-_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESC.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C01BAD88 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     _CcdRetrieveSubkeyInfoFromRegistry @ 0x1C01BEB4C (_CcdRetrieveSubkeyInfoFromRegistry.c)
 *     _CcdOpenRegistrySubkey @ 0x1C01C0040 (_CcdOpenRegistrySubkey.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01C0374 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01C03D0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 */

__int64 __fastcall CCD_STORE::_ForEachSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        __int64 a2,
        CCD_RECENT_TOPOLOGY_RETRIEVER *a3)
{
  int v4; // eax
  __int64 TopologySetIdDescriptorCallback; // rbx
  ULONG i; // edi
  int SubkeyInfoFromRegistry; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _WORD v21[2]; // [rsp+38h] [rbp-59h] BYREF
  int v22; // [rsp+3Ch] [rbp-55h]
  char *v23; // [rsp+40h] [rbp-51h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v25[112]; // [rsp+78h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp+67h] BYREF
  void *KeyHandle; // [rsp+100h] [rbp+6Fh] BYREF
  void *v28; // [rsp+110h] [rbp+7Fh]

  HIDWORD(KeyHandle) = HIDWORD(a2);
  Handle = 0LL;
  LODWORD(KeyHandle) = 0;
  v4 = CcdOpenRegistrySubkey(
         &Handle,
         131097LL,
         0LL,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
         &KeyHandle);
  LODWORD(TopologySetIdDescriptorCallback) = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry4(
      2LL,
      v4,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
      CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback,
      a3);
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      KeyHandle = 0LL;
      v28 = 0LL;
      SubkeyInfoFromRegistry = CcdRetrieveSubkeyInfoFromRegistry(Handle, i);
      TopologySetIdDescriptorCallback = SubkeyInfoFromRegistry;
      if ( SubkeyInfoFromRegistry == -2147483622 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
        LODWORD(TopologySetIdDescriptorCallback) = 0;
        v17[3] = i;
        v17[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v17[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v17[6] = a3;
        goto LABEL_11;
      }
      if ( SubkeyInfoFromRegistry < 0 )
        break;
      v12 = v28;
      v21[0] = *((_WORD *)v28 + 6);
      v21[1] = *((_WORD *)v28 + 6);
      v22 = 0;
      v23 = (char *)v28 + 16;
      if ( v21[0] != *((_DWORD *)v28 + 3) )
        WdLogSingleEntry0(1LL);
      *(&ObjectAttributes.Length + 1) = 0;
      memset(&ObjectAttributes.Attributes + 1, 0, 20);
      ObjectAttributes.RootDirectory = Handle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v21;
      ObjectAttributes.Attributes = 576;
      TopologySetIdDescriptorCallback = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      operator delete(v12);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        WdLogSingleEntry5(
          3LL,
          TopologySetIdDescriptorCallback,
          i,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
          CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback,
          a3);
        goto LABEL_11;
      }
      CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR(
        (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v25,
        KeyHandle,
        0LL);
      TopologySetIdDescriptorCallback = (int)CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
                                               (struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v25,
                                               a3);
      ZwClose(KeyHandle);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
        v19[4] = i;
        v19[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v19[3] = TopologySetIdDescriptorCallback;
        v19[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v19[7] = a3;
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v25);
        goto LABEL_11;
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v25);
    }
    v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v20[4] = i;
    v20[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
    v20[3] = TopologySetIdDescriptorCallback;
    v20[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v20[7] = a3;
LABEL_11:
    ZwClose(Handle);
  }
  return (unsigned int)TopologySetIdDescriptorCallback;
}
