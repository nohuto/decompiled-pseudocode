/*
 * XREFs of ?ndisNotifyAfRegistration@@YAXPEAX@Z @ 0x1C013C560
 * Callers:
 *     ?ndisMFinishQueuedPendingOpen@@YAXPEAX@Z @ 0x1C0136430 (-ndisMFinishQueuedPendingOpen@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018F40 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0019874 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAfNotification@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00B6668 (-ndisDereferenceAfNotification@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisNotifyAfRegistration(_QWORD *P)
{
  __int64 v1; // rsi
  _QWORD *v2; // rbx
  struct _NDIS_OPEN_BLOCK *v3; // rdi
  _QWORD *v4; // rbp

  v1 = P[5];
  v2 = P;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xAu,
      (struct _GUID *)&WPP_70ccdfc7c82d34b36d81d4813b341409_Traceguids,
      v1);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  do
  {
    v3 = (struct _NDIS_OPEN_BLOCK *)v2[6];
    v4 = (_QWORD *)*v2;
    if ( (v3->OpenFlags & 0x18000) == 0 )
      v3->ProtocolHandle->CoAfRegisterNotifyHandler(v3->ProtocolBindingContext, (CO_ADDRESS_FAMILY *)(v2 + 7));
    ExFreePoolWithTag(v2, 0);
    ndisDereferenceAfNotification(v3);
    ndisMDereferenceOpenUnlocked((__int64)v3, 14);
    v2 = v4;
  }
  while ( v4 );
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xBu,
      (struct _GUID *)&WPP_70ccdfc7c82d34b36d81d4813b341409_Traceguids,
      v1);
}
