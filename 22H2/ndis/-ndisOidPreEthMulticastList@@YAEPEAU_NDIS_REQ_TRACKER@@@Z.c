/*
 * XREFs of ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C002C5C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x1C001B820 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002C448 (-ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C002C710 (WPP_RECORDER_SF_qqqq.c)
 *     ?ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002C808 (-ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisQueryMiniportEthMulticastList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009F3B0 (-ndisQueryMiniportEthMulticastList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenEthMulticastList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009F6CC (-ndisQueryOpenEthMulticastList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009FFE8 (-ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisOidPreEthMulticastList(struct _NDIS_REQ_TRACKER *a1, int a2)
{
  __int64 v2; // rdi
  struct _NDIS_OPEN_BLOCK *v4; // r14
  char v5; // si
  struct _NDIS_MINIPORT_BLOCK *v6; // rbp
  int v7; // eax
  int OpenEthMulticastList; // eax
  __int64 v10; // rax
  struct _NDIS_MINIPORT_BLOCK *v11; // rcx
  __int64 v12; // [rsp+40h] [rbp-28h]

  v2 = *((_QWORD *)a1 + 4);
  v4 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  v5 = 0;
  v6 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      83,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v6,
      (char)v4,
      v2,
      (char)a1);
  v7 = *(_DWORD *)(v2 + 4);
  if ( v7 == 2 )
  {
    if ( *(_QWORD *)a1 )
      goto LABEL_22;
    if ( *((_QWORD *)a1 + 2) )
      goto LABEL_10;
  }
  if ( !v7 )
  {
    if ( *((_QWORD *)a1 + 3) )
    {
      OpenEthMulticastList = ndisQueryOpenEthMulticastList(v4, (struct _NDIS_OID_REQUEST *)v2);
LABEL_19:
      *((_DWORD *)a1 + 10) = OpenEthMulticastList;
      v5 = 1;
      goto LABEL_10;
    }
    if ( !*(_QWORD *)a1 )
      goto LABEL_10;
LABEL_22:
    OpenEthMulticastList = ndisQueryMiniportEthMulticastList(v6, (struct _NDIS_OID_REQUEST *)v2);
    goto LABEL_19;
  }
  if ( v7 == 1 )
  {
    if ( !v4 || (v5 = ndisSetOpenEthMulticastList(v4, (struct _NDIS_OID_REQUEST *)v2, (int *)a1 + 10), v5 != 1) )
    {
      if ( *(_UNKNOWN **)(v2 + 104) == &ndisIntReqRestore )
      {
        v10 = *((_QWORD *)a1 + 2);
        v11 = v6;
        if ( v10 )
          v11 = *(struct _NDIS_MINIPORT_BLOCK **)(v10 + 32);
        ndisSetRestoreMulticastList(v11, (struct _NDIS_OID_REQUEST *)v2);
      }
      if ( v6 )
        v5 = ndisSetMiniportEthMulticastList(v6, (struct _NDIS_OID_REQUEST *)v2, (int *)a1 + 10);
    }
  }
LABEL_10:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x54u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v6,
      (char)v4,
      v5,
      v12);
  }
  return v5;
}
