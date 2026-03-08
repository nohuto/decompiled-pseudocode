/*
 * XREFs of ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18010165C
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800AE4F0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ??0CHolographicManager@@AEAA@PEAVCComposition@@@Z @ 0x1801016EC (--0CHolographicManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CHolographicManager::Create(struct CComposition *a1, struct CHolographicManager **a2)
{
  CHolographicManager *v4; // rax
  CHolographicManager *v5; // rax
  __int64 v6; // rcx
  CHolographicManager *v7; // rdi
  HANDLE Event; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CHolographicManager *)DefaultHeap::AllocClear(0xF8uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CHolographicManager::CHolographicManager(v4, a1);
  v7 = v5;
  if ( v5 )
  {
    CMILRefCountImpl::AddReference((CHolographicManager *)((char *)v5 + 16));
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *((_QWORD *)v7 + 29) = Event;
    if ( Event )
    {
      v10 = 0;
      *a2 = v7;
    }
    else
    {
      v10 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147467259, 0x1Au, 0LL);
      CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v7 + 2);
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x16u, 0LL);
  }
  return v10;
}
