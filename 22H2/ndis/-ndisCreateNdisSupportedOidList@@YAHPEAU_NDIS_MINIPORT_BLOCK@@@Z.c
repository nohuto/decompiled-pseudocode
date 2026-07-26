/*
 * XREFs of ?ndisCreateNdisSupportedOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0038CE8
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C0130258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisCreateNdisSupportedOidList(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  unsigned __int8 MajorNdisVersion; // cl
  int v4; // eax
  unsigned int v5; // eax
  unsigned int *PoolWithTag; // rax
  int v7; // r8d
  unsigned int *v8; // rcx

  v2 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x13u,
      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
      a1);
  MajorNdisVersion = a1->MajorNdisVersion;
  v4 = MajorNdisVersion < 6u ? 45 : 83;
  if ( a1->MediaType == NdisMedium802_3 )
  {
    v4 = MajorNdisVersion < 6u ? 46 : 84;
    if ( MajorNdisVersion >= 6u )
      v4 = MajorNdisVersion < 6u ? 50 : 88;
  }
  v5 = 4 * v4;
  a1->ndisSupportedOidListLength = v5;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x6D61444Eu);
  a1->ndisSupportedOidList = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = 45;
    *(_OWORD *)PoolWithTag = ndisHandledNdis5Ndis6GenOids;
    *((_OWORD *)PoolWithTag + 1) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 1);
    *((_OWORD *)PoolWithTag + 2) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 2);
    *((_OWORD *)PoolWithTag + 3) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 3);
    *((_OWORD *)PoolWithTag + 4) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 4);
    *((_OWORD *)PoolWithTag + 5) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 5);
    *((_OWORD *)PoolWithTag + 6) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 6);
    *((_OWORD *)PoolWithTag + 7) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 7);
    *((_OWORD *)PoolWithTag + 8) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 8);
    *((_OWORD *)PoolWithTag + 9) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 9);
    *((_OWORD *)PoolWithTag + 10) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 10);
    PoolWithTag[44] = *((_DWORD *)&ndisHandledNdis5Ndis6GenOids + 44);
    if ( a1->MajorNdisVersion >= 6u )
    {
      v8 = a1->ndisSupportedOidList + 45;
      v7 = 83;
      *(_OWORD *)v8 = ndisHandledNdis6OnlyGenOids;
      *((_OWORD *)v8 + 1) = *(_OWORD *)(0x1C0000000LL + 1321712);
      *((_OWORD *)v8 + 2) = *(_OWORD *)(0x1C0000000LL + 1321728);
      *((_OWORD *)v8 + 3) = *(_OWORD *)(0x1C0000000LL + 1321744);
      *((_OWORD *)v8 + 4) = *(_OWORD *)(0x1C0000000LL + 1321760);
      *((_OWORD *)v8 + 5) = *(_OWORD *)(0x1C0000000LL + 1321776);
      *((_OWORD *)v8 + 6) = *(_OWORD *)(0x1C0000000LL + 1321792);
      *((_OWORD *)v8 + 7) = *(_OWORD *)(0x1C0000000LL + 1321808);
      *((_OWORD *)v8 + 8) = *(_OWORD *)(0x1C0000000LL + 1321824);
      *((_QWORD *)v8 + 18) = *(_QWORD *)(0x1C0000000LL + 1321840);
    }
    if ( a1->MediaType == NdisMedium802_3 )
    {
      a1->ndisSupportedOidList[v7] = (unsigned int)ndisHandledNdis5Ndis6_802_3_Oids;
      if ( a1->MajorNdisVersion >= 6u )
        *(_OWORD *)&a1->ndisSupportedOidList[v7 + 1] = *(_OWORD *)&ndisHandledNdis6Only_802_3_Oids;
    }
  }
  else
  {
    v2 = -1073741670;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x14u,
      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
      (char)a1,
      v2);
  return v2;
}
