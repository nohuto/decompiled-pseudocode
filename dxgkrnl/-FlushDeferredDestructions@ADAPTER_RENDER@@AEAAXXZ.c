/*
 * XREFs of ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C02BC3DC
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02B4D9C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C02BD19C (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C01B3EC0 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 */

void __fastcall ADAPTER_RENDER::FlushDeferredDestructions(PERESOURCE **this)
{
  PERESOURCE *v2; // rdx
  DXGDEVICE *i; // rbx
  __int64 v4; // rcx
  DXGDEVICE **v5; // rdi
  DXGDEVICE *j; // rbx
  __int64 v7; // rcx
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-78h] BYREF
  struct _KAPC_STATE v9; // [rsp+80h] [rbp-48h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 2240LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 2240LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = this[2];
  if ( v2[18] != (PERESOURCE)KeGetCurrentThread() && !*((_BYTE *)v2 + 2870) )
  {
    WdLogSingleEntry1(1LL, 2245LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsStopResetLockExclusiveOwner() || GetAdapter()->IsTdrPending()",
      2245LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = (DXGDEVICE *)this[18]; i != (DXGDEVICE *)(this + 18) && i; i = *(DXGDEVICE **)i )
  {
    v4 = *((_QWORD *)i + 5);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v4 + 56), &ApcState);
    DXGDEVICE::FlushDeferredDestruction(i, 0LL, 0, 0);
    KeUnstackDetachProcess(&ApcState);
  }
  v5 = (DXGDEVICE **)(this + 20);
  for ( j = *v5; j != (DXGDEVICE *)v5 && j; j = *(DXGDEVICE **)j )
  {
    v7 = *((_QWORD *)j + 5);
    memset(&v9, 0, sizeof(v9));
    KeStackAttachProcess(*(PRKPROCESS *)(v7 + 56), &v9);
    DXGDEVICE::FlushDeferredDestruction(j, 0LL, 0, 0);
    KeUnstackDetachProcess(&v9);
  }
}
