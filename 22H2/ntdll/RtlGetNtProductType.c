/*
 * XREFs of RtlGetNtProductType @ 0x18003CBB0
 * Callers:
 *     SwitchedRtlGetVersion @ 0x18003C9CC (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x18003E4E0 (RtlGetVersion.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18004478C (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EE040 (RtlRestoreBootStatusDefaults.c)
 *     RtlInitializeHeapManager @ 0x1800F2524 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008A880 (RtlpGetNtProductTypeFromRegistry.c)
 */

BOOLEAN __cdecl RtlGetNtProductType(PNT_PRODUCT_TYPE NtProductType)
{
  BOOLEAN v2; // bl
  _NT_PRODUCT_TYPE v3; // eax

  v2 = 0;
  if ( RtlGetCurrentServiceSessionId() )
  {
    v3 = *((_DWORD *)NtCurrentPeb()->SharedData + 4);
    goto LABEL_4;
  }
  if ( MEMORY[0x7FFE0268] )
  {
    v3 = MEMORY[0x7FFE0264];
LABEL_4:
    *NtProductType = v3;
    return 1;
  }
  if ( (int)RtlpGetNtProductTypeFromRegistry(NtProductType) < 0 )
  {
    *NtProductType = NtProductWinNt;
    return v2;
  }
  return 1;
}
