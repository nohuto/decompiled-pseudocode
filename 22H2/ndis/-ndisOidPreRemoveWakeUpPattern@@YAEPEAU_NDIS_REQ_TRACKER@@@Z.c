/*
 * XREFs of ?ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0092DD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     ?ndisMiniportPreRemoveWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0091774 (-ndisMiniportPreRemoveWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisPreRemoveMiniportWakeUpPattern@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0093FE0 (-ndisPreRemoveMiniportWakeUpPattern@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisPreRemoveOpenWakeUpPattern@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00941B0 (-ndisPreRemoveOpenWakeUpPattern@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetRemoveWakeUpPattern@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C00958FC (-ndisSetRemoveWakeUpPattern@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateRemovePacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0096630 (-ndisXlateRemovePacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreRemoveWakeUpPattern(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  struct _NDIS_OPEN_BLOCK *v3; // r14
  struct _NDIS_MINIPORT_BLOCK *v4; // rbp
  struct _NDIS_OPEN_BLOCK *v5; // rax
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rcx
  unsigned __int8 v7; // di
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-28h]
  unsigned __int8 v13; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v13 = 0;
  v5 = v3;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Du,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)v4,
      v1);
    v5 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  }
  if ( v5
    && ((ProtocolHandle = v5->ProtocolHandle, ProtocolHandle->MajorNdisVersion > 6u)
     || ProtocolHandle->MajorNdisVersion == 6 && ProtocolHandle->MinorNdisVersion >= 0x14u)
    || *(_DWORD *)(v1 + 4) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
LABEL_8:
    v7 = 1;
    goto LABEL_21;
  }
  v8 = ndisSetRemoveWakeUpPattern((struct _NDIS_OID_REQUEST *)v1, &v13);
  v7 = v13;
  *((_DWORD *)a1 + 10) = v8;
  if ( v7 != 1 )
  {
    if ( *((_QWORD *)a1 + 3) && !ndisPreRemoveOpenWakeUpPattern(v3, (struct _NDIS_OID_REQUEST *)v1) )
    {
      *((_DWORD *)a1 + 10) = -1073741811;
      goto LABEL_8;
    }
    if ( *(_QWORD *)a1 )
    {
      if ( v4->MajorNdisVersion > 6u || v4->MajorNdisVersion == 6 && v4->MinorNdisVersion >= 0x14u )
      {
        v9 = ndisXlateRemovePacketPatternToWolPatternOid((struct _NDIS_OID_REQUEST *)v1, &v13);
        v7 = v13;
        *((_DWORD *)a1 + 10) = v9;
        if ( v7 != 1 )
        {
          v10 = ndisMiniportPreRemoveWOLPattern(v4, (struct _NDIS_OID_REQUEST *)v1, &v13);
          v7 = v13;
          *((_DWORD *)a1 + 10) = v10;
        }
      }
      else
      {
        *((_DWORD *)a1 + 10) = 0;
        v7 = ndisPreRemoveMiniportWakeUpPattern(v4, (struct _NDIS_OID_REQUEST *)v1);
      }
    }
  }
LABEL_21:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Eu,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      *(_QWORD *)a1,
      v12);
  }
  return v7;
}
