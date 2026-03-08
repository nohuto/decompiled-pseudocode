/*
 * XREFs of imp_WdfCompanionTargetSendTaskSynchronously @ 0x1C002CC30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C0018F98 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qdd @ 0x1C0026A80 (WPP_IFR_SF_qdd.c)
 *     ?SendTaskSynchronously@FxCompanionTarget@@QEAAJGKPEAU_WDF_MEMORY_DESCRIPTOR@@0PEA_JPEA_K@Z @ 0x1C002E22C (-SendTaskSynchronously@FxCompanionTarget@@QEAAJGKPEAU_WDF_MEMORY_DESCRIPTOR@@0PEA_JPEA_K@Z.c)
 */

int __fastcall imp_WdfCompanionTargetSendTaskSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMPANIONTARGET__ *CompanionTarget,
        unsigned __int16 TaskQueueIdentifier,
        unsigned int TaskOperationCode,
        _WDF_MEMORY_DESCRIPTOR *InputBuffer,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        _WDF_TASK_SEND_OPTIONS *TaskOptions,
        unsigned __int64 *BytesReturned)
{
  __int64 *p_Timeout; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int result; // eax
  unsigned int Flags; // ecx
  FxCompanionTarget *pCompanionTarget; // [rsp+50h] [rbp+8h] BYREF

  pCompanionTarget = 0LL;
  p_Timeout = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)CompanionTarget,
    0x1038u,
    (void **)&pCompanionTarget);
  m_Globals = pCompanionTarget->m_Globals;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
  {
    if ( TaskOptions )
    {
      if ( TaskOptions->Size != 16 )
      {
        WPP_IFR_SF_qdd(
          m_Globals,
          2u,
          6u,
          0xAu,
          WPP_FxCompanionTargetApi_cpp_Traceguids,
          TaskOptions,
          16,
          TaskOptions->Size);
        return -1073741811;
      }
      Flags = TaskOptions->Flags;
      if ( (Flags & 0xFFFFFFFC) != 0 )
      {
        WPP_IFR_SF_qDd(m_Globals, 0x10u, 6u, 0xBu, WPP_FxCompanionTargetApi_cpp_Traceguids, TaskOptions, Flags, 3u);
        return -1073741811;
      }
      if ( (Flags & 1) != 0 && TaskOptions->Timeout )
        p_Timeout = &TaskOptions->Timeout;
    }
    if ( InputBuffer && InputBuffer->Type != WdfMemoryDescriptorTypeBuffer
      || OutputBuffer && OutputBuffer->Type != WdfMemoryDescriptorTypeBuffer )
    {
      WPP_IFR_SF_(m_Globals, 2u, 6u, 0xCu, WPP_FxCompanionTargetApi_cpp_Traceguids);
      return -1073741811;
    }
    return FxCompanionTarget::SendTaskSynchronously(
             pCompanionTarget,
             TaskQueueIdentifier,
             TaskOperationCode,
             InputBuffer,
             OutputBuffer,
             p_Timeout,
             BytesReturned);
  }
  return result;
}
