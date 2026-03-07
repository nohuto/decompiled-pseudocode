bool __fastcall CInteractionContextWrapper::DepartBufferedOutputPointer(
        CInteractionContextWrapper *this,
        unsigned int a2)
{
  struct CBufferedOutputPointer *BufferedOutputPointer; // rax

  BufferedOutputPointer = CInteractionContextWrapper::FindBufferedOutputPointer(this, a2);
  if ( BufferedOutputPointer )
  {
    *((_BYTE *)BufferedOutputPointer + 4) = 1;
    LOBYTE(BufferedOutputPointer) = 1;
  }
  return (char)BufferedOutputPointer;
}
