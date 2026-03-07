int __fastcall imp_WdfIoQueueAssignForwardProgressPolicy(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        _WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY *ForwardProgressPolicy)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int result; // eax
  int v6; // ebx
  unsigned int Size; // edx
  unsigned __int16 v8; // r9
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxIoQueue *pQueue; // [rsp+50h] [rbp+8h] BYREF

  pQueue = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Queue, 0x1003u, (void **)&pQueue);
  m_Globals = pQueue->m_Globals;
  if ( !ForwardProgressPolicy )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
  {
    if ( pQueue->m_SupportForwardProgress )
    {
      v6 = -1073741811;
      WPP_IFR_SF_D(m_Globals, 2u, 0xDu, 0x12u, WPP_FxIoQueueApi_cpp_Traceguids, 0xC000000D);
      FxVerifierDbgBreakPoint(m_Globals);
      return v6;
    }
    Size = ForwardProgressPolicy->Size;
    if ( ForwardProgressPolicy->Size != 40 )
    {
      v6 = -1073741820;
      WPP_IFR_SF_DDd(m_Globals, Size, 0xDu, 0x13u, WPP_FxIoQueueApi_cpp_Traceguids, Size, 40, -1073741820);
      return v6;
    }
    if ( ForwardProgressPolicy->ForwardProgressReservedPolicy == WdfIoForwardProgressReservedPolicyUseExamine
      && !ForwardProgressPolicy->ForwardProgressReservePolicySettings.Policy.ExaminePolicy.EvtIoWdmIrpForForwardProgress )
    {
      v8 = 20;
LABEL_12:
      v6 = -1073741811;
      WPP_IFR_SF_D(m_Globals, 2u, 0xDu, v8, WPP_FxIoQueueApi_cpp_Traceguids, 0xC000000D);
      return v6;
    }
    if ( !ForwardProgressPolicy->TotalForwardProgressRequests )
    {
      v8 = 21;
      goto LABEL_12;
    }
    return FxIoQueue::AssignForwardProgressPolicy(pQueue, ForwardProgressPolicy);
  }
  return result;
}
