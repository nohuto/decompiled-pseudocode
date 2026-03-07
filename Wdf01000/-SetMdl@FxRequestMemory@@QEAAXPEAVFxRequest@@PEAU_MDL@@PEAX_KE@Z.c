void __fastcall FxRequestMemory::SetMdl(
        FxRequestMemory *this,
        FxRequest *Request,
        _MDL *Mdl,
        void *MdlBuffer,
        unsigned __int64 BufferSize,
        unsigned __int8 ReadOnly)
{
  this->m_BufferSize = BufferSize;
  this->m_Mdl = Mdl;
  this->m_pBuffer = MdlBuffer;
  this->m_Request = Request;
  FxRequest::AddIrpReference(Request, (__int64)Request, (unsigned __int8)Mdl);
  if ( ReadOnly )
    this->m_Flags = 1;
}
