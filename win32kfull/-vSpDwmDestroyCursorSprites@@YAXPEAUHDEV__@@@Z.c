void __fastcall vSpDwmDestroyCursorSprites(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  Gre::Base *v3; // rsi
  __int64 NeighborSprite; // rbx

  v2 = Gre::Base::Globals(a1);
  v3 = *(Gre::Base **)(*((_QWORD *)v2 + 38) + 144LL);
  if ( v3 )
  {
    do
    {
      NeighborSprite = hspGetNeighborSprite(v3, 1, 0);
      GreDeleteSpriteInternal(a1, 0LL, (HSPRITE)v3, 1);
      v3 = (Gre::Base *)NeighborSprite;
    }
    while ( NeighborSprite );
  }
  *(_QWORD *)(*((_QWORD *)v2 + 38) + 136LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)v2 + 38) + 144LL) = 0LL;
  *(_DWORD *)(*((_QWORD *)v2 + 38) + 160LL) = 0;
}
