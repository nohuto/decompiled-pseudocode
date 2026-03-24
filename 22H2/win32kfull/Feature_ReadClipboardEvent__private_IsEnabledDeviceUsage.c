/*
 * XREFs of Feature_ReadClipboardEvent__private_IsEnabledDeviceUsage @ 0x1C0168E54
 * Callers:
 *     NtUserGetClipboardData @ 0x1C002CAD0 (NtUserGetClipboardData.c)
 * Callees:
 *     Feature_ReadClipboardEvent__private_IsEnabledFallback @ 0x1C0168E8C (Feature_ReadClipboardEvent__private_IsEnabledFallback.c)
 */

__int64 Feature_ReadClipboardEvent__private_IsEnabledDeviceUsage()
{
  if ( (Feature_ReadClipboardEvent__private_featureState & 0x10) != 0 )
    return Feature_ReadClipboardEvent__private_featureState & 1;
  else
    return Feature_ReadClipboardEvent__private_IsEnabledFallback(
             (unsigned int)Feature_ReadClipboardEvent__private_featureState,
             3LL);
}
