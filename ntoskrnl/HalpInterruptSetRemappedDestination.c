/*
 * XREFs of HalpInterruptSetRemappedDestination @ 0x14028EB08
 * Callers:
 *     HalpInterruptSetDestination @ 0x14028E950 (HalpInterruptSetDestination.c)
 * Callees:
 *     HalpInterruptGetRemappedLineState @ 0x14028EBCC (HalpInterruptGetRemappedLineState.c)
 *     HalpInterruptDestinationToTarget @ 0x14028EC7C (HalpInterruptDestinationToTarget.c)
 *     HalpInterruptRemapUpdateDeliveryMode @ 0x14028EDAC (HalpInterruptRemapUpdateDeliveryMode.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x1402FC29C (HalpIommuUpdateRemappingTableEntry.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptSetRemappedDestination(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _DWORD v9[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+38h] [rbp-48h]
  _DWORD *v11; // [rsp+40h] [rbp-40h]
  _OWORD v12[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v13; // [rsp+78h] [rbp-8h]
  __int64 v14; // [rsp+A8h] [rbp+28h] BYREF

  v3 = 0;
  v14 = 0LL;
  v13 = 0LL;
  memset(v12, 0, sizeof(v12));
  v9[1] = 0;
  LODWORD(v11) = 0;
  if ( (int)HalpInterruptGetRemappedLineState(a1, a2, &v14, v12) < 0 )
  {
    HalpInterruptSetProblemEx(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 844);
    return (unsigned int)-1073741275;
  }
  v10 = a3;
  v9[0] = 1;
  v11 = a2 + 10;
  if ( (int)HalpInterruptDestinationToTarget(v6, v9, (char *)&v12[1] + 8) < 0 )
  {
    HalpInterruptSetProblemEx(v14, 22, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 866);
    return (unsigned int)-1073741275;
  }
  HalpInterruptRemapUpdateDeliveryMode(a2, v12);
  LOBYTE(v7) = *a2 == 3;
  HalpIommuUpdateRemappingTableEntry(v7, a2[10] & 0x3FFFFFFF, v12);
  return v3;
}
