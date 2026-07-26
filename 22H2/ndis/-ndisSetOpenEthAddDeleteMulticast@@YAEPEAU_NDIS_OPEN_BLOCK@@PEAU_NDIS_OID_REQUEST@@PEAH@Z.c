/*
 * XREFs of ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C003C5C0
 * Callers:
 *     ?ndisOidPreEthMulticastOid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003C3E0 (-ndisOidPreEthMulticastOid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqDD @ 0x1C002CD18 (WPP_RECORDER_SF_qqqDD.c)
 *     ?ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C002CE28 (-ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x1C003C978 (-ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 *     ?ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x1C00656F8 (-ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C0067E98 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 */

unsigned __int8 __fastcall ndisSetOpenEthAddDeleteMulticast(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // r15
  unsigned __int8 v4; // r14
  int *v5; // r12
  _X_FILTER *EthDB; // rbx
  struct _NDIS_MINIPORT_BLOCK *v9; // rcx
  int v10; // edx
  int IsValidMulticastFilter; // ebp
  unsigned int NumAddresses; // eax
  unsigned __int8 *InformationBuffer; // rdx
  int v14; // eax
  _X_FILTER *p_FTypeOpenList; // r12
  _NDIS_OPEN_BLOCK *OpenList; // r14
  unsigned int NextNumAddresses; // eax
  __int64 v18; // r13
  __int64 v19; // rax
  unsigned int v20; // r9d
  __int64 v21; // rcx
  unsigned __int8 *NextMCastAddressBuf; // r11
  __int64 v23; // r13
  unsigned int v24; // r10d
  unsigned int v25; // r8d
  UINT v26; // ecx
  unsigned __int8 result; // al
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // r8
  __int64 v30; // rcx
  unsigned __int8 *NextOldMCastAddressBuf; // r9
  unsigned __int8 *v32; // r10
  int v33; // [rsp+90h] [rbp+8h] BYREF
  int *v34; // [rsp+A0h] [rbp+18h]
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // [rsp+A8h] [rbp+20h]

  v34 = a3;
  MiniportHandle = a1->MiniportHandle;
  v4 = 1;
  v5 = a3;
  LOBYTE(v33) = 1;
  EthDB = MiniportHandle->EthDB;
  v9 = MiniportHandle;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x41u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      a2);
    v9 = a1->MiniportHandle;
  }
  IsValidMulticastFilter = ndisIsValidMulticastFilter(v9, a1, a2);
  if ( IsValidMulticastFilter )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_38;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x42u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids);
    goto LABEL_36;
  }
  if ( !a1->MaxMulticastAddresses )
  {
    IsValidMulticastFilter = 0;
    goto LABEL_36;
  }
  if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength == 6 )
  {
    memmove(a1->OldMCastAddressBuf, a1->MCastAddressBuf, 12LL * a1->NumAddresses);
    NumAddresses = a1->NumAddresses;
    a1->NumAddresses = IsValidMulticastFilter & NumAddresses;
    a1->OldNumAddresses = NumAddresses;
    InformationBuffer = (unsigned __int8 *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( a2->DATA.QUERY_INFORMATION.Oid == 16843272 )
      v14 = ethAddOneOpenMulticastAddress(a1, InformationBuffer, (unsigned __int8 *)&v33);
    else
      v14 = ethDeleteOneOpenMulticastAddress(a1, InformationBuffer, (unsigned __int8 *)&v33);
    v4 = v33;
    IsValidMulticastFilter = v14;
    if ( (_BYTE)v33 != 1 )
    {
      p_FTypeOpenList = EthDB;
      OpenList = EthDB->OpenList;
      memmove(EthDB->NextOldMCastAddressBuf, EthDB->NextMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
      NextNumAddresses = EthDB->NextNumAddresses;
      EthDB->NextNumAddresses = 0;
      v10 = -1;
      EthDB->NextOldNumAddresses = NextNumAddresses;
      do
      {
        while ( 1 )
        {
          if ( !OpenList )
          {
            if ( IsValidMulticastFilter )
              goto LABEL_32;
            if ( p_FTypeOpenList != EthDB
              || (p_FTypeOpenList = (_X_FILTER *)&EthDB->NoFTypeOpenList, (OpenList = EthDB->NoFTypeOpenList) == 0LL) )
            {
              if ( p_FTypeOpenList != (_X_FILTER *)&EthDB->NoFTypeOpenList )
                break;
              p_FTypeOpenList = (_X_FILTER *)&EthDB->FTypeOpenList;
              OpenList = EthDB->FTypeOpenList;
              if ( !OpenList )
                break;
            }
          }
          if ( IsValidMulticastFilter )
            goto LABEL_32;
          v19 = 0LL;
          v33 = 0;
          if ( OpenList->NumAddresses )
          {
            while ( 1 )
            {
              v20 = EthDB->NextNumAddresses;
              v21 = 0LL;
              if ( v20 )
              {
                NextMCastAddressBuf = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
                v23 = v19;
                v10 = -1;
                MCastAddressBuf = OpenList->MCastAddressBuf;
                v24 = *(_DWORD *)&MCastAddressBuf[v19].MCastAddress[2];
                while ( *(_DWORD *)&NextMCastAddressBuf[6 * v21 + 2] <= v24 )
                {
                  if ( *(_DWORD *)&NextMCastAddressBuf[6 * v21 + 2] >= v24 )
                  {
                    v28 = *(_WORD *)&NextMCastAddressBuf[6 * v21];
                    v29 = *(_WORD *)MCastAddressBuf[v23].MCastAddress;
                    if ( v28 > v29 )
                      break;
                    if ( v28 >= v29 )
                      goto LABEL_15;
                  }
                  v21 = (unsigned int)(v21 + 1);
                  if ( (unsigned int)v21 >= v20 )
                    goto LABEL_11;
                }
                v10 = 1;
              }
LABEL_11:
              EthDB->NextNumAddresses = v20 + 1;
              if ( v20 + 1 > EthDB->MaxMulticastAddresses )
                break;
              v18 = (unsigned int)v21;
              if ( v10 > 0 )
                memmove(
                  EthDB->NextMCastAddressBuf[(unsigned int)(v21 + 1)],
                  &(*EthDB->NextMCastAddressBuf)[4 * v21 + 2 * (unsigned int)v21],
                  6 * (v20 + 1 - (unsigned int)v21) - 6);
              memmove(EthDB->NextMCastAddressBuf[v18], OpenList->MCastAddressBuf[v33].MCastAddress, 6uLL);
LABEL_15:
              v10 = -1;
              v19 = (unsigned int)(v33 + 1);
              v33 = v19;
              if ( (unsigned int)v19 >= OpenList->NumAddresses )
              {
                v10 = -1;
                goto LABEL_17;
              }
            }
            IsValidMulticastFilter = -1073676279;
            v10 = -1;
          }
LABEL_17:
          OpenList = OpenList->FilterNextOpen;
        }
      }
      while ( p_FTypeOpenList != (_X_FILTER *)&EthDB->FTypeOpenList );
LABEL_32:
      v25 = EthDB->NextNumAddresses;
      if ( v25 == EthDB->NextOldNumAddresses && (v30 = 0LL, v25) )
      {
        NextOldMCastAddressBuf = (unsigned __int8 *)EthDB->NextOldMCastAddressBuf;
        v32 = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
        while ( 1 )
        {
          v10 = 3 * v30;
          if ( *(_DWORD *)&v32[6 * v30 + 2] != *(_DWORD *)&NextOldMCastAddressBuf[6 * v30 + 2]
            || *(_WORD *)&v32[6 * v30] != *(_WORD *)&NextOldMCastAddressBuf[6 * v30] )
          {
            break;
          }
          v10 = 0;
          v30 = (unsigned int)(v30 + 1);
          if ( (unsigned int)v30 >= v25 )
            goto LABEL_33;
        }
      }
      else
      {
LABEL_33:
        if ( !v10 )
        {
          memmove(EthDB->NextMCastAddressBuf, EthDB->NextOldMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
          EthDB->NextOldNumAddresses = 0;
          v4 = 1;
          goto LABEL_35;
        }
      }
      v4 = 0;
      *(_QWORD *)&a2->NdisReserved[80] = a2->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)&a2->NdisReserved[88] = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
      a2->DATA.QUERY_INFORMATION.InformationBuffer = EthDB->NextMCastAddressBuf;
      v26 = 6 * EthDB->NextNumAddresses;
      *(_DWORD *)&a2->NdisReserved[72] = a2->DATA.QUERY_INFORMATION.Oid;
      a2->DATA.QUERY_INFORMATION.InformationBufferLength = v26;
      a2->DATA.QUERY_INFORMATION.Oid = 16843011;
LABEL_35:
      v5 = v34;
    }
LABEL_36:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqqDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        0xBu,
        0x44u,
        (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
        (char)MiniportHandle,
        (char)a1,
        (char)a2,
        IsValidMulticastFilter,
        v4);
LABEL_38:
    if ( !IsValidMulticastFilter )
      goto LABEL_39;
    goto LABEL_59;
  }
  a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
  IsValidMulticastFilter = -1073676268;
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x43u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      a2);
    goto LABEL_36;
  }
LABEL_59:
  if ( (byte_1C00E71C4 & 4) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      MiniportHandle->IfIndex,
      (unsigned int)&SetOpenEthAddDeleteMulticastFailed,
      (_DWORD)MiniportHandle + 4008,
      (_DWORD)MiniportHandle + 4008,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      IsValidMulticastFilter,
      1,
      (char)a1);
LABEL_39:
  result = v4;
  *v5 = IsValidMulticastFilter;
  return result;
}
