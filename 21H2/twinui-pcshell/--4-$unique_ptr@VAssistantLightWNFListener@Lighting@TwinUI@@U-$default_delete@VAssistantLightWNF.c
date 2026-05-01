/*
 * XREFs of ??4?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x180261494
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_940d24896b8a2ff113083f0474491c37___::Run @ 0x18009CAF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_940d24896b8a2ff113083f0474491c37___--Run.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1804BDB5C (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 */

_QWORD **__fastcall wistd::unique_ptr<TwinUI::Lighting::AssistantLightWNFListener,wistd::default_delete<TwinUI::Lighting::AssistantLightWNFListener>>::operator=(
        _QWORD **a1,
        _QWORD *a2)
{
  _QWORD *v2; // rax
  _QWORD *v4; // rbx
  TwinUI::Lighting::AssistantLightManager *v5; // rdi

  v2 = (_QWORD *)*a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
  {
    v5 = (TwinUI::Lighting::AssistantLightManager *)v4[1];
    v4[1] = 0LL;
    if ( v5 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v5);
      operator delete(v5, (const struct std::nothrow_t *)0x70);
    }
    operator delete(v4, (const struct std::nothrow_t *)0x10);
  }
  return a1;
}
