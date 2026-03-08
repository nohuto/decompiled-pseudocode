/*
 * XREFs of ??1CTokenManager@@AEAA@XZ @ 0x1C00172B0
 * Callers:
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C0013A40 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?DeleteOutstandingAnalogToken@CTokenManager@@UEAAXXZ @ 0x1C00173C0 (-DeleteOutstandingAnalogToken@CTokenManager@@UEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C00174D8 (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x1C0018D9C (-DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x1C0018DE0 (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x1C0018E28 (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ @ 0x1C0018E74 (-DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ.c)
 *     ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x1C00192B0 (-InternalDiscard@CAdapterCollection@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::~CTokenManager(CTokenManager *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  char *v7; // rsi
  char *v8; // rax
  __int64 v9; // rcx
  char *v10; // rbx

  *(_QWORD *)this = &CTokenManager::`vftable';
  v2 = (void *)*((_QWORD *)this + 8);
  if ( v2 )
    ObCloseHandle(v2, 0);
  v3 = (void *)*((_QWORD *)this + 9);
  if ( v3 )
    ObCloseHandle(v3, 0);
  v4 = (void *)*((_QWORD *)this + 10);
  if ( v4 )
    ObCloseHandle(v4, 0);
  v5 = (void *)*((_QWORD *)this + 6);
  if ( v5 )
    MmUnmapViewInSessionSpace(v5);
  *((_QWORD *)this + 7) = 0LL;
  v6 = (void *)*((_QWORD *)this + 5);
  if ( v6 )
    ObfDereferenceObject(v6);
  CTokenManager::DeleteOutstandingAnalogToken(this);
  CTokenManager::DeleteAllLegacyTokenBuffers(this);
  CTokenManager::DeleteAllCompositionTokens(this);
  CTokenManager::DeleteAllFlipManagerTokens(this);
  v7 = (char *)this + 328;
  while ( 1 )
  {
    v8 = *(char **)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = *(_QWORD *)v8, *(char **)(*(_QWORD *)v8 + 8LL) != v8) )
      __fastfail(3u);
    *(_QWORD *)v7 = v9;
    *(_QWORD *)(v9 + 8) = v7;
    if ( v8 == v7 )
      break;
    v10 = v8 - 8;
    (*(void (__fastcall **)(char *))(*((_QWORD *)v8 - 1) + 56LL))(v8 - 8);
    (**(void (__fastcall ***)(char *, __int64))v10)(v10, 1LL);
  }
  CTokenManager::DeleteAllTokenQueues(this);
  CTokenQueue::DeleteAllTokens((CTokenManager *)((char *)this + 344));
  CAdapterCollection::InternalDiscard((CTokenManager *)((char *)this + 112));
}
