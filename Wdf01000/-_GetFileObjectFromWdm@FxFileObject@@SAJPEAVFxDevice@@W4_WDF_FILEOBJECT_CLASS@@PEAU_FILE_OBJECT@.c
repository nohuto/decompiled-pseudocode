/*
 * XREFs of ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C000309C
 * Callers:
 *     ?GetFileObject@FxRequest@@QEAAJPEAPEAVFxFileObject@@@Z @ 0x1C0002FF8 (-GetFileObject@FxRequest@@QEAAJPEAPEAVFxFileObject@@@Z.c)
 *     imp_WdfDeviceGetFileObject @ 0x1C000D0B0 (imp_WdfDeviceGetFileObject.c)
 *     ?OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0010318 (-OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C003F6DC (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00859BC (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxFileObject::_GetFileObjectFromWdm(
        FxDevice *pDevice,
        _WDF_FILEOBJECT_CLASS FileObjectClass,
        _FILE_OBJECT *pWdmFileObject,
        FxFileObject **ppFxFileObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  __int32 v6; // ecx
  unsigned __int8 *p_m_Exclusive; // r14
  FxFileObject *FsContext; // rbx
  _LIST_ENTRY *p_m_FileObjectListHead; // rcx
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v15; // rax
  _FILE_OBJECT *_a2; // rax
  unsigned int v17; // edx
  _FX_DRIVER_GLOBALS *globals; // [rsp+80h] [rbp+8h]
  unsigned __int8 irql; // [rsp+88h] [rbp+10h] BYREF

  m_Globals = pDevice->m_Globals;
  globals = m_Globals;
  v6 = FileObjectClass & 0x7FFFFFFF;
  if ( (FileObjectClass & 0x7FFFFFFF) == 1 )
    goto LABEL_5;
  p_m_Exclusive = &pDevice->m_Exclusive;
  if ( pWdmFileObject )
  {
    if ( v6 == 2 )
    {
      FsContext = (FxFileObject *)pWdmFileObject->FsContext;
      goto LABEL_9;
    }
    if ( v6 == 3 )
    {
      FsContext = (FxFileObject *)pWdmFileObject->FsContext2;
      goto LABEL_9;
    }
LABEL_12:
    irql = 0;
    FsContext = 0LL;
    FxNonPagedObject::Lock(pDevice, &irql);
    p_m_FileObjectListHead = &pDevice->m_FileObjectListHead;
    Flink = pDevice->m_FileObjectListHead.Flink;
    v15 = Flink;
    if ( pWdmFileObject )
    {
      while ( v15 != p_m_FileObjectListHead )
      {
        if ( (_FILE_OBJECT *)v15[-1].Flink == pWdmFileObject )
          goto LABEL_13;
        v15 = v15->Flink;
      }
    }
    else
    {
LABEL_13:
      FsContext = (FxFileObject *)&v15[-9];
      if ( v15 != (_LIST_ENTRY *)144 )
      {
LABEL_28:
        FxNonPagedObject::Unlock(pDevice, irql);
        m_Globals = globals;
LABEL_9:
        if ( !FsContext && FileObjectClass >= WdfFileObjectInvalid )
        {
          WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x11u, WPP_FxFileObject_cpp_Traceguids, pWdmFileObject);
          WPP_IFR_SF_(globals, 2u, 0x12u, 0x12u, WPP_FxFileObject_cpp_Traceguids);
          if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(globals, v17, 9u) )
            FxVerifierDbgBreakPoint(pDevice->m_Globals);
        }
        *ppFxFileObject = FsContext;
        return 0LL;
      }
    }
    if ( *p_m_Exclusive && pDevice->m_DeviceObject.m_DeviceObject->DeviceType == 27 && Flink != p_m_FileObjectListHead )
    {
      FsContext = (FxFileObject *)&Flink[-9];
      if ( Flink == (_LIST_ENTRY *)144 )
        _a2 = 0LL;
      else
        _a2 = FsContext->m_FileObject.m_FileObject;
      WPP_IFR_SF_qq(globals, 3u, 0x12u, 0xFu, WPP_FxFileObject_cpp_Traceguids, pWdmFileObject, _a2);
      WPP_IFR_SF_(globals, 3u, 0x12u, 0x10u, WPP_FxFileObject_cpp_Traceguids);
    }
    goto LABEL_28;
  }
  if ( *p_m_Exclusive && v6 == 4 )
    goto LABEL_12;
  if ( FileObjectClass < WdfFileObjectInvalid )
  {
LABEL_5:
    *ppFxFileObject = 0LL;
    return 0LL;
  }
  WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xEu, WPP_FxFileObject_cpp_Traceguids);
  FxVerifierDbgBreakPoint(pDevice->m_Globals);
  return 3221225473LL;
}
