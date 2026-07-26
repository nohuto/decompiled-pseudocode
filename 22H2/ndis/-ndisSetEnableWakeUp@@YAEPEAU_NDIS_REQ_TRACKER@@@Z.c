/*
 * XREFs of ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095148
 * Callers:
 *     ?ndisOidPreEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00921D0 (-ndisOidPreEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003B690 (-ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetMiniportEnableWakeUp@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C00953DC (-ndisSetMiniportEnableWakeUp@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0095710 (-ndisSetOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateWakeUpEnableToPMParametersOid@@YAHPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00969D4 (-ndisXlateWakeUpEnableToPMParametersOid@@YAHPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     McTemplateK0jqxtpp_EtwWriteTransfer @ 0x1C0096F88 (McTemplateK0jqxtpp_EtwWriteTransfer.c)
 */

unsigned __int8 __fastcall ndisSetEnableWakeUp(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_OPEN_BLOCK *v1; // r14
  unsigned __int8 v2; // di
  struct _NDIS_OID_REQUEST *v3; // rsi
  struct _NDIS_MINIPORT_BLOCK *v5; // rbp
  int v7; // eax
  int v8; // edx
  bool v9; // zf
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  unsigned __int8 v14; // [rsp+70h] [rbp+8h] BYREF

  v1 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  v2 = 0;
  v3 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v5 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v14 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCu,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)v5,
      (char)v1,
      v3);
  *((_DWORD *)a1 + 10) = 0;
  if ( v3->DATA.QUERY_INFORMATION.InformationBufferLength < 4 )
  {
    v3->DATA.QUERY_INFORMATION.BytesNeeded = 4;
    *((_DWORD *)a1 + 10) = -1073676268;
    v3->DATA.QUERY_INFORMATION.BytesWritten = 0;
LABEL_5:
    v2 = 1;
    goto LABEL_6;
  }
  if ( *((_QWORD *)a1 + 3) )
  {
    v7 = ndisSetOpenEnableWakeUp(v1, v3, &v14);
    v9 = v14 == 1;
    *((_DWORD *)a1 + 10) = v7;
    if ( v9 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xBu,
          0xDu,
          (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids);
      if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
        McTemplateK0jqxtpp_EtwWriteTransfer(
          v1->MiniportHandle,
          v8,
          &v1->MiniportHandle->InterfaceGuid,
          &v1->MiniportHandle->InterfaceGuid,
          v1->MiniportHandle->IfIndex,
          v1->MiniportHandle->IfBlock->NetLuid.Value,
          1,
          (char)v1,
          (char)v3);
    }
    v2 = 1;
  }
  else if ( *(_QWORD *)a1 )
  {
    if ( v5->MajorNdisVersion > 6u || v5->MajorNdisVersion == 6 && v5->MinorNdisVersion >= 0x14u )
    {
      v13 = ndisXlateWakeUpEnableToPMParametersOid(v3);
      *((_DWORD *)a1 + 10) = v13;
      if ( v13 )
        goto LABEL_5;
      v2 = ndisPreSetPMParameters(a1);
    }
    else
    {
      v10 = ndisSetMiniportEnableWakeUp(v5, v3, &v14);
      v2 = v14;
      *((_DWORD *)a1 + 10) = v10;
      if ( v2 == 1 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xBu,
            0xEu,
            (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
            (char)v5,
            (char)v1,
            v3);
        if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
          McTemplateK0jqxtpp_EtwWriteTransfer(
            v12,
            v11,
            (_DWORD)v5 + 4008,
            (_DWORD)v5 + 4008,
            v5->IfIndex,
            v5->NetLuid.Value,
            0,
            (char)v1,
            (char)v3);
      }
    }
  }
LABEL_6:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xFu,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)v5,
      (char)v1,
      v3);
  return v2;
}
