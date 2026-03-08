/*
 * XREFs of ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C01A8B90
 * Callers:
 *     _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x1C01A8950 (_lambda_a196522e28cbefec8f1ebe5a826d98cf_--_lambda_invoker_cdecl_.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01D22B0 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01D230C (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     _lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_::_lambda_invoker_cdecl_ @ 0x1C03254E0 (_lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_--_lambda_invoker_cdecl_.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0325CC0 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1C032B14C (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C00534B8 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C0325E44 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C032D6A4 (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPendingDestroy(struct _KTHREAD **this, struct DXGDEVICE *a2, int a3)
{
  struct _KTHREAD *v4; // rcx
  __int64 v7; // rcx
  char *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD **v11; // rdi
  _QWORD *v12; // rsi
  int v13; // r9d
  _QWORD *v14; // r15
  unsigned int i; // r12d
  __int64 v16; // rcx
  _QWORD *v17; // rax

  v4 = *this;
  if ( v4 )
  {
    v7 = *((_QWORD *)v4 + 2);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v7 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v7 + 168)) )
    {
      WdLogSingleEntry1(1LL, 2281LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
        2281LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  v8 = (char *)(this + 3);
  if ( this != (struct _KTHREAD **)-24LL && this[4] == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1453LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(this + 3, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v13 = *((_DWORD *)this + 12);
      if ( v13 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (const EVENT_DESCRIPTOR *)"g", v10, v13);
    }
    ExAcquirePushLockExclusiveEx(this + 3, 0LL);
  }
  v11 = (_QWORD **)(this + 7);
  *((_QWORD *)v8 + 1) = KeGetCurrentThread();
  v12 = *v11;
  while ( v12 != v11 )
  {
    v14 = v12;
    v12 = (_QWORD *)*v12;
    if ( a2 )
    {
      if ( a2 == OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v14) )
      {
        for ( i = 0; i < *((_DWORD *)v14 + 10); ++i )
          DXGDXGIKEYEDMUTEX::CloseFromDevice((DXGDXGIKEYEDMUTEX *)v14[i + 6]);
      }
    }
    if ( a3 || !OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v14) )
    {
      v16 = *v14;
      if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v17 = (_QWORD *)v14[1], (_QWORD *)*v17 != v14) )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      OUTPUTDUPL_CONTEXT::`scalar deleting destructor'((OUTPUTDUPL_CONTEXT *)v14);
    }
  }
  *((_QWORD *)v8 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
}
