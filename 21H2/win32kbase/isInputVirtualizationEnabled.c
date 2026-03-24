/*
 * XREFs of isInputVirtualizationEnabled @ 0x1C004164C
 * Callers:
 *     xxxUserProcessCallout @ 0x1C003BE30 (xxxUserProcessCallout.c)
 *     isChildPartition @ 0x1C0040F30 (isChildPartition.c)
 *     isRootPartition @ 0x1C0041628 (isRootPartition.c)
 *     Win32kBaseUserInitialize @ 0x1C0067B70 (Win32kBaseUserInitialize.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0087870 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     CleanupSensorExplicitly @ 0x1C00A1CE0 (CleanupSensorExplicitly.c)
 *     InputUnInitialize @ 0x1C00B4C3C (InputUnInitialize.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00B7A90 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00B7D20 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool isInputVirtualizationEnabled()
{
  return gbInputVirtualizationEnabled && gSessionId == gInputVirtualizationSessionId;
}
