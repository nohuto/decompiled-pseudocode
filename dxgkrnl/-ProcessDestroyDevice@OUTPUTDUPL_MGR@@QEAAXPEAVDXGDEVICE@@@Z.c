/*
 * XREFs of ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01D230C
 * Callers:
 *     OutputDuplProcessDestroyDevice @ 0x1C017DAAC (OutputDuplProcessDestroyDevice.c)
 *     _lambda_916b8cf52c985c2b3c6a9e3c4a47be2a_::_lambda_invoker_cdecl_ @ 0x1C01DD4A0 (_lambda_916b8cf52c985c2b3c6a9e3c4a47be2a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C01A8B90 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C01D2394 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessDestroyDevice(OUTPUTDUPL_MGR *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  unsigned int i; // esi

  v4 = *(_QWORD *)this;
  if ( v4 && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v4 + 16)) )
  {
    WdLogSingleEntry1(1LL, 1439LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
      1439LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_BYTE *)a2 + 72)
    && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)a2 + 17))
    && *(struct _KTHREAD **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 144LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1440LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->IsDeviceLockExclusiveOwner() || pDevice->GetRenderAdapter()->IsStopResetLockExclusiveOwner()",
      1440LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = 0; i < *((_DWORD *)this + 19); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, i, a2, 0LL, 0, 5);
  OUTPUTDUPL_MGR::ProcessPendingDestroy((struct _KTHREAD **)this, a2, 0);
}
