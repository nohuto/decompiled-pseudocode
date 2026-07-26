/*
 * XREFs of ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008A26C
 * Callers:
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C008A084 (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C008A47C (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C0067E98 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 */

__int64 __fastcall ndisSetMiniportRSSv2ParametersHelper(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  UINT InformationBufferLength; // ecx
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  _DWORD *InformationBuffer; // rdx
  unsigned int v8; // eax
  int v9; // r10d
  unsigned int v10; // r8d
  UINT v11; // eax
  int v12; // r8d
  __int64 v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+38h] [rbp-30h]
  char v16[4]; // [rsp+38h] [rbp-30h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x19u,
      (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
      (char)a1,
      a2);
  InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  if ( InformationBufferLength < 0x1C )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
    v5 = -1073676268;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v6 = 26;
LABEL_6:
      v15 = -1073676268;
LABEL_21:
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        v6,
        (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
        (char)a1,
        (char)a2,
        v15);
      goto LABEL_22;
    }
    goto LABEL_25;
  }
  InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v8 = InformationBuffer[4];
  v9 = InformationBuffer[3];
  v10 = v9 + v8;
  if ( v9 + v8 < v8 )
  {
    v5 = -1073676267;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v6 = 27;
      v15 = -1073676267;
      goto LABEL_21;
    }
    goto LABEL_25;
  }
  v11 = 28;
  if ( v10 > 0x1C )
    v11 = v10;
  v12 = InformationBuffer[1];
  if ( (v12 & 1) == 0 || (v12 & 4) == 0 || v9 == 40 )
  {
    v5 = 0;
    if ( InformationBufferLength >= v11 )
      goto LABEL_22;
    a2->DATA.QUERY_INFORMATION.BytesNeeded = v11;
    v5 = -1073676268;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v6 = 29;
      goto LABEL_6;
    }
LABEL_25:
    if ( (byte_1C00E71C4 & 4) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        a1->IfIndex,
        &SetMiniportRSSCapsFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        v5,
        1,
        (char)a2);
    return v5;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v16 = 0;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0x1Cu,
      (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v16);
  }
  v5 = -1073676267;
LABEL_22:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = v5;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Eu,
      (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
      (char)a1,
      (char)a2,
      v14);
  }
  if ( v5 )
    goto LABEL_25;
  return v5;
}
