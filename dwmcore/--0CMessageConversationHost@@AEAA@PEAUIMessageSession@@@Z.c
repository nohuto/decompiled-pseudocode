/*
 * XREFs of ??0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z @ 0x1800FC314
 * Callers:
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800FC2A4 (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

CMessageConversationHost *__fastcall CMessageConversationHost::CMessageConversationHost(
        CMessageConversationHost *this,
        struct IMessageSession *a2)
{
  CMILRefCountImpl *v3; // rcx

  v3 = (CMessageConversationHost *)((char *)this + 8);
  *(_QWORD *)this = &CMessageConversationHost::`vftable';
  *(_DWORD *)v3 = 0;
  CMILRefCountImpl::AddReference(v3);
  *((_QWORD *)this + 2) = a2;
  (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}
