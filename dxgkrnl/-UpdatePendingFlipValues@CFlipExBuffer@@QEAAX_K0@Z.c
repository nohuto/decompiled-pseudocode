void __fastcall CFlipExBuffer::UpdatePendingFlipValues(CFlipExBuffer *this, __int64 a2, __int64 a3)
{
  if ( a2 )
    *((_QWORD *)this + 44) = a2;
  if ( a3 )
    ++*((_DWORD *)this + 84);
}
