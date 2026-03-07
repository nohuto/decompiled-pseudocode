__int64 __fastcall FxRequestBuffer::ValidateMemoryDescriptor(
        FxRequestBuffer *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_MEMORY_DESCRIPTOR *Descriptor,
        char Flags)
{
  unsigned __int16 v8; // r9
  unsigned int v9; // ebx
  void *v10; // rdx
  _WDFMEMORY_OFFSET *Offsets; // rax
  unsigned __int64 BufferLength; // rcx
  unsigned __int64 v13; // rbx
  IFxMemory *Buffer; // rcx
  unsigned int _a1; // eax
  unsigned __int16 v16; // r9
  unsigned int Length; // eax
  IFxMemory *pMemory; // [rsp+50h] [rbp+18h] BYREF

  if ( !Descriptor )
  {
    if ( (Flags & 1) != 0 )
      return 0LL;
    v8 = 10;
    goto LABEL_5;
  }
  switch ( Descriptor->Type )
  {
    case WdfMemoryDescriptorTypeBuffer:
      Buffer = (IFxMemory *)Descriptor->u.BufferType.Buffer;
      if ( !Buffer )
      {
        if ( (Flags & 2) == 0 )
        {
          v8 = 11;
          goto LABEL_5;
        }
        _a1 = Descriptor->u.BufferType.Length;
        if ( _a1 )
        {
          v16 = 12;
          goto LABEL_31;
        }
      }
      Length = Descriptor->u.BufferType.Length;
      this->DataType = FxRequestBufferBuffer;
LABEL_33:
      this->u.Mdl.Length = Length;
      this->u.Memory.Memory = Buffer;
      return 0;
    case WdfMemoryDescriptorTypeMdl:
      Buffer = (IFxMemory *)Descriptor->u.BufferType.Buffer;
      if ( !Buffer )
      {
        if ( (Flags & 2) == 0 )
        {
          v8 = 13;
LABEL_5:
          WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, v8, WPP_FxRequestBuffer_cpp_Traceguids);
          return 3221225485LL;
        }
        _a1 = Descriptor->u.BufferType.Length;
        if ( _a1 )
        {
          v16 = 14;
LABEL_31:
          WPP_IFR_SF_D(FxDriverGlobals, 2u, 6u, v16, WPP_FxRequestBuffer_cpp_Traceguids, _a1);
          return 3221225485LL;
        }
      }
      Length = Descriptor->u.BufferType.Length;
      this->DataType = FxRequestBufferMdl;
      goto LABEL_33;
    case WdfMemoryDescriptorTypeHandle:
      pMemory = 0LL;
      v10 = Descriptor->u.BufferType.Buffer;
      if ( v10 )
      {
        FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)v10, 0x100Au, (void **)&pMemory);
        Offsets = Descriptor->u.HandleType.Offsets;
        if ( Offsets
          && ((BufferLength = Offsets->BufferLength, v13 = BufferLength + Offsets->BufferOffset, v13 < BufferLength)
           || v13 > pMemory->GetBufferSize(pMemory)) )
        {
          v9 = -1073741675;
          WPP_IFR_SF_D(FxDriverGlobals, 2u, 6u, 0x10u, WPP_FxRequestBuffer_cpp_Traceguids, 0xC0000095);
        }
        else
        {
          v9 = 0;
          if ( pMemory )
            FxRequestBuffer::SetMemory(this, pMemory, Descriptor->u.HandleType.Offsets);
        }
        return v9;
      }
      if ( (Flags & 2) == 0 )
      {
        WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, 0xFu, WPP_FxRequestBuffer_cpp_Traceguids);
        return (unsigned int)-1073741811;
      }
      return 0;
  }
  return (unsigned int)-1073741811;
}
