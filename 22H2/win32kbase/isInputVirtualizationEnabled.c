/*
 * XREFs of isInputVirtualizationEnabled @ 0x1C0042ABC
 * Callers:
 *     xxxUserProcessCallout @ 0x1C003D2A0 (xxxUserProcessCallout.c)
 *     isChildPartition @ 0x1C00423A0 (isChildPartition.c)
 *     isRootPartition @ 0x1C0042A98 (isRootPartition.c)
 *     Win32kBaseUserInitialize @ 0x1C0068620 (Win32kBaseUserInitialize.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0088710 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     CleanupSensorExplicitly @ 0x1C00A2AA0 (CleanupSensorExplicitly.c)
 *     InputUnInitialize @ 0x1C00B4F7C (InputUnInitialize.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00B7DB0 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00B8040 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool isInputVirtualizationEnabled()
{
  return gbInputVirtualizationEnabled && gSessionId == gInputVirtualizationSessionId;
}
