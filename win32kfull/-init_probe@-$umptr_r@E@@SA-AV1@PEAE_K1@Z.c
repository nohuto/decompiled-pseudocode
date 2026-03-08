/*
 * XREFs of ?init_probe@?$umptr_r@E@@SA?AV1@PEAE_K1@Z @ 0x1C008D8A4
 * Callers:
 *     NtGdiStretchDIBitsInternal @ 0x1C008D400 (NtGdiStretchDIBitsInternal.c)
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C008D600 (NtGdiSetDIBitsToDeviceInternal.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C008FD90 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateBitmap @ 0x1C00D03A0 (NtGdiCreateBitmap.c)
 *     NtGdiSetBitmapBits @ 0x1C0150110 (NtGdiSetBitmapBits.c)
 *     NtGdiPolyDraw @ 0x1C02C67A0 (NtGdiPolyDraw.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall umptr_r<unsigned char>::init_probe(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 24) = 0;
  if ( is_mul_ok(a3, 1uLL) )
  {
    if ( a3 )
    {
      if ( ((a4 - 1) & a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a3 + a2 > MmUserProbeAddress || a3 + a2 < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = a3;
  }
  return a1;
}
