__int64 __fastcall FxRequestBuffer::GetOrAllocateMdl(
        FxRequestBuffer *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _MDL **Mdl,
        _MDL **MdlToFree,
        unsigned __int8 *UnlockWhenFreed,
        _LOCK_OPERATION Operation,
        unsigned __int8 ReuseMdl,
        unsigned __int64 *SizeOfMdl)
{
  __int64 result; // rax
  _WDFMEMORY_OFFSET *Offsets; // rax
  char *v14; // rbp
  __int64 v15; // r12
  SIZE_T v16; // rax
  unsigned __int64 v17; // r13
  _MDL *Debug; // rax
  unsigned __int16 v19; // r9
  _MDL *v20; // rax
  __int64 (*GetBuffer)(void); // rax
  unsigned __int64 Memory; // r15
  unsigned int BufferLength; // eax
  SIZE_T v24; // rax
  unsigned int v25; // edx
  unsigned __int8 v26; // r13
  unsigned __int8 *p_FxVerifierOn; // rbp
  _MDL *v28; // rax
  _MDL *v29; // r8
  int v30; // eax
  unsigned int v31; // r15d
  unsigned __int8 Irp; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v34; // [rsp+70h] [rbp+8h]

  *UnlockWhenFreed = 0;
  if ( this->DataType == FxRequestBufferUnspecified )
  {
    result = 0LL;
    goto LABEL_68;
  }
  if ( this->DataType != FxRequestBufferMemory )
  {
    if ( this->DataType == FxRequestBufferMdl )
    {
      v20 = this->u.Mdl.Mdl;
      goto LABEL_31;
    }
    if ( this->DataType != FxRequestBufferBuffer )
    {
      if ( this->DataType != FxRequestBufferReferencedMdl )
      {
        result = 3221225485LL;
LABEL_68:
        *Mdl = 0LL;
        return result;
      }
      Offsets = this->u.Memory.Offsets;
      if ( Offsets && (Offsets->BufferOffset || Offsets->BufferLength) )
      {
        v14 = (char *)this->u.RefMdl.Mdl->StartVa + this->u.RefMdl.Mdl->ByteOffset + Offsets->BufferOffset;
        LODWORD(v15) = FxRequestBuffer::GetBufferLength(this);
        v16 = MmSizeOfMdl(v14, (int)v15);
        v17 = v16;
        if ( ReuseMdl && v16 <= *SizeOfMdl )
        {
          if ( ((*MdlToFree)->MdlFlags & 0x20) != 0 )
            MmUnmapLockedPages((*MdlToFree)->MappedSystemVa, *MdlToFree);
          Debug = *MdlToFree;
          *Mdl = *MdlToFree;
LABEL_27:
          IoBuildPartialMdl(this->u.RefMdl.Mdl, Debug, v14, v15);
LABEL_63:
          *MdlToFree = *Mdl;
          return 0LL;
        }
        if ( *MdlToFree )
        {
          if ( FxDriverGlobals->FxVerifierOn )
            FxMdlFreeDebug(FxDriverGlobals, *MdlToFree);
          else
            IoFreeMdl(*MdlToFree);
          *MdlToFree = 0LL;
          if ( SizeOfMdl )
            *SizeOfMdl = 0LL;
        }
        if ( FxDriverGlobals->FxVerifierOn )
          Debug = FxMdlAllocateDebug(FxDriverGlobals, 0LL, v14, v15, Irp, 0, retaddr);
        else
          Debug = IoAllocateMdl(v14, v15, 0, 0, 0LL);
        *Mdl = Debug;
        if ( Debug )
        {
          if ( SizeOfMdl )
          {
            *SizeOfMdl = v17;
            Debug = *Mdl;
          }
          goto LABEL_27;
        }
        v19 = 12;
LABEL_66:
        WPP_IFR_SF_dd(FxDriverGlobals, 2u, 6u, v19, WPP_FxRequestBufferKm_cpp_Traceguids, v15, -1073741670);
        return 3221225626LL;
      }
      v20 = this->u.RefMdl.Mdl;
LABEL_31:
      *Mdl = v20;
      return 0LL;
    }
    goto LABEL_36;
  }
  GetBuffer = (__int64 (*)(void))this->u.Memory.Memory->GetBuffer;
  if ( this->u.Memory.Offsets )
    Memory = GetBuffer() + this->u.Memory.Offsets->BufferOffset;
  else
    Memory = GetBuffer();
  if ( !Memory )
LABEL_36:
    Memory = (unsigned __int64)this->u.Memory.Memory;
  BufferLength = FxRequestBuffer::GetBufferLength(this);
  v15 = BufferLength;
  v24 = MmSizeOfMdl((PVOID)Memory, (int)BufferLength);
  v26 = ReuseMdl;
  v34 = v24;
  if ( ReuseMdl && v24 <= *SizeOfMdl )
  {
    if ( ((*MdlToFree)->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages((*MdlToFree)->MappedSystemVa, *MdlToFree);
    p_FxVerifierOn = &FxDriverGlobals->FxVerifierOn;
    *Mdl = *MdlToFree;
  }
  else
  {
    v26 = 0;
    if ( *MdlToFree )
    {
      if ( FxDriverGlobals->FxVerifierOn )
        FxMdlFreeDebug(FxDriverGlobals, *MdlToFree);
      else
        IoFreeMdl(*MdlToFree);
      *MdlToFree = 0LL;
      if ( SizeOfMdl )
        *SizeOfMdl = 0LL;
    }
    p_FxVerifierOn = &FxDriverGlobals->FxVerifierOn;
    if ( FxDriverGlobals->FxVerifierOn )
      v28 = FxMdlAllocateDebug(FxDriverGlobals, 0LL, (void *)Memory, v15, Irp, 0, retaddr);
    else
      v28 = IoAllocateMdl((PVOID)Memory, v15, 0, 0, 0LL);
    *Mdl = v28;
    if ( !v28 )
    {
      v19 = 10;
      goto LABEL_66;
    }
    if ( SizeOfMdl )
      *SizeOfMdl = v34;
  }
  if ( v26 == 1 )
  {
    v29 = *Mdl;
    v29->Next = 0LL;
    v29->MdlFlags = 0;
    v29->StartVa = (void *)(Memory & 0xFFFFFFFFFFFFF000uLL);
    v25 = Memory & 0xFFF;
    v29->Size = 8 * ((((Memory & 0xFFF) + v15 + 4095) >> 12) + 6);
    v29->ByteOffset = v25;
    v29->ByteCount = v15;
  }
  v30 = FxProbeAndLockWithAccess(*Mdl, v25, Operation);
  v31 = v30;
  if ( v30 >= 0 )
  {
    *UnlockWhenFreed = 1;
    goto LABEL_63;
  }
  WPP_IFR_SF_qd(FxDriverGlobals, 2u, 6u, 0xBu, WPP_FxRequestBufferKm_cpp_Traceguids, *Mdl, v30);
  if ( !v26 )
  {
    if ( *p_FxVerifierOn )
      FxMdlFreeDebug(FxDriverGlobals, *Mdl);
    else
      IoFreeMdl(*Mdl);
  }
  *Mdl = 0LL;
  return v31;
}
