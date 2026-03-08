/*
 * XREFs of HalpClaimDebugResource @ 0x1405060AC
 * Callers:
 *     HalpReportResourceUsage @ 0x140B35B2C (HalpReportResourceUsage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpClaimDebugResource(ULONG_PTR a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // edx
  __int64 v7; // rax

  *(_QWORD *)a1 = HalpAddressUsageList;
  result = HalpDebugPortTable;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 33;
  *(_QWORD *)(a1 + 13) = a2;
  *(_QWORD *)(a1 + 21) = 8LL;
  *(_QWORD *)(a1 + 29) = 0LL;
  *(_QWORD *)(a1 + 37) = 0LL;
  HalpAddressUsageList = a1;
  if ( result && *(_BYTE *)(result + 40) == 1 )
  {
    LODWORD(v4) = 0;
    v5 = 0LL;
    LOWORD(result) = 1016;
    while ( (unsigned __int16)result != a2 )
    {
      v4 = (unsigned int)(v4 + 1);
      v5 = (unsigned int)v4;
      result = (unsigned __int16)HalpComPortIrqMapping[2 * v4];
      if ( !(_WORD)result )
        return result;
    }
    v6 = (unsigned __int16)word_14003E1CA[2 * v5];
    v7 = (unsigned int)(v6 + 48);
    HalpIDTUsageFlags[v7] = 35;
    result = 5 * v7;
    HalpIDTUsage[result] = 15;
    *(_DWORD *)&byte_140D81AE1[result] = v6;
  }
  return result;
}
