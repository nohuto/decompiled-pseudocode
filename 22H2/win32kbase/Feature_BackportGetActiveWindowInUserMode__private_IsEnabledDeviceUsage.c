/*
 * XREFs of Feature_BackportGetActiveWindowInUserMode__private_IsEnabledDeviceUsage @ 0x1C00CFFA0
 * Callers:
 *     ?AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x1C004FFD0 (-AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z.c)
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x1C00B5B8C (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 *     ?SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z @ 0x1C00CFF20 (-SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z.c)
 * Callees:
 *     Feature_BackportGetActiveWindowInUserMode__private_IsEnabledFallback @ 0x1C00CFFD8 (Feature_BackportGetActiveWindowInUserMode__private_IsEnabledFallback.c)
 */

__int64 Feature_BackportGetActiveWindowInUserMode__private_IsEnabledDeviceUsage()
{
  if ( (Feature_BackportGetActiveWindowInUserMode__private_featureState & 0x10) != 0 )
    return Feature_BackportGetActiveWindowInUserMode__private_featureState & 1;
  else
    return Feature_BackportGetActiveWindowInUserMode__private_IsEnabledFallback(
             (unsigned int)Feature_BackportGetActiveWindowInUserMode__private_featureState,
             3LL);
}
