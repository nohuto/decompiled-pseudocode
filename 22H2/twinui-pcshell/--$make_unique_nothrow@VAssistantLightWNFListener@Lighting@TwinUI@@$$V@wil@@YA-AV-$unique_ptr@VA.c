/*
 * XREFs of ??$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA?AV?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@XZ @ 0x180260CC0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_940d24896b8a2ff113083f0474491c37___::Run @ 0x18009CAD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_940d24896b8a2ff113083f0474491c37___--Run.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1802803A4 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PE_ea_1802803A4.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AssistantLightWNFListener@Lighting@TwinUI@@QEAA@XZ @ 0x1804BC7DC (--0AssistantLightWNFListener@Lighting@TwinUI@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::make_unique_nothrow<TwinUI::Lighting::AssistantLightWNFListener,>(__int64 *a1)
{
  TwinUI::Lighting::AssistantLightWNFListener *v2; // rcx
  __int64 v3; // rax

  v2 = (TwinUI::Lighting::AssistantLightWNFListener *)operator new(
                                                        0x10uLL,
                                                        (const struct std::nothrow_t *)&std::nothrow);
  v3 = 0LL;
  if ( v2 )
    v3 = TwinUI::Lighting::AssistantLightWNFListener::AssistantLightWNFListener(v2);
  *a1 = v3;
  return a1;
}
