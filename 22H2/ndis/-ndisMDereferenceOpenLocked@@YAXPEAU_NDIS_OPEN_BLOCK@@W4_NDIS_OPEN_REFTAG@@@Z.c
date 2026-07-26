/*
 * XREFs of ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00198DC
 * Callers:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0019874 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x1C0070F90 (-ndisMReset@@YAHPEAX@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00713E0 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C00B6940 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00B6E00 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C00B7090 (NdisCmOpenAddressFamilyComplete.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C00B72A0 (NdisCmRegisterAddressFamilyEx.c)
 *     ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C01399B8 (-ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x1C013C210 (-ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000F0A0 (NdisDereferenceWithTag.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C01397E4 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisMDereferenceOpenLocked(__int64 a1, unsigned __int8 a2)
{
  KSPIN_LOCK *v2; // rdi
  int v5; // ebx

  v2 = (KSPIN_LOCK *)(a1 + 600);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 600));
  NdisDereferenceWithTag(*(_QWORD *)(a1 + 592), a2);
  v5 = --*(_DWORD *)(a1 + 228);
  KeReleaseSpinLockFromDpcLevel(v2);
  if ( !v5 )
    ndisMFinishClose((struct _NDIS_OPEN_BLOCK *)a1);
}
