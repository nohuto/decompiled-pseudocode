__int64 __fastcall FxFileObject::_CreateFileObject(
        FxDevice *pDevice,
        _IRP *Irp,
        _WDF_FILEOBJECT_CLASS FileObjectClass,
        _WDF_OBJECT_ATTRIBUTES *pObjectAttributes,
        _FILE_OBJECT *pWdmFileObject,
        FxFileObject **pFileObject)
{
  __int32 v6; // ebp
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FILE_OBJECT *v10; // rsi
  FxFileObject *v12; // rax
  FxObject *v13; // rax
  FxFileObject *v14; // rbx
  unsigned __int8 v15; // r8
  int v16; // r14d
  unsigned __int8 v17; // r8
  _LIST_ENTRY *p_m_FileObjectListHead; // rcx
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *p_m_Link; // rax
  unsigned __int8 v21; // dl
  FxPoolTypeOrPoolFlags v22; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int8 irql; // [rsp+80h] [rbp+18h] BYREF

  v6 = FileObjectClass & 0x7FFFFFFF;
  irql = 0;
  m_Globals = pDevice->m_Globals;
  if ( (FileObjectClass & 0x7FFFFFFF) == 1 )
  {
    if ( pFileObject )
      *pFileObject = 0LL;
    return 0LL;
  }
  v10 = pWdmFileObject;
  if ( pWdmFileObject || v6 == 4 && pDevice->m_Exclusive )
  {
    *(_QWORD *)&v22.UsePoolType = 0LL;
    v22.u.PoolFlags = 64LL;
    v12 = (FxFileObject *)FxObjectHandleAllocCommon(
                            m_Globals,
                            &v22,
                            0xA0uLL,
                            0,
                            pObjectAttributes,
                            0,
                            FxObjectTypeExternal);
    if ( v12 )
    {
      FxFileObject::FxFileObject(v12, pDevice->m_Globals, v10, pDevice);
      v14 = (FxFileObject *)v13;
      if ( v13 )
      {
        v16 = FxObject::Commit(v13, pObjectAttributes, 0LL, (_FX_DRIVER_GLOBALS *)pDevice, 1u);
        if ( v16 < 0 )
        {
          FxObject::ClearEvtCallbacks(v14);
          v14->DeleteObject(v14);
          return (unsigned int)v16;
        }
        FxNonPagedObject::Lock(pDevice, &irql, v15);
        p_m_FileObjectListHead = &pDevice->m_FileObjectListHead;
        Flink = pDevice->m_FileObjectListHead.Flink;
        p_m_Link = &v14->m_Link;
        if ( Flink->Blink != &pDevice->m_FileObjectListHead )
          __fastfail(3u);
        p_m_Link->Flink = Flink;
        v14->m_Link.Blink = p_m_FileObjectListHead;
        Flink->Blink = p_m_Link;
        v21 = irql;
        p_m_FileObjectListHead->Flink = p_m_Link;
        FxNonPagedObject::Unlock(pDevice, v21, v17);
        if ( v6 == 2 )
        {
          v10->FsContext = v14;
        }
        else if ( v6 == 3 )
        {
          v10->FsContext2 = v14;
        }
        if ( pFileObject )
          *pFileObject = v14;
        return 0LL;
      }
    }
    return 3221225626LL;
  }
  else
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0xAu, WPP_FxFileObject_cpp_Traceguids, Irp);
    FxVerifierDbgBreakPoint(pDevice->m_Globals);
    return 3221225858LL;
  }
}
