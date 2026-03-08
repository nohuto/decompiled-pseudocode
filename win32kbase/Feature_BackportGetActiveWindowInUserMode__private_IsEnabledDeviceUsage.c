/*
 * XREFs of Feature_BackportGetActiveWindowInUserMode__private_IsEnabledDeviceUsage @ 0x1C00DC8A4
 * Callers:
 *     ?AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x1C0078970 (-AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z.c)
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x1C00C474C (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 *     ?SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z @ 0x1C00DC7D0 (-SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z.c)
 * Callees:
 *     Feature_BackportGetActiveWindowInUserMode__private_IsEnabledFallback @ 0x1C00DC8DC (Feature_BackportGetActiveWindowInUserMode__private_IsEnabledFallback.c)
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
