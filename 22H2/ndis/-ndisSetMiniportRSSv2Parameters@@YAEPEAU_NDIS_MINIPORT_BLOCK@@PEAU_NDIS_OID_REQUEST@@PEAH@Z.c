/*
 * XREFs of ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C008A084
 * Callers:
 *     ?ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0089150 (-ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001B820 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C00881AC (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008A26C (-ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisSetMiniportRSSv2Parameters(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  char v6; // bp
  int v7; // eax
  int v8; // edi
  unsigned __int16 v9; // r9
  int CombinedRSSParameters; // eax
  KIRQL v11; // dl
  __int64 v13; // [rsp+38h] [rbp-40h]
  char v14[4]; // [rsp+38h] [rbp-40h]
  KIRQL NewIrql; // [rsp+88h] [rbp+10h] BYREF

  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Fu,
      (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
      (char)a1,
      a2);
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  v6 = 1;
  v7 = ndisSetMiniportRSSv2ParametersHelper(a1, a2);
  v8 = v7;
  if ( v7 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v9 = 32;
    *(_DWORD *)v14 = v7;
    goto LABEL_6;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  CombinedRSSParameters = ndisAllocateCombinedRSSParameters(a1, a2, 0LL, 0LL, 0LL, 0LL);
  v11 = NewIrql;
  a1->MiniportThread = 0LL;
  v8 = CombinedRSSParameters;
  KeReleaseSpinLock(&a1->Lock, v11);
  if ( v8 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v9 = 33;
      *(_DWORD *)v14 = v8;
LABEL_6:
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        v9,
        (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
        (char)a1,
        (char)a2,
        *(_DWORD *)v14);
    }
  }
  else
  {
    v6 = 0;
  }
LABEL_11:
  *a3 = v8;
  if ( v8 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v6;
    LODWORD(v13) = v8;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0x22u,
      (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
      (char)a1,
      (char)a2,
      v13);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x23u,
      (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
      (char)a1,
      (char)a2,
      v6,
      *a3);
  return v6;
}
