/*
 * XREFs of NdisClNotifyCloseAddressFamilyComplete @ 0x1C00B68C0
 * Callers:
 *     NdisCmNotifyCloseAddressFamily @ 0x1C00B6F00 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C00B7090 (NdisCmOpenAddressFamilyComplete.c)
 *     NdisCoRequestComplete @ 0x1C00BB2B0 (NdisCoRequestComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B65FC (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 */

void __stdcall NdisClNotifyCloseAddressFamilyComplete(NDIS_HANDLE NdisAfHandle, NDIS_STATUS Status)
{
  __int64 v3; // [rsp+20h] [rbp-18h]

  if ( *((_DWORD *)NdisAfHandle + 98) < 6u )
  {
    v3 = *((_QWORD *)NdisAfHandle + 50);
    *(_DWORD *)(v3 + 64) = 0;
    *(_DWORD *)(v3 + 60) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)NdisAfHandle + 3) + 128LL))(
      (unsigned int)Status,
      *((_QWORD *)NdisAfHandle + 6),
      0LL,
      0LL,
      v3);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)NdisAfHandle + 4) + 136LL))(*((_QWORD *)NdisAfHandle + 6));
  }
  ndisDereferenceAf((KSPIN_LOCK *)NdisAfHandle);
}
