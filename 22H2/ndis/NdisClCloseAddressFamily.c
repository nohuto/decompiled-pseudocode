/*
 * XREFs of NdisClCloseAddressFamily @ 0x1C00B6810
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00B6E00 (NdisCmCloseAddressFamilyComplete.c)
 */

NDIS_STATUS __stdcall NdisClCloseAddressFamily(NDIS_HANDLE NdisAfHandle)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v3; // al
  int v4; // edi
  NDIS_STATUS v5; // edi
  __int64 v6; // rax
  NDIS_STATUS v7; // eax

  v1 = (KSPIN_LOCK *)((char *)NdisAfHandle + 384);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
  v4 = *((_DWORD *)NdisAfHandle + 2);
  *((_DWORD *)NdisAfHandle + 2) = v4 | 0x80000000;
  KeReleaseSpinLock(v1, v3);
  v5 = (v4 >> 31) & 0xC0000001;
  if ( !v5 )
  {
    if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
      v6 = *((_QWORD *)NdisAfHandle + 4);
    else
      v6 = *((_QWORD *)NdisAfHandle + 3);
    v7 = (*(__int64 (__fastcall **)(_QWORD))(v6 + 32))(*((_QWORD *)NdisAfHandle + 6));
    v5 = v7;
    if ( v7 != 259 )
    {
      NdisCmCloseAddressFamilyComplete(v7, NdisAfHandle);
      return 259;
    }
  }
  return v5;
}
