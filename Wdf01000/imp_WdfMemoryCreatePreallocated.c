__int64 __fastcall imp_WdfMemoryCreatePreallocated(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _FX_DRIVER_GLOBALS *Buffer,
        unsigned __int64 BufferSize,
        WDFMEMORY__ **PMemory)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void *ParentObject; // rdx
  WDFMEMORY__ **v10; // rsi
  __int64 result; // rax
  FxMemoryObject *v12; // rax
  FxObject *v13; // rdi
  int v14; // ebx
  FxPoolTypeOrPoolFlags v15; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxObject *pParent; // [rsp+80h] [rbp+8h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+90h] [rbp+18h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  hMemory = 0LL;
  if ( (int)FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Attributes, 0) >= 0 )
  {
    ParentObject = Attributes->ParentObject;
    pParent = 0LL;
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
  }
  if ( !Buffer )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v10 = PMemory;
  if ( !PMemory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *PMemory = 0LL;
  if ( BufferSize )
  {
    result = FxValidateObjectAttributes(m_Globals, Attributes, 0);
    if ( (int)result >= 0 )
    {
      *(_QWORD *)&v15.UsePoolType = 0LL;
      v15.u.PoolFlags = 64LL;
      v12 = (FxMemoryObject *)FxObjectHandleAllocCommon(
                                m_Globals,
                                &v15,
                                0x80uLL,
                                0,
                                Attributes,
                                0,
                                FxObjectTypeExternal);
      v13 = v12;
      if ( v12 )
      {
        FxMemoryObject::FxMemoryObject(v12, m_Globals, 0x80u, BufferSize);
        v13[1].m_Globals = Buffer;
        v13->__vftable = (FxObject_vtbl *)FxMemoryBufferPreallocated::`vftable'{for `FxObject'};
        v13[1].__vftable = (FxObject_vtbl *)FxMemoryBufferPreallocated::`vftable'{for `IFxMemory'};
        v14 = FxObject::Commit(v13, Attributes, (void **)&hMemory, 0LL, 1u);
        if ( v14 < 0 )
        {
          FxObject::ClearEvtCallbacks(v13);
          v13->DeleteObject(v13);
        }
        else
        {
          *v10 = hMemory;
        }
        return (unsigned int)v14;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  else
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xAu, WPP_FxMemoryBufferPreallocatedAPI_cpp_Traceguids, 0xC000000D);
    return 3221225485LL;
  }
  return result;
}
