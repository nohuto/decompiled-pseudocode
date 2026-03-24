/*
 * XREFs of ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0216948
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020FAD0 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C021777C (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C00EFC44 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 */

void __fastcall ADAPTER_RENDER::FlushDeferredDestructions(PERESOURCE **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  PERESOURCE *v5; // rcx
  __int64 v6; // rax
  DXGDEVICE *i; // rbx
  __int64 v8; // rcx
  DXGDEVICE **v9; // rdi
  DXGDEVICE *j; // rbx
  __int64 v11; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF
  struct _KAPC_STATE v13; // [rsp+50h] [rbp-48h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v4 + 24) = 2025LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = this[2];
  if ( v5[18] != (PERESOURCE)KeGetCurrentThread() && !*((_BYTE *)v5 + 2646) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v2);
    *(_QWORD *)(v6 + 24) = 2030LL;
    WdLogEvent5_WdAssertion(v6);
  }
  for ( i = (DXGDEVICE *)this[18]; i != (DXGDEVICE *)(this + 18) && i; i = *(DXGDEVICE **)i )
  {
    v8 = *((_QWORD *)i + 5);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v8 + 56), &ApcState);
    DXGDEVICE::FlushDeferredDestruction(i, 0LL, 0, 0);
    KeUnstackDetachProcess(&ApcState);
  }
  v9 = (DXGDEVICE **)(this + 20);
  for ( j = *v9; j != (DXGDEVICE *)v9 && j; j = *(DXGDEVICE **)j )
  {
    v11 = *((_QWORD *)j + 5);
    memset(&v13, 0, sizeof(v13));
    KeStackAttachProcess(*(PRKPROCESS *)(v11 + 56), &v13);
    DXGDEVICE::FlushDeferredDestruction(j, 0LL, 0, 0);
    KeUnstackDetachProcess(&v13);
  }
}
