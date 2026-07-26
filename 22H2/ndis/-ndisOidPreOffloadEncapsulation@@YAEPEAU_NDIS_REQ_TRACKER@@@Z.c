/*
 * XREFs of ?ndisOidPreOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C002C2F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001B820 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002F0E8 (-ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisOidPreOpenSetEncapsulation@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002F27C (-ndisOidPreOpenSetEncapsulation@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisOidPreQueryOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E210 (-ndisOidPreQueryOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreOffloadEncapsulation(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // r15
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rsi
  unsigned __int8 OffloadEncapsulation; // al
  char v9; // di

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = *((_QWORD *)a1 + 3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xAAu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v1,
      v4,
      v3);
  *((_DWORD *)a1 + 10) = -1073741637;
  v5 = *(_DWORD *)(v3 + 4);
  if ( !v5 )
    goto LABEL_17;
  v6 = v5 - 1;
  if ( !v6 )
  {
    v7 = *((_QWORD *)a1 + 4);
    if ( (*(_DWORD *)(v7 + 88) & 0x20) == 0
      || (OffloadEncapsulation = ndisOidPreOpenSetEncapsulation(
                                   *((struct _NDIS_OPEN_BLOCK **)a1 + 3),
                                   *((struct _NDIS_OID_REQUEST **)a1 + 4),
                                   (int *)a1 + 10),
          OffloadEncapsulation != 1) )
    {
      if ( *(_QWORD *)a1 )
        OffloadEncapsulation = ndisOidPreMiniportSetEncapsulation(
                                 *(struct _NDIS_MINIPORT_BLOCK **)a1,
                                 (struct _NDIS_OID_REQUEST *)v7,
                                 (int *)a1 + 10);
      else
        OffloadEncapsulation = 0;
    }
    goto LABEL_8;
  }
  if ( v6 == 1 )
  {
LABEL_17:
    OffloadEncapsulation = ndisOidPreQueryOffloadEncapsulation(a1);
LABEL_8:
    v9 = OffloadEncapsulation;
    goto LABEL_9;
  }
  v9 = 1;
LABEL_9:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xABu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v1,
      v4,
      v9,
      *((_DWORD *)a1 + 10));
  return v9;
}
