/*
 * XREFs of ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C004EE98
 * Callers:
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0082968 (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0005600 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ??0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z @ 0x1C00489A4 (--0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z.c)
 *     ??0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C004E768 (--0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C004EA88 (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 */

void __fastcall FxIoResReqList::_CreateFromWdmList(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _IO_RESOURCE_REQUIREMENTS_LIST *WdmRequirementsList,
        unsigned __int8 a3)
{
  FxIoResReqList *v5; // rax
  __int64 v6; // rax
  FxIoResReqList *v7; // rbx
  int v8; // esi
  FxIoResList *v9; // rax
  FxObject *v10; // rax
  FxIoResList *v11; // r14
  FxPoolTypeOrPoolFlags v12; // [rsp+40h] [rbp-10h] BYREF
  _IO_RESOURCE_LIST *pWdmResourceList; // [rsp+98h] [rbp+48h] BYREF

  *(_QWORD *)&v12.UsePoolType = 0LL;
  v12.u.PoolFlags = 64LL;
  v5 = (FxIoResReqList *)FxObjectHandleAllocCommon(FxDriverGlobals, &v12, 0xA0uLL, 0, 0LL, 0, FxObjectTypeExternal);
  if ( v5 )
  {
    FxIoResReqList::FxIoResReqList(v5, FxDriverGlobals);
    v7 = (FxIoResReqList *)v6;
    if ( v6 )
    {
      if ( WdmRequirementsList )
      {
        v8 = 0;
        pWdmResourceList = WdmRequirementsList->List;
        *(_DWORD *)(v6 + 156) = WdmRequirementsList->InterfaceType;
        *(_DWORD *)(v6 + 152) = WdmRequirementsList->SlotNumber;
        if ( WdmRequirementsList->AlternativeLists )
        {
          while ( 1 )
          {
            *(_QWORD *)&v12.UsePoolType = 0LL;
            v12.u.PoolFlags = 64LL;
            v9 = (FxIoResList *)FxObjectHandleAllocCommon(
                                  FxDriverGlobals,
                                  &v12,
                                  0xA0uLL,
                                  0,
                                  0LL,
                                  0,
                                  FxObjectTypeExternal);
            if ( !v9 )
              break;
            FxIoResList::FxIoResList(v9, FxDriverGlobals, v7);
            v11 = (FxIoResList *)v10;
            if ( !v10 )
              break;
            FxObject::AssignParentObject(v10, v7);
            if ( (int)FxIoResList::BuildFromWdmList(v11, (_IO_RESOURCE_DESCRIPTOR **)&pWdmResourceList) < 0 )
              break;
            if ( ++v8 >= WdmRequirementsList->AlternativeLists )
              return;
          }
          v7->DeleteObject(v7);
        }
      }
    }
  }
}
