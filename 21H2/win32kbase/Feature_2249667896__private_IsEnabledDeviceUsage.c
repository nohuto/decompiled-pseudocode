/*
 * XREFs of Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C00C9874
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C000CA70 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C007FE60 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     EngAllocUserMemEx @ 0x1C00ADA68 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C00BB8B0 (EngFreeUserMem.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C013EDA0 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 *     EngSecureMem @ 0x1C014B370 (EngSecureMem.c)
 *     GdiProcessCallout @ 0x1C014D030 (GdiProcessCallout.c)
 * Callees:
 *     Feature_2249667896__private_IsEnabledFallback @ 0x1C00C98AC (Feature_2249667896__private_IsEnabledFallback.c)
 */

__int64 Feature_2249667896__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2249667896__private_featureState & 0x10) != 0 )
    return Feature_2249667896__private_featureState & 1;
  else
    return Feature_2249667896__private_IsEnabledFallback((unsigned int)Feature_2249667896__private_featureState, 3LL);
}
