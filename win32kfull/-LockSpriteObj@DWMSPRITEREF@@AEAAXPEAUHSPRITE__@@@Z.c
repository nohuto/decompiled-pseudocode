void __fastcall DWMSPRITEREF::LockSpriteObj(DWMSPRITEREF *this, HSPRITE a2)
{
  __int64 v4; // rdx

  Gre::Base::Globals(this);
  if ( a2 )
  {
    LOBYTE(v4) = 15;
    *(_QWORD *)this = HmgLock(a2, v4);
  }
}
