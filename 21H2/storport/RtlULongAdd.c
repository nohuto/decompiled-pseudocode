/*
 * XREFs of RtlULongAdd @ 0x1C0045F40
 * Callers:
 *     RaUnitStreamsIoctl @ 0x1C001C880 (RaUnitStreamsIoctl.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C0043FEC (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C004416C (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1C0044368 (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 *     PortPassThroughExBasicValidation @ 0x1C0059D20 (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExGetBasicStructureSize @ 0x1C0059E38 (PortPassThroughExGetBasicStructureSize.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C007D4F4 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExValidateNormalizedRequest @ 0x1C007DBC8 (PortPassThroughExValidateNormalizedRequest.c)
 *     PortPassThroughValidateNormalizedRequest @ 0x1C007E3CC (PortPassThroughValidateNormalizedRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongAdd(ULONG ulAugend, ULONG ulAddend, ULONG *pulResult)
{
  ULONG v3; // eax
  ULONG v4; // edx
  NTSTATUS result; // eax

  v3 = ulAugend + ulAddend;
  v4 = -1;
  if ( v3 >= ulAugend )
    v4 = v3;
  result = v3 < ulAugend ? 0xC0000095 : 0;
  *pulResult = v4;
  return result;
}
