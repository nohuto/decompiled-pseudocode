/*
 * XREFs of ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180007840
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180006770 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x18000736C (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002880C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z @ 0x180028944 (-TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z @ 0x18002A3EC (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z @ 0x18002A4F8 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::HasAccessibilityAudioStateChanged(volatile __int32 *a1)
{
  unsigned int v2; // r14d
  struct IAudioProcess *v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // esi
  CWindowsPolicyManager *v6; // rcx
  int v7; // edi
  struct _RTL_CRITICAL_SECTION *v8; // r15
  struct TSSession *v10; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF
  struct IAudioProcess *v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  v2 = 0;
  if ( (int)CWindowsPolicyManager::RpcGetProcess((CWindowsPolicyManager *)a1, 0LL, &v13) < 0 )
  {
LABEL_16:
    v3 = v13;
    goto LABEL_17;
  }
  v3 = v13;
  v4 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v13 + 48LL))(v13);
  v5 = v4;
  if ( v4
    && ((unsigned int)TsSessionIdAreAccessibilityAudioSettingsInitialized(v4)
     || (int)CWindowsPolicyManager::InitAccessibilityAudioSettings(v6, v5) >= 0) )
  {
    TsSessionIdGetAudioProtocol(v5, &v11, &v12);
    v7 = 1;
    v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    if ( !(unsigned int)TsSessionFromSessionId(v5, 1, 0LL, &v10) && (!*(_DWORD *)v10 || !*((_DWORD *)v10 + 86)) )
      v7 = 0;
    if ( v8 )
      LeaveCriticalSection(v8);
    if ( v7 || v11 && v11 != 0xFFFF )
    {
      if ( _InterlockedExchange(a1 + 12, TsSessionIdGetAccessibilityAudioMonoMixState(v5)) != *((_DWORD *)a1 + 12) )
        v2 = v7 + 1;
      goto LABEL_16;
    }
  }
LABEL_17:
  if ( v3 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v3 + 16LL))(v3);
  return v2;
}
