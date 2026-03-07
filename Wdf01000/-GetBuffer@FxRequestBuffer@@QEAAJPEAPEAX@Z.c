__int64 __fastcall FxRequestBuffer::GetBuffer(FxRequestBuffer *this, IFxMemory **Buffer)
{
  __int64 (*GetBuffer)(void); // rax
  IFxMemory *v5; // rax
  _MDL *Mdl; // rcx
  IFxMemory *MappedSystemVa; // rax
  _WDFMEMORY_OFFSET *Offsets; // rcx
  IFxMemory *Memory; // rcx
  IFxMemory *v11; // rax

  switch ( this->DataType )
  {
    case FxRequestBufferUnspecified:
      *Buffer = 0LL;
      return 0LL;
    case FxRequestBufferMemory:
      GetBuffer = (__int64 (*)(void))this->u.Memory.Memory->GetBuffer;
      if ( !this->u.Memory.Offsets )
      {
        v5 = (IFxMemory *)GetBuffer();
LABEL_5:
        *Buffer = v5;
        return 0LL;
      }
      MappedSystemVa = (IFxMemory *)GetBuffer();
      Offsets = this->u.Memory.Offsets;
LABEL_19:
      v5 = (IFxMemory *)((char *)MappedSystemVa + Offsets->BufferOffset);
      goto LABEL_5;
    case FxRequestBufferMdl:
      Memory = this->u.Memory.Memory;
      if ( (BYTE2(Memory[1].__vftable) & 5) != 0 )
        v11 = (IFxMemory *)Memory[3].__vftable;
      else
        v11 = (IFxMemory *)MmMapLockedPagesSpecifyCache(
                             (PMDL)Memory,
                             0,
                             MmCached,
                             0LL,
                             0,
                             ExDefaultMdlProtection | 0x40000010);
      *Buffer = v11;
      return v11 == 0LL ? 0xC000009A : 0;
    case FxRequestBufferBuffer:
      *Buffer = this->u.Memory.Memory;
      return 0LL;
    case FxRequestBufferReferencedMdl:
      Mdl = this->u.RefMdl.Mdl;
      if ( (Mdl->MdlFlags & 5) != 0 )
        MappedSystemVa = (IFxMemory *)Mdl->MappedSystemVa;
      else
        MappedSystemVa = (IFxMemory *)MmMapLockedPagesSpecifyCache(
                                        Mdl,
                                        0,
                                        MmCached,
                                        0LL,
                                        0,
                                        ExDefaultMdlProtection | 0x40000010);
      *Buffer = MappedSystemVa;
      if ( MappedSystemVa )
      {
        Offsets = this->u.Memory.Offsets;
        if ( !Offsets )
          return 0LL;
        goto LABEL_19;
      }
      return 3221225626LL;
    default:
      return 3221225485LL;
  }
}
