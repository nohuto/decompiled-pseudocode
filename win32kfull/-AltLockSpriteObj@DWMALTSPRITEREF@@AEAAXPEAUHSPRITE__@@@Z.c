void __fastcall DWMALTSPRITEREF::AltLockSpriteObj(DWMALTSPRITEREF *this, HSPRITE a2)
{
  __int64 v4; // rdx

  Gre::Base::Globals(this);
  if ( a2 )
  {
    LOBYTE(v4) = 15;
    *(_QWORD *)this = HmgShareLockCheck(a2, v4);
  }
}
