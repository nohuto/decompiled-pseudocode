void __fastcall XLATEMEMOBJ::~XLATEMEMOBJ(Gre::Base **this)
{
  Gre::Base *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    FreeThreadBufferWithTag(v2);
    *this = 0LL;
  }
  EXLATEOBJ::vAltUnlock(this);
}
