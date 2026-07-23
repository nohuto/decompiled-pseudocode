/*
 * XREFs of ViHalApplySettings @ 0x1409CFAEC
 * Callers:
 *     VfHalVerifierInitialize @ 0x1409CD708 (VfHalVerifierInitialize.c)
 *     VfSettingsCheckForChanges @ 0x1409E147C (VfSettingsCheckForChanges.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *ViHalApplySettings())(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 (__fastcall *result)(__int64, __int64, unsigned int, __int64 *); // rax
  int v1; // ecx

  result = (__int64 (__fastcall *)(__int64, __int64, unsigned int, __int64 *))(unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x80u) != 0 )
  {
    if ( !ViHalEnabledInThePast )
    {
      ViVerifyDma = 1;
      if ( (unsigned int)HalPrivateDispatchTable >= 0x33 )
      {
        VfRealHalAllocateMapRegisters = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))off_140C005F0[0];
        result = VfHalAllocateMapRegisters;
        off_140C005F0[0] = (__int64 (__fastcall *)())VfHalAllocateMapRegisters;
      }
      ViDoubleBufferDma = 1;
      ViHalEnabledInThePast = 1;
    }
    v1 = 0;
  }
  else
  {
    v1 = 1;
  }
  ViDMADisabledNoRebootNeeded = v1;
  return result;
}
