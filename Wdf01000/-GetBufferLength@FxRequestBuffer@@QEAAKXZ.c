unsigned __int64 __fastcall FxRequestBuffer::GetBufferLength(FxRequestBuffer *this)
{
  _WDFMEMORY_OFFSET *Offsets; // rdx
  _WDFMEMORY_OFFSET *v4; // rdx
  unsigned __int64 *p_BufferLength; // rcx

  if ( this->DataType == FxRequestBufferMemory )
  {
    Offsets = this->u.Memory.Offsets;
    if ( !Offsets )
      return this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
    p_BufferLength = &Offsets->BufferLength;
    if ( Offsets->BufferOffset )
    {
      if ( !*p_BufferLength )
        return (unsigned int)this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory)
             - this->u.Memory.Offsets->BufferOffset;
      return *(unsigned int *)p_BufferLength;
    }
    goto LABEL_16;
  }
  if ( this->DataType == FxRequestBufferMdl || this->DataType == FxRequestBufferBuffer )
    return this->u.Mdl.Length;
  if ( this->DataType != FxRequestBufferReferencedMdl )
    return 0LL;
  v4 = this->u.Memory.Offsets;
  if ( !v4 )
    return this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
  p_BufferLength = &v4->BufferLength;
  if ( !v4->BufferOffset )
  {
LABEL_16:
    if ( *p_BufferLength )
      return *(unsigned int *)p_BufferLength;
    return this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
  }
  if ( !*p_BufferLength )
    return (unsigned int)this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory)
         - this->u.Memory.Offsets->BufferOffset;
  return *(unsigned int *)p_BufferLength;
}
