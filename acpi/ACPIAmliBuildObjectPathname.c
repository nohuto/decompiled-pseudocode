/*
 * XREFs of ACPIAmliBuildObjectPathname @ 0x1C000B0E0
 * Callers:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C000B2B0 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     ACPIBuildDockExtension @ 0x1C000CEDC (ACPIBuildDockExtension.c)
 *     ACPIQueryDeviceBiosNameEx @ 0x1C0043BC4 (ACPIQueryDeviceBiosNameEx.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C0083FF0 (AcpiGetFullyQualifiedBiosName.c)
 *     ACPIBusIommuBusInterface @ 0x1C008736C (ACPIBusIommuBusInterface.c)
 *     LinkNodeFindByName @ 0x1C0099388 (LinkNodeFindByName.c)
 *     PcisuppSetRoutingInfo @ 0x1C009A1E8 (PcisuppSetRoutingInfo.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C00485CC (AMLIGetNameSpaceObjectPath.c)
 */

__int64 __fastcall ACPIAmliBuildObjectPathname(__int64 a1, PVOID *a2, char a3)
{
  unsigned int v6; // r13d
  int v7; // ebp
  __int64 Pool2; // rax
  char *v9; // rbx
  unsigned int v10; // r14d
  char v11; // cl
  char *v12; // rdx
  unsigned int v13; // edi
  char *v14; // rdx
  BOOL v15; // ecx
  __int64 v16; // r8
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rdi
  _BYTE *v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  char v24; // al
  unsigned int v25; // eax
  unsigned int v27; // [rsp+68h] [rbp+20h] BYREF

  v27 = 0;
  v6 = 0;
  v7 = AMLIGetNameSpaceObjectPath(a1, 0LL, &v27);
  if ( v7 == -1073741789 )
  {
    Pool2 = ExAllocatePool2(64LL, v27, 1399874369LL);
    v9 = (char *)Pool2;
    if ( Pool2 )
    {
      v7 = AMLIGetNameSpaceObjectPath(a1, Pool2, &v27);
      if ( v7 >= 0 )
      {
        v10 = v27;
        if ( *v9 == 92 && (a3 & 1) == 0 )
          memmove(v9, v9 + 1, v27 - 1);
        if ( (a3 & 2) != 0 )
        {
          v11 = *v9;
          v12 = v9;
          while ( v11 )
          {
            if ( (unsigned __int8)(v11 - 97) <= 0x19u )
              *v12 = v11 - 32;
            v11 = *++v12;
          }
        }
        *a2 = v9;
        if ( (a3 & 4) != 0 )
        {
          v13 = *v9 == 92;
          if ( v13 < v10 )
          {
            v14 = &v9[*v9 == 92];
            v15 = *v9 == 92;
            v16 = v10 - v13;
            do
            {
              v13 = v15 + 5;
              if ( *v14 != 46 )
                v13 = v15;
              ++v14;
              v15 = v13;
              --v16;
            }
            while ( v16 );
          }
          v17 = v13 + 5;
          if ( v17 != v10 )
          {
            v18 = ExAllocatePool2(64LL, v17, 1399874369LL);
            v19 = v17 - 1;
            v20 = (_BYTE *)v18;
            *(_BYTE *)(v19 + v18) = 0;
            v21 = 0;
            if ( *v9 == 92 )
            {
              *v20 = 92;
              ++v9;
              v21 = 1;
            }
            if ( v21 < (unsigned int)v19 )
            {
              v22 = v21;
              v23 = (unsigned int)v19 - v21;
              do
              {
                if ( v6 < 4 && *v9 == 46 || (v24 = *v9) == 0 )
                  v24 = 95;
                else
                  ++v9;
                v20[v22] = v24;
                v25 = v6 + 1;
                v6 = 0;
                ++v22;
                if ( v25 <= 4 )
                  v6 = v25;
                --v23;
              }
              while ( v23 );
            }
            ExFreePoolWithTag(*a2, 0);
            *a2 = v20;
          }
        }
      }
      else
      {
        ExFreePoolWithTag(v9, 0x53706341u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v7;
}
