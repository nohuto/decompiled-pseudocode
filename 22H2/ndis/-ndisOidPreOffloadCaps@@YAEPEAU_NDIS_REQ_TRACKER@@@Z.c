/*
 * XREFs of ?ndisOidPreOffloadCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009D880
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001B820 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisQueryFilterOffloadCaps@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009F308 (-ndisQueryFilterOffloadCaps@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryMiniportOffloadCaps@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009F430 (-ndisQueryMiniportOffloadCaps@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisOidPreOffloadCaps(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  __int64 v3; // rsi
  __int64 v4; // r15
  struct _NDIS_FILTER_BLOCK *v5; // r14
  char v6; // bl
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  unsigned int StackFlags; // ebx
  KIRQL v9; // dl
  char v11[4]; // [rsp+40h] [rbp-38h]
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = *((_QWORD *)a1 + 3);
  v5 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)a1 + 2);
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBCu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v1,
      v4,
      v3);
  *((_DWORD *)a1 + 10) = -1073741637;
  v6 = 1;
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) == 0 )
  {
    if ( *((_QWORD *)a1 + 2) )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v5->Miniport, &NewIrql);
      Miniport = v5->Miniport;
      StackFlags = v5->StackFlags;
      v9 = NewIrql;
      Miniport->MiniportThread = 0LL;
      KeReleaseSpinLock(&Miniport->Lock, v9);
      if ( (StackFlags & 1) != 0 )
      {
        *((_DWORD *)a1 + 10) = ndisQueryFilterOffloadCaps(v5, (struct _NDIS_OID_REQUEST *)v3);
        v6 = 1;
      }
      else
      {
        v6 = 0;
        *((_DWORD *)a1 + 10) = 0;
      }
    }
    if ( *(_QWORD *)a1 )
    {
      *((_DWORD *)a1 + 10) = ndisQueryMiniportOffloadCaps(v1, (struct _NDIS_OID_REQUEST *)v3);
      v6 = 1;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBDu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v1,
      v4,
      v6,
      *(_DWORD *)v11);
  }
  return v6;
}
