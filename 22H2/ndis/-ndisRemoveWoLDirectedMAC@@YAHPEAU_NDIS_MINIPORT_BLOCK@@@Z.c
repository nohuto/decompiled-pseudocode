/*
 * XREFs of ?ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012095C
 * Callers:
 *     ?ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z @ 0x1C00A7FA0 (-ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z.c)
 *     ?ndisWdfPowerResumeComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A8C70 (-ndisWdfPowerResumeComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F9820 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00FA400 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisRemoveWoLDirectedMAC(struct _NDIS_FILTER_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *v2; // rsi
  unsigned int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp-D8h]
  int v6; // [rsp+48h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v7; // [rsp+58h] [rbp-B0h] BYREF

  memset(&v7.Header.Revision, 0, 0xF7uLL);
  v2 = *(struct _NDIS_MINIPORT_AOAC **)&a1[4].PMCurrentParameters.EnabledProtocolOffloads;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x95u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      a1);
  v6 = 131073;
  memset(&v7, 0, 0xF8uLL);
  v7.PortNumber = 0;
  *(_DWORD *)&v7.NdisReserved[16] |= 0x408u;
  *(_QWORD *)&v7.NdisReserved[32] = &ndisIntReqGeneric;
  v7.Header = (NDIS_OBJECT_HEADER)15466902;
  v7.DATA.QUERY_INFORMATION.InformationBuffer = &v6;
  v7.DATA.QUERY_INFORMATION.Oid = -50265845;
  v7.RequestType = NdisRequestSetInformation;
  v7.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
  KeInitializeEvent((PRKEVENT)&v7.NdisReserved[40], NotificationEvent, 0);
  v3 = ndisMInvokeOidRequest(a1, &v7);
  if ( v3 == 259 )
  {
    ndisWaitForKernelObject(&v7.NdisReserved[40]);
    v3 = *(_DWORD *)&v7.NdisReserved[8];
  }
  if ( v3 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v3;
    LODWORD(v5) = v3;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      0x96u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      v5);
  }
  else
  {
    *((_BYTE *)v2 + 1104) = 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x97u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      v3);
  return v3;
}
