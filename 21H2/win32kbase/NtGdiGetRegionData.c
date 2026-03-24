/*
 * XREFs of NtGdiGetRegionData @ 0x1C001F550
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRegionData @ 0x1C001F660 (GreGetRegionData.c)
 *     AllocFreeTmpBuffer @ 0x1C0022520 (AllocFreeTmpBuffer.c)
 *     FreeTmpBuffer @ 0x1C0022780 (FreeTmpBuffer.c)
 *     EngSetLastError @ 0x1C009E670 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

__int64 __fastcall NtGdiGetRegionData(HRGN a1, unsigned int a2, volatile void *a3)
{
  unsigned int v5; // esi
  _BYTE *v6; // rdi
  unsigned int RegionData; // eax
  _BYTE v9[448]; // [rsp+30h] [rbp-1F8h] BYREF

  v5 = 1;
  v6 = 0LL;
  if ( a3 )
  {
    if ( a2 > 0x1C0 )
    {
      if ( a2 <= 0x2710000 )
        v6 = (_BYTE *)AllocFreeTmpBuffer(a2);
    }
    else
    {
      v6 = v9;
    }
    if ( !v6 )
    {
      EngSetLastError(0x57u);
      v5 = 0;
    }
  }
  if ( v5 )
  {
    RegionData = GreGetRegionData(a1);
    v5 = RegionData;
    if ( a3 )
    {
      if ( RegionData )
      {
        ProbeForWrite(a3, RegionData, 4u);
        memmove((void *)a3, v6, v5);
      }
    }
  }
  if ( v6 && v6 != v9 )
    FreeTmpBuffer(v6);
  return v5;
}
