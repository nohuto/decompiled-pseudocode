/*
 * XREFs of ACPIRangeFilterPICInterrupt @ 0x1C003B054
 * Callers:
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0080980 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResources @ 0x1C0080E80 (ACPIBusIrpQueryResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIRangeFilterPICInterrupt(__int64 a1)
{
  unsigned int v1; // r10d
  __int64 v2; // rdx
  unsigned int v3; // eax
  unsigned int v4; // r8d
  __int64 v5; // rax
  unsigned int v6; // r11d
  unsigned int v7; // r9d

  if ( a1 )
  {
    v1 = 0;
    v2 = a1 + 32;
    if ( *(_DWORD *)(a1 + 28) )
    {
      while ( 1 )
      {
        v3 = *(_DWORD *)(v2 + 4);
        v4 = 0;
        if ( v3 )
          break;
LABEL_14:
        ++v1;
        v2 += 32 * v3 + 8;
        if ( v1 >= *(_DWORD *)(a1 + 28) )
          return 0LL;
      }
      while ( 1 )
      {
        v5 = 32LL * v4;
        if ( *(_BYTE *)(v5 + v2 + 9) == 2 )
        {
          v6 = *(_DWORD *)(v5 + v2 + 16);
          v7 = *(_DWORD *)(v5 + v2 + 20);
          if ( v6 == 2 )
          {
            if ( v7 != 2 )
              goto LABEL_12;
            *(_BYTE *)(v5 + v2 + 9) = 0;
          }
          else
          {
            if ( v7 != 2 )
            {
              if ( v6 >= 2 || v7 <= 2 )
                goto LABEL_13;
LABEL_12:
              *(_DWORD *)(v5 + v2 + 16) = 3;
              goto LABEL_13;
            }
            *(_DWORD *)(v5 + v2 + 20) = 1;
          }
        }
LABEL_13:
        v3 = *(_DWORD *)(v2 + 4);
        if ( ++v4 >= v3 )
          goto LABEL_14;
      }
    }
  }
  return 0LL;
}
