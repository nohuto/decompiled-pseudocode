/*
 * XREFs of ndisIfQueryMiniportObject @ 0x1C00FE5D8
 * Callers:
 *     ndisIfQueryObject @ 0x1C00FBC40 (ndisIfQueryObject.c)
 * Callees:
 *     WPP_RECORDER_SF_DqL @ 0x1C000F670 (WPP_RECORDER_SF_DqL.c)
 *     WPP_RECORDER_SF_LqL @ 0x1C000F720 (WPP_RECORDER_SF_LqL.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     ndisIfGetMiniportStatistics @ 0x1C00FB5D0 (ndisIfGetMiniportStatistics.c)
 *     ndisIfQuerySetMiniport @ 0x1C0128DF8 (ndisIfQuerySetMiniport.c)
 */

__int64 __fastcall ndisIfQueryMiniportObject(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  __int64 v7; // r14
  unsigned int v8; // r12d
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r8d
  _NDIS_IF_BLOCK *IfBlock; // r15
  int v14; // edx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  unsigned __int8 MajorNdisVersion; // cl
  __int32 MiniportMediaConnectState; // eax
  unsigned __int64 ifLastChange; // rax
  unsigned int MiniportStatistics; // eax
  bool v21; // cf
  struct _NDIS_MINIPORT_BLOCK *v22; // rcx
  int v23; // [rsp+20h] [rbp-E0h]
  _QWORD v24[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v25; // [rsp+50h] [rbp-B0h] BYREF

  v7 = 0LL;
  v8 = 0;
  memset(&v25.Header.Revision, 0, 0xF7uLL);
  v24[0] = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, 0xFu, v23);
  memset(&v25, 0, 0xF8uLL);
  IfBlock = a1->IfBlock;
  *(_QWORD *)&v25.NdisReserved[32] = &ndisIntReqNsi;
  v14 = 8;
  DriverHandle = a1->DriverHandle;
  *(_DWORD *)&v25.NdisReserved[16] |= 8u;
  v25.Header = (NDIS_OBJECT_HEADER)15466902;
  v25.DATA.QUERY_INFORMATION.Oid = 0;
  *(_QWORD *)&v25.RequestType = 2LL;
  v25.DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v25.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  if ( a2 > 0x10288 )
  {
    switch ( a2 )
    {
      case 0x1028Au:
        if ( *a3 < 4u )
          return 3221291030LL;
        *a3 = 4;
        MiniportMediaConnectState = a1->MiniportMediaConnectState;
        goto LABEL_18;
      case 0x1028Cu:
        if ( *a3 < 4u )
          return 3221291030LL;
        *a3 = 4;
        MiniportMediaConnectState = a1->MiniportMediaDuplexState;
        goto LABEL_18;
      case 0x20106u:
        if ( *a3 < 0x90u )
          return 3221291030LL;
        *a3 = 144;
        MiniportStatistics = ndisIfGetMiniportStatistics(a1, (_OWORD *)a4, 0LL);
        goto LABEL_82;
      case 0x20202u:
        if ( *a3 < 8u )
          return 3221291030LL;
        v25.DATA.QUERY_INFORMATION.Oid = 131586;
        break;
      case 0x20208u:
        if ( *a3 < 8u )
          return 3221291030LL;
        v25.DATA.QUERY_INFORMATION.Oid = 131592;
        break;
      default:
        switch ( a2 )
        {
          case 0x20219u:
            if ( *a3 < 8u )
              return 3221291030LL;
            *a3 = 8;
            v25.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v21 = MajorNdisVersion < 6u;
            v25.DATA.QUERY_INFORMATION.InformationBuffer = v24;
            v22 = a1;
            if ( v21 )
            {
              v25.DATA.QUERY_INFORMATION.Oid = 131591;
              ndisIfQuerySetMiniport(a1, &v25, 0LL);
              *(_QWORD *)a4 = v24[0];
              v24[0] = 0LL;
              v25.DATA.QUERY_INFORMATION.InformationBuffer = v24;
              v25.DATA.QUERY_INFORMATION.Oid = 131593;
              v25.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(a1, &v25, 0LL);
              *(_QWORD *)a4 += v24[0];
              v25.DATA.QUERY_INFORMATION.Oid = 131595;
              goto LABEL_65;
            }
            v25.DATA.QUERY_INFORMATION.Oid = 131609;
            break;
          case 0x2021Au:
            if ( *a3 < 8u )
              return 3221291030LL;
            *a3 = 8;
            v25.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v21 = MajorNdisVersion < 6u;
            v25.DATA.QUERY_INFORMATION.InformationBuffer = v24;
            v22 = a1;
            if ( v21 )
            {
              v25.DATA.QUERY_INFORMATION.Oid = 131585;
              ndisIfQuerySetMiniport(a1, &v25, 0LL);
              *(_QWORD *)a4 = v24[0];
              v24[0] = 0LL;
              v25.DATA.QUERY_INFORMATION.InformationBuffer = v24;
              v25.DATA.QUERY_INFORMATION.Oid = 131587;
              v25.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(a1, &v25, 0LL);
              *(_QWORD *)a4 += v24[0];
              v25.DATA.QUERY_INFORMATION.Oid = 131589;
              goto LABEL_65;
            }
            v25.DATA.QUERY_INFORMATION.Oid = 131610;
            break;
          case 0x2021Bu:
            if ( *a3 < 8u )
              return 3221291030LL;
            *a3 = 8;
            v25.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v21 = MajorNdisVersion < 6u;
            v25.DATA.QUERY_INFORMATION.InformationBuffer = v24;
            v22 = a1;
            if ( v21 )
            {
              v25.DATA.QUERY_INFORMATION.Oid = 131332;
              ndisIfQuerySetMiniport(a1, &v25, 0LL);
              *(_QWORD *)a4 = v24[0];
              v25.DATA.QUERY_INFORMATION.Oid = 131333;
LABEL_65:
              v24[0] = 0LL;
              v25.DATA.QUERY_INFORMATION.InformationBuffer = v24;
              v25.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(a1, &v25, 0LL);
              *(_QWORD *)a4 += v24[0];
              goto LABEL_19;
            }
            v25.DATA.QUERY_INFORMATION.Oid = 131611;
            break;
          case 0x2021Cu:
            if ( *a3 < 8u )
              return 3221291030LL;
            *a3 = 8;
            if ( MajorNdisVersion < 6u )
            {
LABEL_42:
              *(_QWORD *)a4 = v7;
              goto LABEL_19;
            }
            v25.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v25.DATA.QUERY_INFORMATION.InformationBuffer = v24;
            v25.DATA.QUERY_INFORMATION.Oid = 131612;
            v8 = ndisIfQuerySetMiniport(a1, &v25, 0LL);
            goto LABEL_69;
          default:
            goto LABEL_59;
        }
        ndisIfQuerySetMiniport(v22, &v25, 0LL);
LABEL_69:
        ifLastChange = v24[0];
        goto LABEL_30;
    }
    *a3 = 8;
    v25.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
    v25.DATA.QUERY_INFORMATION.InformationBuffer = v24;
    v8 = ndisIfQuerySetMiniport(a1, &v25, 0LL);
    if ( !v8 )
      v7 = v24[0];
    goto LABEL_42;
  }
  switch ( a2 )
  {
    case 0x10288u:
      if ( *a3 < 4u )
        return 3221291030LL;
      *a3 = 4;
      MiniportMediaConnectState = IfBlock->ifAdminStatus;
LABEL_18:
      *(_DWORD *)a4 = MiniportMediaConnectState;
      goto LABEL_19;
    case 0x10106u:
      if ( *a3 < 4u )
        return 3221291030LL;
      *a3 = 4;
      MiniportMediaConnectState = IfBlock->ifMtu;
      goto LABEL_18;
    case 0x10280u:
      if ( *a3 )
      {
        *a3 = 1;
        *(_BYTE *)a4 = IfBlock->ifPromiscuousMode;
        goto LABEL_19;
      }
      return 3221291030LL;
    case 0x10281u:
      if ( *a3 < 8u )
        return 3221291030LL;
      *a3 = 8;
      ifLastChange = IfBlock->ifLastChange;
      goto LABEL_30;
    case 0x10282u:
      if ( *a3 < 8u )
        return 3221291030LL;
      *a3 = 8;
      ifLastChange = IfBlock->ifCounterDiscontinuityTime;
      goto LABEL_30;
    case 0x10283u:
      if ( *a3 < 4u )
        return 3221291030LL;
      *a3 = 4;
      MiniportMediaConnectState = IfBlock->ifOperStatus;
      goto LABEL_18;
    case 0x10284u:
      if ( *a3 < 8u )
        return 3221291030LL;
      *a3 = 8;
      ifLastChange = a1->MiniportXmitLinkSpeed;
      goto LABEL_30;
    case 0x10285u:
      if ( *a3 < 8u )
        return 3221291030LL;
      *a3 = 8;
      ifLastChange = a1->MiniportRcvLinkSpeed;
LABEL_30:
      *(_QWORD *)a4 = ifLastChange;
      goto LABEL_19;
    case 0x10286u:
      if ( *a3 < 8u )
        return 3221291030LL;
      *a3 = 8;
      goto LABEL_42;
  }
  if ( a2 != 66183 )
  {
LABEL_59:
    if ( *a3 < 8u )
      return 3221291030LL;
    *a3 = 8;
    v25.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
    *(_QWORD *)a4 = 0LL;
    v25.DATA.QUERY_INFORMATION.Oid = a2;
    v25.DATA.QUERY_INFORMATION.InformationBuffer = (PVOID)a4;
    MiniportStatistics = ndisIfQuerySetMiniport(a1, &v25, 0LL);
LABEL_82:
    v8 = MiniportStatistics;
    goto LABEL_19;
  }
  if ( *a3 < 0xD8u )
    return 3221291030LL;
  *a3 = 216;
  *(_DWORD *)a4 = IfBlock->ifOperStatus;
  *(_DWORD *)(a4 + 4) = IfBlock->ifOperStatusFlags;
  *(_DWORD *)(a4 + 8) = a1->MiniportMediaConnectState;
  *(_DWORD *)(a4 + 12) = a1->MiniportMediaDuplexState;
  *(_QWORD *)(a4 + 24) = a1->MiniportXmitLinkSpeed;
  *(_QWORD *)(a4 + 32) = a1->MiniportRcvLinkSpeed;
  v8 = ndisIfGetMiniportStatistics(a1, (_OWORD *)(a4 + 64), 0LL);
  *(_DWORD *)(a4 + 16) = IfBlock->ifMtu;
  *(_BYTE *)(a4 + 20) = IfBlock->ifPromiscuousMode;
  *(_BYTE *)(a4 + 21) = IfBlock->ifDeviceWakeUpEnable;
  *(_QWORD *)(a4 + 40) = IfBlock->ifLastChange;
  *(_QWORD *)(a4 + 48) = IfBlock->ifCounterDiscontinuityTime;
  *(_QWORD *)(a4 + 56) = 0LL;
  *(_DWORD *)(a4 + 208) = IfBlock->CompartmentId;
  *(_DWORD *)(a4 + 212) = IfBlock->SupportedStatistics;
LABEL_19:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      v12,
      0x10u,
      (struct _GUID *)&WPP_c920fc8b5d2332d789f3c4881e4e0e63_Traceguids,
      a2,
      a4,
      *a3);
  return v8;
}
