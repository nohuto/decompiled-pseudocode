/*
 * XREFs of ?reset@?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@QEAAXPEAVAssistantLightWNFListener@Lighting@TwinUI@@@Z @ 0x1802645C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_940d24896b8a2ff113083f0474491c37___::Run @ 0x18009CAF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_940d24896b8a2ff113083f0474491c37___--Run.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1804BDB5C (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<TwinUI::Lighting::AssistantLightWNFListener,wistd::default_delete<TwinUI::Lighting::AssistantLightWNFListener>>::reset(
        _QWORD **a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  TwinUI::Lighting::AssistantLightManager *v3; // rdi

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    v3 = (TwinUI::Lighting::AssistantLightManager *)v2[1];
    v2[1] = 0LL;
    if ( v3 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v3);
      operator delete(v3, (const struct std::nothrow_t *)0x70);
    }
    operator delete(v2, (const struct std::nothrow_t *)0x10);
  }
}
