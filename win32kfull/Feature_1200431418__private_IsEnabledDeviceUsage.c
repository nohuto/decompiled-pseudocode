/*
 * XREFs of Feature_1200431418__private_IsEnabledDeviceUsage @ 0x1C012EB44
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01F1CB0 (-xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z @ 0x1C0221E40 (-xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z.c)
 *     ?CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z @ 0x1C023CF24 (-CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z.c)
 * Callees:
 *     Feature_1200431418__private_IsEnabledFallback @ 0x1C012EB7C (Feature_1200431418__private_IsEnabledFallback.c)
 */

__int64 Feature_1200431418__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1200431418__private_featureState & 0x10) != 0 )
    return Feature_1200431418__private_featureState & 1;
  else
    return Feature_1200431418__private_IsEnabledFallback((unsigned int)Feature_1200431418__private_featureState, 3LL);
}
