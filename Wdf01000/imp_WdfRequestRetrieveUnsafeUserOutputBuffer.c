/*
 * XREFs of imp_WdfRequestRetrieveUnsafeUserOutputBuffer @ 0x1C0035B50
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qdid @ 0x1C0034E38 (WPP_IFR_SF_qdid.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA954 (-Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestRetrieveUnsafeUserOutputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int64 RequiredLength,
        void **OutputBuffer,
        unsigned __int64 *Length)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 *v9; // rdi
  __int64 result; // rax
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  unsigned int v13; // esi
  FxRequest *v14; // r8
  _IRP *m_Irp; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int8 MajorFunction; // al
  unsigned __int16 v18; // r9
  unsigned __int8 v19; // dl
  unsigned __int64 level; // rax
  unsigned __int16 v21; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+98h] [rbp+20h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( !OutputBuffer )
    FxVerifierNullBugCheck(pRequest->m_Globals, retaddr);
  *OutputBuffer = 0LL;
  v9 = Length;
  if ( Length )
    *Length = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( m_Globals->FxVerifierOn )
    {
      irql = 0;
      FxNonPagedObject::Lock(pRequest, &irql, v11);
      v13 = m_Globals->FxVerifierOn ? FxRequest::Vf_VerifyRequestIsInCallerContext(pRequest, m_Globals) : 0;
      FxNonPagedObject::Unlock(pRequest, irql, v12);
      if ( (v13 & 0x80000000) != 0 )
        return v13;
    }
    v14 = pRequest;
    v13 = -1073741808;
    m_Irp = pRequest->m_Irp.m_Irp;
    CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( CurrentStackLocation->MajorFunction == 4 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v18 = 35;
LABEL_17:
        v19 = 5;
LABEL_34:
        WPP_IFR_SF_qd(m_Globals, v19, 0x10u, v18, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
        return v13;
      }
      return v13;
    }
    if ( MajorFunction == 15 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v18 = 36;
        goto LABEL_17;
      }
      return v13;
    }
    if ( MajorFunction == 14 )
    {
      if ( (CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart & 3) == 3 )
      {
        level = CurrentStackLocation->Parameters.Read.Length;
        if ( level < RequiredLength )
        {
          if ( m_Globals->FxVerboseOn )
          {
            v21 = 37;
LABEL_28:
            WPP_IFR_SF_qdid(
              m_Globals,
              (unsigned __int8)CurrentStackLocation,
              (unsigned int)pRequest,
              v21,
              traceGuid,
              Request,
              level,
              RequiredLength);
            return 3221225507LL;
          }
          return 3221225507LL;
        }
LABEL_30:
        *OutputBuffer = m_Irp->UserBuffer;
        if ( v9 )
          *v9 = v14->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
        return 0LL;
      }
    }
    else if ( MajorFunction == 3
           && *(_DWORD *)(*((_QWORD *)CurrentStackLocation->DeviceObject->DeviceExtension - 6) + 212LL) == 1 )
    {
      level = CurrentStackLocation->Parameters.Read.Length;
      if ( level < RequiredLength )
      {
        if ( m_Globals->FxVerboseOn )
        {
          v21 = 38;
          goto LABEL_28;
        }
        return 3221225507LL;
      }
      goto LABEL_30;
    }
    v18 = 39;
    v19 = 2;
    goto LABEL_34;
  }
  return result;
}
