/*
 * XREFs of ??_GIAssistantLight@Lighting@TwinUI@@UEAAPEAXI@Z @ 0x1804BFF30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TwinUI::Lighting::IAssistantLight *__fastcall TwinUI::Lighting::IAssistantLight::`scalar deleting destructor'(
        TwinUI::Lighting::IAssistantLight *this,
        char a2)
{
  *(_QWORD *)this = &TwinUI::Lighting::IAssistantLight::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)8);
  return this;
}
