/*
 * XREFs of FxIoResourceRequirementsListInsertIoResList @ 0x1C0048DC0
 * Callers:
 *     imp_WdfIoResourceRequirementsListAppendIoResList @ 0x1C0049720 (imp_WdfIoResourceRequirementsListAppendIoResList.c)
 *     imp_WdfIoResourceRequirementsListInsertIoResList @ 0x1C0049820 (imp_WdfIoResourceRequirementsListInsertIoResList.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C004E7B8 (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 */

int __fastcall FxIoResourceRequirementsListInsertIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList,
        unsigned int Index)
{
  int result; // eax
  FxIoResList *pIoResList; // [rsp+20h] [rbp-18h] BYREF
  FxIoResReqList *pIoResReqList; // [rsp+40h] [rbp+8h] BYREF

  pIoResReqList = 0LL;
  pIoResList = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)RequirementsList,
    0x1037u,
    (void **)&pIoResReqList);
  FxObjectHandleGetPtr(pIoResReqList->m_Globals, (unsigned __int64)IoResList, 0x1035u, (void **)&pIoResList);
  if ( pIoResList->m_OwningList != pIoResReqList )
    return -1073741808;
  result = FxResourceCollection::AddAt(pIoResReqList, Index, pIoResList);
  if ( result >= 0 )
  {
    pIoResList->m_AccessFlags = pIoResReqList->m_AccessFlags;
    pIoResList->m_OwningList = pIoResReqList;
  }
  return result;
}
