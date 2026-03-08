/*
 * XREFs of ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C0067300
 * Callers:
 *     imp_WdfIoQueueAssignForwardProgressPolicy @ 0x1C00615D0 (imp_WdfIoQueueAssignForwardProgressPolicy.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1C00634F0 (-AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z.c)
 *     ?FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z @ 0x1C0067528 (-FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z.c)
 */

__int64 __fastcall FxIoQueue::AssignForwardProgressPolicy(
        FxIoQueue *this,
        _WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY *Policy)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v3; // esi
  unsigned __int8 v6; // cl
  unsigned __int16 v7; // r9
  unsigned int _a1; // ebx
  ULONG Tag; // ecx
  void *v11; // rax
  FX_POOL **v12; // rax
  unsigned int v13; // edi
  _LIST_ENTRY *p_m_ReservedRequestList; // rax
  _LIST_ENTRY *p_m_ReservedRequestInUseList; // rax
  _LIST_ENTRY *p_m_PendedIrpList; // rax
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rax
  unsigned __int8 v18; // dl
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *p_m_ForwardProgressList; // rdx
  _LIST_ENTRY *Blink; // r8
  __m128i v22; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v3 = 0;
  pRequest = 0LL;
  if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)Policy, 0xBu) )
  {
    v6 = 0;
    while ( this->m_PkgIo->m_DispatchTable[v6] != this )
    {
      if ( ++v6 > 0x1Bu )
      {
        v7 = 12;
        _a1 = -1073741811;
        goto LABEL_6;
      }
    }
  }
  Tag = m_Globals->Tag;
  v22.m128i_i64[0] = 0LL;
  v22.m128i_i64[1] = 64LL;
  if ( m_Globals->FxPoolTrackingOn )
    v11 = retaddr;
  else
    v11 = 0LL;
  v12 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v22, 0x68uLL, Tag, v11);
  this->m_FwdProgContext = (_FXIO_FORWARD_PROGRESS_CONTEXT *)v12;
  if ( v12 )
  {
    v13 = 0;
    *((_DWORD *)v12 + 8) = Policy->ForwardProgressReservedPolicy;
    this->m_FwdProgContext->m_NumberOfReservedRequests = Policy->TotalForwardProgressRequests;
    this->m_FwdProgContext->m_IoReservedResourcesAllocate.Method = Policy->EvtIoAllocateResourcesForReservedRequest;
    this->m_FwdProgContext->m_IoResourcesAllocate.Method = Policy->EvtIoAllocateRequestResources;
    this->m_FwdProgContext->m_IoExamineIrp.Method = Policy->ForwardProgressReservePolicySettings.Policy.ExaminePolicy.EvtIoWdmIrpForForwardProgress;
    p_m_ReservedRequestList = &this->m_FwdProgContext->m_ReservedRequestList;
    p_m_ReservedRequestList->Blink = p_m_ReservedRequestList;
    p_m_ReservedRequestList->Flink = p_m_ReservedRequestList;
    p_m_ReservedRequestInUseList = &this->m_FwdProgContext->m_ReservedRequestInUseList;
    p_m_ReservedRequestInUseList->Blink = p_m_ReservedRequestInUseList;
    p_m_ReservedRequestInUseList->Flink = p_m_ReservedRequestInUseList;
    p_m_PendedIrpList = &this->m_FwdProgContext->m_PendedIrpList;
    p_m_PendedIrpList->Blink = p_m_PendedIrpList;
    p_m_PendedIrpList->Flink = p_m_PendedIrpList;
    m_FwdProgContext = this->m_FwdProgContext;
    m_FwdProgContext->m_PendedReserveLock.m_Lock = 0LL;
    m_FwdProgContext->m_PendedReserveLock.m_DbgFlagIsInitialized = 1;
    if ( this->m_FwdProgContext->m_NumberOfReservedRequests )
    {
      while ( 1 )
      {
        v3 = FxIoQueue::AllocateReservedRequest(this, &pRequest);
        if ( v3 < 0 )
          break;
        v19 = &this->m_FwdProgContext->m_ReservedRequestList;
        p_m_ForwardProgressList = &pRequest->m_ForwardProgressList;
        Blink = this->m_FwdProgContext->m_ReservedRequestList.Blink;
        if ( Blink->Flink != v19 )
          __fastfail(3u);
        p_m_ForwardProgressList->Flink = v19;
        ++v13;
        p_m_ForwardProgressList->Blink = Blink;
        Blink->Flink = p_m_ForwardProgressList;
        v19->Blink = p_m_ForwardProgressList;
        if ( v13 >= this->m_FwdProgContext->m_NumberOfReservedRequests )
          goto LABEL_16;
      }
      FxIoQueue::FreeAllReservedRequests(this, v18);
      this->m_FwdProgContext->m_PendedReserveLock.m_DbgFlagIsInitialized = 0;
      FxPoolFree((FX_POOL_TRACKER *)this->m_FwdProgContext);
      this->m_FwdProgContext = 0LL;
    }
    else
    {
LABEL_16:
      this->m_SupportForwardProgress = 1;
    }
    return (unsigned int)v3;
  }
  else
  {
    _a1 = -1073741670;
    v7 = 13;
LABEL_6:
    WPP_IFR_SF_D(m_Globals, 2u, 0xDu, v7, WPP_FxIoQueueKm_cpp_Traceguids, _a1);
    return _a1;
  }
}
