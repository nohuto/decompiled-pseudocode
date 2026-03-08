/*
 * XREFs of Feature_KIDV2__private_IsEnabledDeviceUsage @ 0x1C012C6EC
 * Callers:
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C009A850 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C009AD2C (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C009AEB4 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C009B35C (zzzInputFocusReceivedWindowEvent.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C009BA70 (zzzInputFocusLostWindowEvent.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C009F110 (EditionHandleAndPostKeyEvent.c)
 *     zzzReattachThreads @ 0x1C00CD3A8 (zzzReattachThreads.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C01ACF90 (EditionChangeForegroundQueueForMouseInput.c)
 * Callees:
 *     Feature_KIDV2__private_IsEnabledFallback @ 0x1C012C724 (Feature_KIDV2__private_IsEnabledFallback.c)
 */

__int64 Feature_KIDV2__private_IsEnabledDeviceUsage()
{
  if ( (Feature_KIDV2__private_featureState & 0x10) != 0 )
    return Feature_KIDV2__private_featureState & 1;
  else
    return Feature_KIDV2__private_IsEnabledFallback((unsigned int)Feature_KIDV2__private_featureState, 3LL);
}
