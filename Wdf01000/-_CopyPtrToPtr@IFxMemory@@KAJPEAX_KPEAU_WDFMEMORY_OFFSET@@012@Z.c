/*
 * XREFs of ?_CopyPtrToPtr@IFxMemory@@KAJPEAX_KPEAU_WDFMEMORY_OFFSET@@012@Z @ 0x1C000DDB2
 * Callers:
 *     ?CopyFromPtr@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@PEAX_K0@Z @ 0x1C000DCA4 (-CopyFromPtr@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@PEAX_K0@Z.c)
 *     ?CopyToPtr@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@PEAX_K0@Z @ 0x1C003F2C0 (-CopyToPtr@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@PEAX_K0@Z.c)
 * Callees:
 *     memmove @ 0x1C000B140 (memmove.c)
 */

__int64 __fastcall IFxMemory::_CopyPtrToPtr(
        char *SourceBuffer,
        unsigned __int64 SourceBufferLength,
        _WDFMEMORY_OFFSET *SourceOffsets,
        char *DestinationBuffer,
        size_t DestinationBufferLength,
        _WDFMEMORY_OFFSET *DestinationOffsets)
{
  char *v7; // r9
  size_t v10; // r8
  unsigned __int64 BufferOffset; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 BufferLength; // rax

  v7 = SourceBuffer;
  if ( !SourceBuffer )
    return 3221225485LL;
  v10 = DestinationBufferLength;
  if ( SourceOffsets )
  {
    BufferOffset = SourceOffsets->BufferOffset;
    if ( BufferOffset )
    {
      if ( BufferOffset >= SourceBufferLength )
        return 3221225507LL;
      v7 = &SourceBuffer[BufferOffset];
      SourceBufferLength -= BufferOffset;
    }
  }
  if ( DestinationOffsets )
  {
    v12 = DestinationOffsets->BufferOffset;
    if ( DestinationOffsets->BufferOffset )
    {
      if ( v12 >= DestinationBufferLength )
        return 3221225990LL;
      DestinationBuffer += v12;
      v10 = DestinationBufferLength - v12;
    }
    BufferLength = DestinationOffsets->BufferLength;
    if ( BufferLength )
    {
      if ( BufferLength > v10 )
        return 3221225990LL;
      v10 = DestinationOffsets->BufferLength;
    }
  }
  if ( v10 > SourceBufferLength )
    return 3221225507LL;
  memmove(DestinationBuffer, v7, v10);
  return 0LL;
}
