/*
 * XREFs of ?ndisRefNextFilterForOidCancellation@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@PEAE@Z @ 0x1C009FF08
 * Callers:
 *     ?ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1C009A4C4 (-ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00187F4 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A398 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 */

KSPIN_LOCK *__fastcall ndisRefNextFilterForOidCancellation(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        unsigned __int8 *a3)
{
  KSPIN_LOCK *v3; // rsi
  KSPIN_LOCK *RequestHandle; // rbx
  unsigned __int64 *p_Lock; // rcx
  KSPIN_LOCK *NextRequestHandle; // rdi
  KIRQL NewIrql; // [rsp+48h] [rbp+10h] BYREF
  int v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  NewIrql = 0;
  if ( a2 )
  {
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(a2, &NewIrql);
    NextRequestHandle = (KSPIN_LOCK *)a2->NextRequestHandle;
    if ( *(_BYTE *)NextRequestHandle == 5 )
    {
      v12 = 0;
      *a3 = 0;
      if ( ndisReferenceRefEx(NextRequestHandle + 39, 1u, (enum _NDIS_REFERENCE_STATUS *)&v12) )
        v3 = NextRequestHandle;
    }
    else
    {
      *a3 = 1;
    }
    a2->LockThread = 0LL;
    p_Lock = &a2->Lock;
  }
  else
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    RequestHandle = (KSPIN_LOCK *)a1->Next.RequestHandle;
    if ( *(_BYTE *)RequestHandle == 5 )
    {
      v12 = 0;
      *a3 = 0;
      if ( ndisReferenceRefEx(RequestHandle + 39, 1u, (enum _NDIS_REFERENCE_STATUS *)&v12) )
        v3 = RequestHandle;
    }
    else
    {
      *a3 = 1;
    }
    a1->MiniportThread = 0LL;
    p_Lock = &a1->Lock;
  }
  KeReleaseSpinLock(p_Lock, NewIrql);
  return v3;
}
