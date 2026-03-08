/*
 * XREFs of ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C00397A8
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C0019C10 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 *     imp_WdfRequestRetrieveOutputWdmMdl @ 0x1C0035820 (imp_WdfRequestRetrieveOutputWdmMdl.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDd @ 0x1C0018F98 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0019480 (WPP_IFR_SF_qqdd.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C003A3DC (WPP_IFR_SF_Dqqd.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C0048028 (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAA98 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetDeviceControlOutputMdl(FxRequest *this, _MDL **pMdl, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int Length; // ebp
  void *MasterIrp; // r15
  unsigned int IsNotCompleted; // edi
  unsigned int LowPart; // r8d
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  const void *_a2; // rax
  unsigned __int8 v13; // dl
  unsigned int _a3; // r8d
  const void *v15; // rax
  const void *v16; // rdx
  unsigned int v17; // r8d
  _MDL *v18; // rax
  const void *ObjectHandleUnchecked; // rax
  unsigned __int16 v20; // r9
  _MDL *MdlAddress; // rax
  _MDL *m_AllocatedMdl; // rax
  _MDL *Debug; // rax
  _MDL *v24; // rdi
  const void *v25; // rax
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // r8
  unsigned __int8 v29; // dl
  const void *v30; // rax
  unsigned __int16 v31; // r9
  unsigned __int8 _a1; // [rsp+20h] [rbp-48h]
  unsigned int _a4; // [rsp+40h] [rbp-28h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  Length = 0;
  MasterIrp = 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( m_Globals->FxVerifierIO )
  {
    if ( m_Globals->FxVerifierOn )
    {
      IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
      if ( (IsNotCompleted & 0x80000000) != 0 )
        goto LABEL_26;
    }
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( (unsigned __int8)(CurrentStackLocation->MajorFunction - 14) <= 1u )
  {
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( (LowPart & 3) != 0 )
    {
      switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3 )
      {
        case 1u:
          MdlAddress = m_Irp->MdlAddress;
          *pMdl = MdlAddress;
          if ( !MdlAddress )
          {
            IsNotCompleted = -1073741789;
            ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
            v20 = 21;
            goto LABEL_13;
          }
          break;
        case 2u:
          v18 = m_Irp->MdlAddress;
          *pMdl = v18;
          if ( !v18 )
          {
            IsNotCompleted = -1073741789;
            ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
            v20 = 22;
LABEL_13:
            WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v20, WPP_FxRequestKm_cpp_Traceguids, ObjectHandleUnchecked, -1073741789);
            goto LABEL_26;
          }
          break;
        case 3u:
          FxObject::GetObjectHandleUnchecked(this);
          v15 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
          WPP_IFR_SF_Dqqd(
            m_Globals,
            (unsigned __int8)v16,
            v17,
            0x17u,
            WPP_FxRequestKm_cpp_Traceguids,
            v17,
            v15,
            v16,
            _a4);
          WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0x18u, WPP_FxRequestKm_cpp_Traceguids);
          *pMdl = 0LL;
          IsNotCompleted = -1073741808;
          goto LABEL_26;
        default:
LABEL_28:
          v29 = irql;
          *pMdl = 0LL;
          FxNonPagedObject::Unlock(this, v29, LowPart);
          IsNotCompleted = -1073741789;
          if ( MasterIrp )
          {
            if ( Length )
              return IsNotCompleted;
            v30 = (const void *)FxObject::GetObjectHandleUnchecked(this);
            v31 = 26;
          }
          else
          {
            v30 = (const void *)FxObject::GetObjectHandleUnchecked(this);
            v31 = 25;
          }
          WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v31, WPP_FxRequestKm_cpp_Traceguids, v30, -1073741789);
          return IsNotCompleted;
      }
    }
    else
    {
      MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
      Length = CurrentStackLocation->Parameters.Read.Length;
      if ( !MasterIrp || !Length )
        goto LABEL_28;
      m_AllocatedMdl = this->m_AllocatedMdl;
      if ( !m_AllocatedMdl )
      {
        if ( m_Globals->FxVerifierOn )
          Debug = FxMdlAllocateDebug(m_Globals, this, MasterIrp, Length, _a1, 0, retaddr);
        else
          Debug = IoAllocateMdl(MasterIrp, Length, 0, 0, 0LL);
        v24 = Debug;
        if ( Debug )
        {
          MmBuildMdlForNonPagedPool(Debug);
          v26 = irql;
          this->m_AllocatedMdl = v24;
          *pMdl = v24;
          FxNonPagedObject::Unlock(this, v26, v27);
          return 0LL;
        }
        v25 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        IsNotCompleted = -1073741670;
        WPP_IFR_SF_qqdd(m_Globals, 2u, 0x10u, 0x1Bu, WPP_FxRequestKm_cpp_Traceguids, v25, MasterIrp, Length, 0xC000009A);
        *pMdl = 0LL;
        goto LABEL_26;
      }
      *pMdl = m_AllocatedMdl;
    }
    IsNotCompleted = 0;
    goto LABEL_26;
  }
  _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  IsNotCompleted = -1073741808;
  WPP_IFR_SF_qDd(m_Globals, v13, 0x10u, 0x14u, WPP_FxRequestKm_cpp_Traceguids, _a2, _a3, 0xC0000010);
  *pMdl = 0LL;
LABEL_26:
  FxNonPagedObject::Unlock(this, irql, LowPart);
  return IsNotCompleted;
}
