/*
 * XREFs of HvlConfigureDynamicMemory @ 0x1406764F0
 * Callers:
 *     KeConfigureDynamicMemory @ 0x14056C5A8 (KeConfigureDynamicMemory.c)
 * Callees:
 *     HvlpAddRemovePhysicalMemory @ 0x140676630 (HvlpAddRemovePhysicalMemory.c)
 */

__int64 __fastcall HvlConfigureDynamicMemory(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // edi
  unsigned __int64 v4; // rdx
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // ebx
  int v9; // r9d
  int v10; // r9d
  int v11; // r8d
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v3 = a1;
  if ( a1 > a2 )
    return 3221225485LL;
  v4 = a2 - a1;
  if ( v4 == -1LL )
    return 3221225485LL;
  if ( HvlHypervisorConnected && (HvlpFlags & 2) != 0 )
  {
    if ( !a3 )
    {
      v10 = v4 + 1;
      v11 = a1;
      LOBYTE(v4) = 1;
      LOBYTE(a1) = 1;
      v8 = HvlpAddRemovePhysicalMemory(a1, v4, v11, v10, (__int64)&v13);
      if ( v8 < 0 )
      {
        if ( v13 )
          HvlpAddRemovePhysicalMemory(0, 0, v3, v13, (__int64)&v13);
      }
      else
      {
        byte_140D1BFE8 = 1;
      }
      return (unsigned int)v8;
    }
    v5 = a3 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 2;
        if ( v7 )
        {
          if ( v7 == 4 )
          {
            if ( byte_140D1BFE8 )
            {
              HvlpAddRemovePhysicalMemory(0, 0, a1, v4 + 1, (__int64)&v13);
              byte_140D1BFE8 = 0;
            }
            return 0;
          }
          else
          {
            return (unsigned int)-1073741811;
          }
        }
        v9 = v4 + 1;
        LODWORD(v4) = 0;
      }
      else
      {
        v9 = v4 + 1;
        LOBYTE(v4) = 1;
      }
      LODWORD(a1) = 0;
    }
    else
    {
      v9 = v4 + 1;
      LOBYTE(a1) = 1;
      LODWORD(v4) = 0;
    }
    v8 = HvlpAddRemovePhysicalMemory(a1, v4, v3, v9, (__int64)&v13);
    byte_140D1BFE8 = 0;
    return (unsigned int)v8;
  }
  return 0LL;
}
