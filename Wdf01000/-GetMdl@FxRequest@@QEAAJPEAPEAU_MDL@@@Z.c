/*
 * XREFs of ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C0039AD4
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C0019C10 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 *     imp_WdfRequestRetrieveInputWdmMdl @ 0x1C0035760 (imp_WdfRequestRetrieveInputWdmMdl.c)
 *     imp_WdfRequestRetrieveOutputWdmMdl @ 0x1C0035820 (imp_WdfRequestRetrieveOutputWdmMdl.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qdd @ 0x1C0026A80 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C003A3DC (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_dqqd @ 0x1C003A4F8 (WPP_IFR_SF_dqqd.c)
 *     WPP_IFR_SF_qDqd @ 0x1C003A65C (WPP_IFR_SF_qDqd.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C0048028 (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAA98 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetMdl(FxRequest *this, _MDL **pMdl, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int IsNotCompleted; // esi
  int LowPart; // r8d
  _IRP *m_Irp; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  void *MasterIrp; // rbp
  unsigned int Options; // esi
  const void *level; // rax
  unsigned int flags; // edx
  const void *id; // r8
  unsigned __int16 v15; // r9
  _MDL *MdlAddress; // rax
  int v17; // r14d
  const void *v18; // rax
  int v19; // r8d
  FxObject *v20; // r9
  const void *v21; // rax
  int v22; // r8d
  __int64 v23; // rdx
  FxObject *v24; // r9
  const void *v25; // rax
  const void *v26; // rdx
  int v27; // r8d
  const void *ObjectHandleUnchecked; // rax
  const void *v29; // rdx
  unsigned int v30; // r8d
  _MDL *m_AllocatedMdl; // rax
  _MDL *Debug; // rax
  _MDL *v33; // r15
  unsigned __int8 v35; // dl
  unsigned __int8 v36; // r8
  unsigned __int8 v37; // dl
  const void *v38; // rax
  unsigned __int16 v39; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  int globals; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( m_Globals->FxVerifierIO )
  {
    if ( m_Globals->FxVerifierOn )
    {
      IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
      if ( IsNotCompleted < 0 )
        goto LABEL_32;
    }
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( (unsigned __int8)(CurrentStackLocation->MajorFunction - 14) <= 1u )
  {
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( (LowPart & 3) == 0 || (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) - 1 < 2 )
    {
      MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
      Options = CurrentStackLocation->Parameters.Create.Options;
      goto LABEL_22;
    }
    FxObject::GetObjectHandleUnchecked(this);
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_Dqqd(
      m_Globals,
      (unsigned __int8)v29,
      v30,
      0xAu,
      WPP_FxRequestKm_cpp_Traceguids,
      v30,
      ObjectHandleUnchecked,
      v29,
      globals);
    WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequestKm_cpp_Traceguids);
LABEL_16:
    IsNotCompleted = -1073741808;
    goto LABEL_31;
  }
  LowPart = this->m_DeviceBase[1].m_Refcnt;
  if ( LowPart != 2 )
  {
    if ( LowPart == 3 )
    {
      MdlAddress = m_Irp->MdlAddress;
      *pMdl = MdlAddress;
      if ( MdlAddress )
      {
        v17 = 0;
      }
      else
      {
        v17 = -1073741789;
        v18 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qd(m_Globals, 2u, v19 + 13, v19 + 10, WPP_FxRequestKm_cpp_Traceguids, v18, -1073741789);
      }
      IsNotCompleted = v17;
      goto LABEL_32;
    }
    if ( LowPart != 1 )
    {
      FxObject::GetObjectHandleUnchecked(this);
      v25 = (const void *)FxObject::GetObjectHandleUnchecked(v24);
      WPP_IFR_SF_dqqd(
        m_Globals,
        (unsigned __int8)v26,
        0x10u,
        0x10u,
        WPP_FxRequestKm_cpp_Traceguids,
        v27,
        v25,
        v26,
        -1073741595);
      FxVerifierDbgBreakPoint(m_Globals);
      IsNotCompleted = -1073741595;
      goto LABEL_31;
    }
    FxObject::GetObjectHandleUnchecked(this);
    v21 = (const void *)FxObject::GetObjectHandleUnchecked(v20);
    WPP_IFR_SF_qid(m_Globals, 2u, v22 + 15, v22 + 13, WPP_FxRequestKm_cpp_Traceguids, v21, v23, -1073741808);
    WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0xFu, WPP_FxRequestKm_cpp_Traceguids);
    FxVerifierDbgBreakPoint(m_Globals);
    goto LABEL_16;
  }
  MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
  if ( (unsigned __int8)(CurrentStackLocation->MajorFunction - 3) > 1u )
  {
    FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    level = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qDqd(m_Globals, flags, (unsigned int)id, v15, traceGuid, level, flags, id, globals);
    IsNotCompleted = -1073741811;
LABEL_31:
    *pMdl = 0LL;
    goto LABEL_32;
  }
  Options = CurrentStackLocation->Parameters.Read.Length;
LABEL_22:
  if ( !MasterIrp || !Options )
  {
    v37 = irql;
    *pMdl = 0LL;
    FxNonPagedObject::Unlock(this, v37, LowPart);
    if ( MasterIrp )
    {
      if ( Options )
        return 3221225507LL;
      v38 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v39 = 18;
    }
    else
    {
      v38 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v39 = 17;
    }
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v39, WPP_FxRequestKm_cpp_Traceguids, v38, -1073741789);
    return 3221225507LL;
  }
  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    *pMdl = m_AllocatedMdl;
    IsNotCompleted = 0;
LABEL_32:
    FxNonPagedObject::Unlock(this, irql, LowPart);
    return (unsigned int)IsNotCompleted;
  }
  if ( m_Globals->FxVerifierOn )
    Debug = FxMdlAllocateDebug(m_Globals, this, MasterIrp, Options, (unsigned __int8)traceGuid, 0, retaddr);
  else
    Debug = IoAllocateMdl(MasterIrp, Options, 0, 0, 0LL);
  v33 = Debug;
  if ( !Debug )
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x13u, WPP_FxRequestKm_cpp_Traceguids, MasterIrp, Options, 0xC000009A);
    IsNotCompleted = -1073741670;
    goto LABEL_31;
  }
  MmBuildMdlForNonPagedPool(Debug);
  v35 = irql;
  this->m_AllocatedMdl = v33;
  *pMdl = v33;
  FxNonPagedObject::Unlock(this, v35, v36);
  return 0LL;
}
