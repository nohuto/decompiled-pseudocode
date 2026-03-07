__int64 __fastcall IopGenericUnpackRequirement(
        __int64 a1,
        ULONGLONG *a2,
        ULONGLONG *a3,
        ULONGLONG *a4,
        ULONGLONG *Alignment)
{
  *a4 = RtlIoDecodeMemIoResource((PIO_RESOURCE_DESCRIPTOR)a1, Alignment, a2, a3);
  if ( !*Alignment )
    *Alignment = 1LL;
  if ( *(_BYTE *)(a1 + 1) == 3 && (*(_BYTE *)(a1 + 4) & 0x10) != 0 && *(__int64 *)(a1 + 24) > 0xFFFFFF )
    *a3 = 0xFFFFFFLL;
  return 0LL;
}
