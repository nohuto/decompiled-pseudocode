/*
 * XREFs of FxCmResourceListInsertDescriptor @ 0x1C0048B50
 * Callers:
 *     imp_WdfCmResourceListAppendDescriptor @ 0x1C0048E70 (imp_WdfCmResourceListAppendDescriptor.c)
 *     imp_WdfCmResourceListInsertDescriptor @ 0x1C0048FA0 (imp_WdfCmResourceListInsertDescriptor.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0005600 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C00489FC (--0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C004E7B8 (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 */

int __fastcall FxCmResourceListInsertDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Descriptor,
        unsigned int Index)
{
  _FX_DRIVER_GLOBALS *v4; // rbx
  _FX_DRIVER_GLOBALS *v7; // rcx
  FxResourceCm *v8; // rax
  FxObject *v9; // rax
  FxObject *v10; // rbx
  int v11; // edi
  FxPoolTypeOrPoolFlags v13; // [rsp+40h] [rbp-18h] BYREF
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]
  FxCmResList *pList; // [rsp+60h] [rbp+8h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pList = 0LL;
  v7 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !Descriptor )
    FxVerifierNullBugCheck(v7, retaddr);
  FxObjectHandleGetPtr(v7, (unsigned __int64)List, 0x1036u, (void **)&pList);
  *(_QWORD *)&v13.UsePoolType = 0LL;
  v13.u.PoolFlags = 64LL;
  v8 = (FxResourceCm *)FxObjectHandleAllocCommon(v4, &v13, 0x90uLL, 0, 0LL, 0, FxObjectTypeInternal);
  if ( !v8 )
    return -1073741670;
  FxResourceCm::FxResourceCm(v8, v4, Descriptor);
  v10 = v9;
  if ( !v9 )
    return -1073741670;
  v11 = FxObject::AssignParentObject(v9, pList);
  if ( v11 >= 0 )
    return FxResourceCollection::AddAt(pList, Index, v10);
  v10->DeleteObject(v10);
  return v11;
}
