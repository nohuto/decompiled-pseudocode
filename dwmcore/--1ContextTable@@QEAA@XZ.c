/*
 * XREFs of ??1ContextTable@@QEAA@XZ @ 0x18010E2CC
 * Callers:
 *     _dynamic_atexit_destructor_for__Contexts__ @ 0x180120450 (_dynamic_atexit_destructor_for__Contexts__.c)
 * Callees:
 *     ?RemoveAll@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAXXZ @ 0x180279218 (-RemoveAll@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUB.c)
 */

void __fastcall ContextTable::~ContextTable(ContextTable *this)
{
  ((void (*)(void))ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::RemoveAll)();
  ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::RemoveAll(this);
}
