bool __fastcall CInteractionContextWrapper::HasBufferedOutput(CInteractionContextWrapper *this, int a2)
{
  if ( !*((_DWORD *)this + 138) )
    return 0;
  if ( a2 )
    return CInteractionContextWrapper::FindBufferedOutputPointer(this, a2) != 0LL;
  return 1;
}
