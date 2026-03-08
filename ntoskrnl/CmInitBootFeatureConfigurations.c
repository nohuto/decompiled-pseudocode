/*
 * XREFs of CmInitBootFeatureConfigurations @ 0x140B5388C
 * Callers:
 *     KiInitializeBootStructures @ 0x140A887E0 (KiInitializeBootStructures.c)
 * Callees:
 *     CmFcManagerInitialize @ 0x140B536B4 (CmFcManagerInitialize.c)
 *     CmFcManagerStartBootPhase @ 0x140B537D8 (CmFcManagerStartBootPhase.c)
 *     wil_InitializeFeatureStagingFromBuffers @ 0x140B538E0 (wil_InitializeFeatureStagingFromBuffers.c)
 */

__int64 __fastcall CmInitBootFeatureConfigurations(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rcx

  CmFcManagerInitialize();
  v2 = (__int64 *)(*(_QWORD *)(a1 + 240) + 3600LL);
  wil_InitializeFeatureStagingFromBuffers(v2);
  return CmFcManagerStartBootPhase(v3, *v2, v2[1], v2[2], v2[3], v2[4]);
}
