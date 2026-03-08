/*
 * XREFs of ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1405CAEC0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1405C0460 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 */

__int64 __fastcall SmpDeviceIoCompletion(struct _DEVICE_OBJECT *a1, struct _IRP *a2, _QWORD *a3)
{
  NTSTATUS Status; // eax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rax

  Status = a2->IoStatus.Status;
  v5 = a3[5];
  if ( Status >= 0 )
  {
    if ( a2->IoStatus.Information < *((unsigned int *)a3 + 8) )
    {
      *((_DWORD *)a3 + 7) |= 1u;
      v7 = a3[2];
      if ( v7 )
        *(_DWORD *)(v7 + 4) = -1073741435;
      else
        *((_DWORD *)a3 + 2) = -1073741435;
    }
  }
  else
  {
    *((_DWORD *)a3 + 7) |= 1u;
    v6 = a3[2];
    if ( v6 )
      *(_DWORD *)(v6 + 4) = Status;
    else
      *((_DWORD *)a3 + 2) = Status;
  }
  IoFreeIrp(a2);
  if ( a3[2] )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 6104));
  if ( (*((_DWORD *)a3 + 7) & 4) != 0 )
  {
    KeSetEvent((PRKEVENT)(v5 + 6176), 1, 0);
  }
  else
  {
    SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(v5, (__int64)a3, 1);
    v8 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(*(_QWORD *)(v5 + 6728), *(_DWORD *)(v5 + 6016) & 0x3FF);
    ExReleaseRundownProtection_0(v8 + 1);
  }
  return 3221225494LL;
}
