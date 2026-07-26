/*
 * XREFs of ?ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A0254
 * Callers:
 *     ?ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C002D980 (-ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002ADE0 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateLoopbackOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002D880 (-ndisUpdateLoopbackOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?XFilterAdjust@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@I@Z @ 0x1C002D8BC (-XFilterAdjust@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@I@Z.c)
 */

unsigned __int8 __fastcall ndisSetRestorePacketFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  _X_FILTER *EthDB; // rcx
  unsigned int CombinedPacketFilter; // ecx
  _NDIS_OPEN_BLOCK *OpenQueue; // rsi
  KIRQL v10; // dl
  int v11; // [rsp+38h] [rbp-20h]
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x37u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      a2);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  EthDB = a1->EthDB;
  if ( a1->MediaType )
  {
    CombinedPacketFilter = EthDB->CombinedPacketFilter;
  }
  else
  {
    XFilterAdjust(EthDB, 0LL, 0);
    CombinedPacketFilter = a1->EthDB->CombinedPacketFilter;
  }
  *a3 = 0;
  if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
  {
    *(_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer = CombinedPacketFilter;
    if ( (CombinedPacketFilter & 0xA0) != 0 )
    {
      OpenQueue = a1->OpenQueue;
      a1->PmodeOpens = 0;
      while ( OpenQueue )
      {
        if ( (OpenQueue->PacketFilters & 0xA0) != 0 )
        {
          KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
          OpenQueue->OpenFlags |= 4u;
          KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
          ++a1->PmodeOpens;
          if ( OpenQueue->ProtocolMajorVersion >= 6 )
            ++a1->PmodeOpen6;
          ndisUpdateCheckForLoopbackFlag(a1);
        }
        OpenQueue = OpenQueue->MiniportNextOpen;
      }
    }
    ndisUpdateLoopbackOpens(a1);
    v10 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v10);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x39u,
        (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
        (char)a1,
        a2);
    return 0;
  }
  else
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 4;
    *a3 = -1073676268;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v11 = -1073676268;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x38u,
        (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
        (char)a1,
        (char)a2,
        v11);
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, NewIrql);
    return 1;
  }
}
