/*
 * XREFs of ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800FC2A4
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800AE4F0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z @ 0x1800FC314 (--0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ?Initialize@CMessageConversationHost@@AEAAJXZ @ 0x1800FC370 (-Initialize@CMessageConversationHost@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x1801B4424 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CMessageConversationHost::Create(struct IMessageSession *a1, struct CMessageConversationHost **a2)
{
  CMessageConversationHost *v4; // rax
  CMessageConversationHost *v5; // rax
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  volatile signed __int32 *v12; // rsi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CMessageConversationHost *)DefaultHeap::AllocClear(0x30uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CMessageConversationHost::CMessageConversationHost(v4, a1);
  v7 = (volatile signed __int32 *)v5;
  if ( v5 )
  {
    v8 = CMessageConversationHost::Initialize(v5);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1Cu, 0LL);
      CMessageConversationHost::Disconnect((CMessageConversationHost *)v7);
      v12 = v7 + 2;
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v7 + 2));
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 72LL))(v7);
        if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
        {
          --*v12;
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 64LL))(v7, 1LL);
        }
      }
    }
    else
    {
      *a2 = (struct CMessageConversationHost *)v7;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x1Bu, 0LL);
  }
  return v10;
}
