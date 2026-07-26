/*
 * XREFs of ?ndisOidPostRcvFilterClearFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0086260
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005F6B0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00859C4 (-ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisOidPostRcvFilterClearFilter(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  int v4; // ecx
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  v1 = *a1;
  v3 = a1[4];
  NewIrql = 0;
  if ( v1 )
  {
    v4 = *((_DWORD *)a1 + 10);
    if ( !v4 || v4 == 65539 && (v1->Flags & 4) != 0 )
    {
      if ( v3->PcwDatapathEventMask >= 0x10u )
      {
        ndisClearReceiveFilter(v1, *((_DWORD *)v3->Reserved4.Buffer + 3));
        *((_DWORD *)a1 + 10) = 0;
      }
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          0x18u,
          (struct _GUID *)&WPP_8ae6292ee3d833c857d30dcfbd7b4f7f_Traceguids,
          (char)v1,
          v4);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
      if ( (*(_DWORD *)&v3->LinkStateIndicationFlags & 0x10000) != 0
        && (v1->PnPFlags & 0x1000000) == 0
        && (v1->DriverHandle->Flags & 1) == 0 )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          v1->pAdapterInstanceName,
          "Miniport has failed OID_RECEIVE_FILTER_CLEAR_FILTER");
        ndisBugCheckEx(0x1CuLL, (ULONG_PTR)v1, *(unsigned int *)&v3->Reserved4.Length, *((int *)a1 + 10));
      }
      v1->MiniportThread = 0LL;
      KeReleaseSpinLock(&v1->Lock, NewIrql);
    }
  }
}
