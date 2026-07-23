/*
 * XREFs of PspWow64SetupUserProcessAddressSpace @ 0x140286360
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1406A122C (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     PspWow64ThunkProcessParameters @ 0x14024596C (PspWow64ThunkProcessParameters.c)
 */

NTSTATUS __fastcall PspWow64SetupUserProcessAddressSpace(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  NTSTATUS result; // eax
  __int16 v4; // r8
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 1408);
  result = 0;
  if ( v2 )
  {
    v4 = *(_WORD *)(v2 + 8);
    if ( v4 == 332 || v4 == 452 )
    {
      v5 = *(_QWORD *)v2;
      *(_DWORD *)(a2 + 228) = v5;
      return PspWow64ThunkProcessParameters(v5, *(unsigned int **)(a2 + 208), (_DWORD *)(a2 + 224));
    }
  }
  return result;
}
