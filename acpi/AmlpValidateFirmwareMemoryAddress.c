/*
 * XREFs of AmlpValidateFirmwareMemoryAddress @ 0x1C004AD48
 * Callers:
 *     AMLIValidateFirmwareMemoryAddress @ 0x1C0048EAC (AMLIValidateFirmwareMemoryAddress.c)
 *     MapPhysMem @ 0x1C004BE74 (MapPhysMem.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 */

__int64 __fastcall AmlpValidateFirmwareMemoryAddress(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdi
  unsigned int v6; // esi
  __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rcx

  v2 = *a1;
  v5 = a2 + *a1;
  if ( v5 > 4096 )
  {
    v7 = MemoryInfo;
    if ( v2 < 4096 )
      v2 = 4096LL;
    v6 = 0;
    v8 = 0;
    if ( *(_QWORD *)(MemoryInfo + 8) )
    {
      v9 = 0LL;
      do
      {
        v10 = *(_QWORD *)(v7 + 24 * v9 + 16);
        if ( v5 > v10 && v2 < *(_QWORD *)(v7 + 24 * v9 + 24) + v10 )
        {
          if ( *(_DWORD *)(v7 + 24 * v9 + 32) == 1 )
            return (unsigned int)-1073741788;
          if ( *(_DWORD *)(v7 + 24 * v9 + 32) == 3 && gAllowInvalidReclaimMemoryMap )
          {
            LogError(3222536208LL);
            AcpiDiagTraceAmlError(0LL, -1072431088);
            PrintDebugMessage(103, *a1, a2 + *a1, 0, 0LL);
          }
        }
        v7 = MemoryInfo;
        v9 = ++v8;
      }
      while ( (unsigned __int64)v8 < *(_QWORD *)(MemoryInfo + 8) );
    }
  }
  else
  {
    return 0;
  }
  return v6;
}
