/*
 * XREFs of ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C02D9C90
 * Callers:
 *     GreDescribePixelFormat @ 0x1C02D9DF4 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C02D9FD0 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02D9CB8 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 */

__int64 __fastcall XDCOBJ::ipfdDevMax(XDCOBJ *this)
{
  if ( *(__int16 *)(*(_QWORD *)this + 2088LL) < 0 )
    return XDCOBJ::ipfdDevMaxGet(this);
  else
    return (unsigned int)*(__int16 *)(*(_QWORD *)this + 2088LL);
}
