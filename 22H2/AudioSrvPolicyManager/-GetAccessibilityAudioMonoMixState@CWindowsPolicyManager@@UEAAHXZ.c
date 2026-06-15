/*
 * XREFs of ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x1800077B0
 * Callers:
 *     ?IsSpatializerAllowed@CProcess@@UEAA_NXZ @ 0x180016980 (-IsSpatializerAllowed@CProcess@@UEAA_NXZ.c)
 * Callees:
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180006770 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x18000736C (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z @ 0x18002A3EC (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z @ 0x18002A4F8 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::GetAccessibilityAudioMonoMixState(CWindowsPolicyManager *this)
{
  unsigned int AccessibilityAudioMonoMixState; // esi
  int Process; // eax
  struct IAudioProcess *v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // edi
  CWindowsPolicyManager *v6; // rcx
  struct IAudioProcess *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  AccessibilityAudioMonoMixState = *((_DWORD *)this + 12);
  Process = CWindowsPolicyManager::RpcGetProcess(this, 0LL, &v8);
  v3 = v8;
  if ( Process >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v8 + 48LL))(v8);
    v5 = v4;
    if ( v4 )
    {
      if ( !(unsigned int)TsSessionIdAreAccessibilityAudioSettingsInitialized(v4) )
        CWindowsPolicyManager::InitAccessibilityAudioSettings(v6, v5);
      AccessibilityAudioMonoMixState = TsSessionIdGetAccessibilityAudioMonoMixState(v5);
    }
  }
  if ( v3 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v3 + 16LL))(v3);
  return AccessibilityAudioMonoMixState;
}
