/*
 * XREFs of ?ndisSSIdleTimerDpc@@YAXPEAX000@Z @ 0x1C00A70E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012E28 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C00194F0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 */

void __fastcall ndisSSIdleTimerDpc(
        PVOID SystemSpecific1,
        struct _NDIS_MINIPORT_BLOCK *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx

  SelectiveSuspend = FunctionContext->SelectiveSuspend;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)SelectiveSuspend);
  if ( !*(_QWORD *)((char *)SelectiveSuspend + 508)
    && !*((_DWORD *)SelectiveSuspend + 129)
    && !*((_DWORD *)SelectiveSuspend + 132)
    && !*((_DWORD *)SelectiveSuspend + 133)
    && !*((_DWORD *)SelectiveSuspend + 130)
    && !*((_DWORD *)SelectiveSuspend + 131)
    && !*((_DWORD *)SelectiveSuspend + 144)
    && ++*((_DWORD *)SelectiveSuspend + 36) > 3u
    && (*((_DWORD *)SelectiveSuspend + 126) & 2) == 0
    && ndisReferenceMiniport(FunctionContext, 0x14u) )
  {
    *((_DWORD *)SelectiveSuspend + 126) |= 2u;
    KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 152));
    ndisScheduleWorkItemInternal((struct _NDIS_WORK_ITEM *)((char *)SelectiveSuspend + 296));
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)SelectiveSuspend);
}
