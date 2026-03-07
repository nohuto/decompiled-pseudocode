int __fastcall imp_WdfMemoryCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _POOL_TYPE PoolType,
        unsigned int PoolTag,
        unsigned __int64 BufferSize,
        WDFMEMORY__ **Memory,
        void **Buffer)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFMEMORY__ **v11; // rdi
  bool IsPagedPoolType; // al
  int result; // eax
  unsigned __int64 v14; // r14
  FxMemoryObject *v15; // rbx
  int v16; // esi
  void **v17; // rdi
  FxMemoryObject *pBuffer; // [rsp+30h] [rbp-28h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+38h] [rbp-20h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxObject *pParent; // [rsp+60h] [rbp+8h] BYREF

  pBuffer = 0LL;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  hMemory = 0LL;
  if ( FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Attributes, 0) >= 0 )
  {
    pParent = 0LL;
    FxObjectHandleGetPtr(m_Globals, Attributes->ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
  }
  v11 = Memory;
  if ( !Memory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  IsPagedPoolType = FxIsPagedPoolType(PoolType);
  result = FxVerifierCheckIrqlLevel(m_Globals, 2 - IsPagedPoolType);
  if ( result >= 0 )
  {
    v14 = BufferSize;
    if ( BufferSize )
    {
      *v11 = 0LL;
      result = FxValidateObjectAttributes(m_Globals, Attributes, 0);
      if ( result >= 0 )
      {
        if ( !PoolTag )
          PoolTag = m_Globals->Tag;
        if ( m_Globals->FxVerifierOn )
          VfCheckNxPoolType((unsigned int)PoolType, retaddr, PoolTag);
        result = FxMemoryObject::_Create(m_Globals, Attributes, PoolType, PoolTag, v14, &pBuffer);
        if ( result >= 0 )
        {
          v15 = pBuffer;
          v16 = FxObject::Commit(pBuffer, Attributes, (void **)&hMemory, 0LL, 1u);
          if ( v16 < 0 )
          {
            FxObject::ClearEvtCallbacks(v15);
            ((void (*)(void))v15->DeleteObject)();
          }
          else
          {
            *v11 = hMemory;
            v17 = Buffer;
            if ( Buffer )
              *v17 = (void *)v15->GetBuffer(&v15->IFxMemory);
          }
          return v16;
        }
      }
    }
    else
    {
      WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xAu, WPP_FxMemoryBufferApi_cpp_Traceguids, 0xC000000D);
      return -1073741811;
    }
  }
  return result;
}
