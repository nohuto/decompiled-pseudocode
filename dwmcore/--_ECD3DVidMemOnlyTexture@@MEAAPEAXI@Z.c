CD3DVidMemOnlyTexture *__fastcall CD3DVidMemOnlyTexture::`vector deleting destructor'(
        CD3DVidMemOnlyTexture *this,
        char a2)
{
  CD3DVidMemOnlyTexture::~CD3DVidMemOnlyTexture(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
