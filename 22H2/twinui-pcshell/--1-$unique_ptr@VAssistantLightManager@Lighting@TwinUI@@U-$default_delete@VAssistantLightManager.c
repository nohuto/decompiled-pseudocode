/*
 * XREFs of ??1?$unique_ptr@VAssistantLightManager@Lighting@TwinUI@@U?$default_delete@VAssistantLightManager@Lighting@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1804BC8E4
 * Callers:
 *     _TwinUI::Lighting::AssistantLightWNFListener::AssistantLightWNFListener_::_1_::dtor$1 @ 0x1804BC8BF (_TwinUI--Lighting--AssistantLightWNFListener--AssistantLightWNFListener_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1804BD7CC (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<TwinUI::Lighting::AssistantLightManager,wistd::default_delete<TwinUI::Lighting::AssistantLightManager>>::~unique_ptr<TwinUI::Lighting::AssistantLightManager,wistd::default_delete<TwinUI::Lighting::AssistantLightManager>>(
        TwinUI::Lighting::AssistantLightManager **a1)
{
  TwinUI::Lighting::AssistantLightManager *v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v1);
    operator delete(v1, (const struct std::nothrow_t *)0x70);
  }
}
