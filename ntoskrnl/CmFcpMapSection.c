/*
 * XREFs of CmFcpMapSection @ 0x1408182C4
 * Callers:
 *     CmFcpManagerCreateSectionFromBuffer @ 0x1408181E8 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140A2416C (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140A24640 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A24A68 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B53284 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1406A55B8 (MiMapViewInSystemSpace.c)
 */

__int64 __fastcall CmFcpMapSection(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = a1[1];
  if ( v3 )
  {
    v8 = 0LL;
    v7 = 0LL;
    result = MiMapViewInSystemSpace(v3, &v6, &v8, &v7, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    *a2 = 0LL;
    a2[2] = 0LL;
    a2[1] = v6;
    a2[2] = a1[2];
    *a2 = *a1;
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
    *a2 = *a1;
  }
  return 0LL;
}
