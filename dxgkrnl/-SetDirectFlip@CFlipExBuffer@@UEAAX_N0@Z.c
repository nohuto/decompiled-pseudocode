void __fastcall CFlipExBuffer::SetDirectFlip(CFlipExBuffer *this, char a2, char a3)
{
  *((_BYTE *)this + 627) = a2;
  *((_BYTE *)this + 629) = a3;
}
