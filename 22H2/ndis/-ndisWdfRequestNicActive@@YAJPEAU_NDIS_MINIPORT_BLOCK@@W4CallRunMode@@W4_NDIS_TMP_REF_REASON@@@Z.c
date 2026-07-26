/*
 * XREFs of ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C005DFA0
 * Callers:
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C003F4CC (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C005D3B0 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C005AB88 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C005DB80 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C005DEA0 (-ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F9820 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisWdfRequestNicActive(struct _NDIS_MINIPORT_BLOCK *a1, int a2, int a3)
{
  __int64 AoAc; // rbx
  KIRQL v7; // di
  int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // rdx
  bool v12; // cf
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // ebx

  AoAc = (__int64)a1->AoAc;
  ndisWaitForKernelObject((void *)(AoAc + 448));
  ndisUpdateMiniportCsTrafficStatistics(a1, 2);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  v8 = *(_DWORD *)(AoAc + 376);
  if ( (unsigned int)(v8 - 1) > 1 )
  {
    if ( v8 == 4 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x15u,
          (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
          a1);
      KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v7);
      return (unsigned int)-1073741823;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v7);
    v9 = 259;
LABEL_7:
    if ( !a2 )
    {
      ndisWaitForKernelObject((void *)(AoAc + 416));
      return 0;
    }
    return v9;
  }
  KeClearEvent((PRKEVENT)(AoAc + 416));
  if ( *(_DWORD *)(AoAc + 376) == 2 )
    ++*(_DWORD *)(AoAc + 840);
  v11 = MEMORY[0xFFFFF78000000008];
  v12 = *(_BYTE *)(AoAc + 1105) != 0;
  *(_QWORD *)(AoAc + 864) = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(AoAc + 872) = v11 & -(__int64)v12;
  if ( a3 == 3 )
  {
    *(_DWORD *)(AoAc + 64) = 3;
    *(_QWORD *)(AoAc + 488) = MEMORY[0xFFFFF78000000014];
    *(_BYTE *)(AoAc + 496) = 1;
    ndisAoAcActiveRefIncrement(AoAc, 0);
  }
  *(_DWORD *)(AoAc + 376) = 3;
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v7);
  LOBYTE(v13) = a2 == 0;
  v14 = a1->DriverHandle->CxBlock->Chars.EvtCxPowerAoAcDisengage(a1->MiniportAdapterContext, v13);
  v9 = v14;
  if ( v14 >= 0 )
  {
    if ( v14 == 259 )
      goto LABEL_7;
    v15 = v14;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        0x14u,
        (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
        (char)a1,
        v14);
    v15 = -1073741823;
  }
  ndisWdfAoAcDisengageComplete(a1, v9);
  return v15;
}
