__int64 __fastcall NtGdiGetRegionData(HRGN a1, __int64 a2, volatile void *a3)
{
  unsigned int v5; // esi
  _BYTE *v6; // rdi
  unsigned int RegionData; // eax
  _BYTE v9[464]; // [rsp+30h] [rbp-208h] BYREF

  v5 = 1;
  v6 = 0LL;
  if ( a3 )
  {
    if ( (unsigned int)a2 > 0x1D0 )
    {
      if ( (unsigned int)a2 <= 0x2710000 )
        v6 = (_BYTE *)AllocFreeTmpBuffer((unsigned int)a2);
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
    FreeTmpBuffer(v6, a2);
  return v5;
}
