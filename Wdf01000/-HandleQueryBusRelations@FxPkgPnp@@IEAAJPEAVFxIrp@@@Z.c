/*
 * XREFs of ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0072730
 * Callers:
 *     ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00091A8 (-PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0077FEC (-PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqq @ 0x1C001C308 (WPP_IFR_SF_qqq.c)
 *     ?InvokeReportedMissingCallback@FxChildList@@QEAAXXZ @ 0x1C0024EA0 (-InvokeReportedMissingCallback@FxChildList@@QEAAXXZ.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00255CC (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     WPP_IFR_SF_qqqq @ 0x1C0047528 (WPP_IFR_SF_qqqq.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C004F900 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004F928 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004FE14 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdq @ 0x1C005B8B8 (WPP_IFR_SF_qdq.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryBusRelations(FxPkgPnp *this, FxIrp *Irp)
{
  unsigned __int64 ObjectHandleUnchecked; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *, _DEVICE_RELATION_TYPE); // rax
  _FX_DRIVER_GLOBALS **p_m_Globals; // r15
  FxEnumerationInfo *m_EnumInfo; // rbx
  int Status; // ebp
  unsigned int v9; // esi
  FxTransactionedList *p_m_ChildListList; // rbx
  FxTransactionedEntry *v11; // r14
  FxTransactionedEntry *NextEntryLocked; // rax
  int v13; // eax
  int _a3; // r13d
  const void *_a1; // rax
  __int64 _a2; // rdx
  const void *v17; // rax
  _FX_DRIVER_GLOBALS *v18; // r10
  FxTransactionedEntry *v19; // r14
  FxTransactionedEntry *v20; // rax
  const void *v21; // rax
  int *v22; // rdx
  _DEVICE_RELATIONS *v23; // r11
  unsigned int Count; // eax
  _FX_DRIVER_GLOBALS *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // r9d
  char v30; // [rsp+90h] [rbp+8h]
  _DEVICE_RELATIONS *pRelations; // [rsp+98h] [rbp+10h] BYREF
  FxObject *p_Blink; // [rsp+A0h] [rbp+18h]

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  m_Method = this->m_DeviceRelationsQuery.m_Method;
  if ( m_Method )
    m_Method((WDFDEVICE__ *)ObjectHandleUnchecked, BusRelations);
  p_m_Globals = &this->m_Globals;
  m_EnumInfo = this->m_EnumInfo;
  Status = 0;
  v30 = 0;
  pRelations = (_DEVICE_RELATIONS *)Irp->m_Irp->IoStatus.Information;
  v9 = 2;
  if ( !m_EnumInfo )
    goto LABEL_12;
  p_m_ChildListList = &m_EnumInfo->m_ChildListList;
  FxTransactionedList::LockForEnum(p_m_ChildListList, *p_m_Globals);
  v11 = 0LL;
  if ( p_m_ChildListList )
  {
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(p_m_ChildListList, v11);
      v11 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      p_Blink = (FxObject *)&NextEntryLocked[-3].m_TransactionLink.Blink;
      v13 = FxChildList::ProcessBusRelations((FxChildList *)&NextEntryLocked[-3].m_TransactionLink.Blink, &pRelations);
      _a3 = v13;
      if ( v13 != -1073741637 )
      {
        if ( v13 < 0 )
        {
          FxObject::GetObjectHandleUnchecked(p_Blink);
          _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
          WPP_IFR_SF_qid(*p_m_Globals, 2u, 0xCu, 0x16u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2, _a3);
          Status = _a3;
          goto LABEL_10;
        }
        v30 = 1;
      }
    }
  }
  v19 = 0LL;
  if ( !p_m_ChildListList )
    goto LABEL_11;
  while ( 1 )
  {
    v20 = FxTransactionedList::GetNextEntryLocked(p_m_ChildListList, v19);
    v19 = v20;
    if ( !v20 )
      break;
    FxChildList::InvokeReportedMissingCallback((FxChildList *)&v20[-3].m_TransactionLink.Blink);
  }
LABEL_10:
  FxTransactionedList::UnlockFromEnum(p_m_ChildListList, *p_m_Globals);
  if ( Status >= 0 )
  {
LABEL_11:
    if ( !v30 )
LABEL_12:
      Status = Irp->m_Irp->IoStatus.Status;
  }
  Irp->m_Irp->IoStatus.Information = (unsigned __int64)pRelations;
  Irp->m_Irp->IoStatus.Status = Status;
  if ( (*p_m_Globals)->FxVerboseOn )
  {
    v17 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qd(v18, 5u, 0xCu, 0x17u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v17, Status);
  }
  if ( Status >= 0 )
  {
    if ( pRelations )
    {
      v21 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qdq(*p_m_Globals, 4u, 0xCu, 0x18u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v21, *v22, v22);
      v23 = pRelations;
      Count = pRelations->Count;
      if ( pRelations->Count )
      {
        do
        {
          v25 = *p_m_Globals;
          if ( !(*p_m_Globals)->FxVerboseOn )
            break;
          v26 = v9 + 1;
          v27 = v9 - 1;
          v28 = v9 - 2;
          if ( (unsigned int)v26 >= Count )
          {
            if ( v9 >= Count )
            {
              if ( (unsigned int)v27 >= Count )
                WPP_IFR_SF_q(v25, 5u, 0xCu, 0x1Cu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v23->Objects[v28]);
              else
                WPP_IFR_SF_qq(
                  v25,
                  5u,
                  0xCu,
                  0x1Bu,
                  (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
                  v23->Objects[v28],
                  v23->Objects[v27]);
            }
            else
            {
              WPP_IFR_SF_qqq(
                *p_m_Globals,
                5u,
                0xCu,
                0x1Au,
                (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
                v23->Objects[v28],
                v23->Objects[v27],
                v23[v9 / 2].Objects[0]);
            }
          }
          else
          {
            WPP_IFR_SF_qqqq(
              *p_m_Globals,
              5u,
              0xCu,
              0x19u,
              (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
              v23->Objects[v28],
              v23->Objects[v27],
              v23[v9 / 2].Objects[0],
              v23->Objects[v26]);
          }
          v23 = pRelations;
          v9 += 4;
          Count = pRelations->Count;
        }
        while ( v9 - 2 < pRelations->Count );
      }
    }
  }
  return (unsigned int)Status;
}
