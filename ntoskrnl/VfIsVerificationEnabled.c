/*
 * XREFs of VfIsVerificationEnabled @ 0x1403AED70
 * Callers:
 *     VfFailDeviceNode @ 0x1403AED30 (VfFailDeviceNode.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x140303C10 (MmIsDriverVerifying.c)
 *     PpvUtilIsHardwareBeingVerified @ 0x140ABEFEC (PpvUtilIsHardwareBeingVerified.c)
 */

LOGICAL __fastcall VfIsVerificationEnabled(int a1, struct _DRIVER_OBJECT *a2)
{
  int v3; // ecx

  if ( !ViDdiInitialized )
    return 0;
  if ( a1 )
  {
    v3 = a1 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        return ((unsigned int)MmVerifierData >> 30) & 1;
      return 0;
    }
  }
  else if ( (MmVerifierData & 0x800) != 0 )
  {
    return MmIsDriverVerifying(a2);
  }
  if ( MmVerifierData < 0 )
    return 0;
  return (unsigned __int8)PpvUtilIsHardwareBeingVerified(a2);
}
