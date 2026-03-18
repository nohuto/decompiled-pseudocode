/*
 * XREFs of ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C000B1B4
 * Callers:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C000AD0C (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0064C18 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0067B60 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxRequestBuffer::GetBuffer(FxRequestBuffer *this, IFxMemory **Buffer)
{
  __int64 (*GetBuffer)(void); // rax
  IFxMemory *v5; // rcx
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
      if ( this->u.Memory.Offsets )
        v5 = (IFxMemory *)(this->u.Memory.Offsets->BufferOffset + GetBuffer());
      else
        v5 = (IFxMemory *)GetBuffer();
      *Buffer = v5;
      return 0LL;
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
                             ExDefaultMdlProtection | 0x10);
      *Buffer = v11;
      if ( v11 )
        return 0LL;
      break;
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
                                        ExDefaultMdlProtection | 0x10);
      *Buffer = MappedSystemVa;
      if ( MappedSystemVa )
      {
        Offsets = this->u.Memory.Offsets;
        if ( Offsets )
          *Buffer = (IFxMemory *)((char *)MappedSystemVa + Offsets->BufferOffset);
        return 0LL;
      }
      break;
    default:
      return 3221225485LL;
  }
  return 3221225626LL;
}
