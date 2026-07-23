/*
 * XREFs of SdbpMatchDeviceDWORD @ 0x1409660D8
 * Callers:
 *     SdbpMatchAcpi @ 0x1407D3288 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x1407D32DC (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x1407D3330 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1407D3384 (SdbpMatchCpu.c)
 * Callees:
 *     SdbpGetDeviceDWORD @ 0x140965B38 (SdbpGetDeviceDWORD.c)
 */

__int64 __fastcall SdbpMatchDeviceDWORD(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  unsigned int v9; // ebx
  int DeviceDWORD; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax

  v9 = 0;
  DeviceDWORD = SdbpGetDeviceDWORD(a1, a3, a4);
  if ( DeviceDWORD == -1 )
  {
    v11 = SdbpGetDeviceDWORD(a1, a3, a5);
    if ( v11 == -1 || v11 >= a2 )
    {
      v12 = SdbpGetDeviceDWORD(a1, a3, a6);
      if ( v12 == -1 || v12 <= a2 )
        return 1;
    }
  }
  else if ( DeviceDWORD == a2 )
  {
    return 1;
  }
  return v9;
}
