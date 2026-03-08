/*
 * XREFs of ?UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x18019F7E4
 * Callers:
 *     ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x18020C424 (-_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@IEAAJXZ @ 0x18019F71C (-EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@IEAAJXZ.c)
 */

__int64 __fastcall CInputManager::UpdateEdgyInput(
        CInputManager *this,
        const struct EdgyCompositionConfigurationUpdateEx *a2,
        unsigned __int64 a3)
{
  int CanSendInputThreadMessages; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx

  CanSendInputThreadMessages = CInputManager::EnsureRenderThreadCanSendInputThreadMessages(this, (__int64)a2, a3);
  v7 = CanSendInputThreadMessages;
  if ( CanSendInputThreadMessages < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, CanSendInputThreadMessages, 0xD3u, 0LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct EdgyCompositionConfigurationUpdateEx *, int))(**((_QWORD **)this + 4) + 176LL))(
           *((_QWORD *)this + 4),
           *((_QWORD *)this + 7),
           4LL,
           a2,
           152);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xD9u, 0LL);
  }
  return v7;
}
