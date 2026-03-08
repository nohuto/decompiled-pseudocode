/*
 * XREFs of KdChangeOption @ 0x1405650A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KdChangeOption(
        KD_OPTION Option,
        ULONG InBufferBytes,
        PVOID InBuffer,
        ULONG OutBufferBytes,
        PVOID OutBuffer,
        PULONG OutBufferNeeded)
{
  NTSTATUS result; // eax

  if ( KdPitchDebugger )
    return -1073740972;
  if ( Option )
  {
    result = -1073741821;
  }
  else
  {
    if ( InBufferBytes != 1 || OutBufferBytes || OutBuffer )
      return -1073741811;
    if ( KdBlockEnable < 0 )
      return -1073741790;
    KdBlockEnable = *(_BYTE *)InBuffer;
    result = 0;
  }
  if ( OutBufferNeeded )
    *OutBufferNeeded = 0;
  return result;
}
