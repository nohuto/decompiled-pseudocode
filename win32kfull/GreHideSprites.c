void __fastcall GreHideSprites(__int64 a1, int a2)
{
  __int64 v4; // rbx

  Gre::Base::Globals((Gre::Base *)a1);
  v4 = 0LL;
  if ( *(_DWORD *)(a1 + 140) )
  {
    do
    {
      vSpHideSprites(*(HDEV *)(*(_QWORD *)(a1 + 144) + 8 * v4), a2);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *(_DWORD *)(a1 + 140) );
  }
  else
  {
    vSpHideSprites(*(HDEV *)(a1 + 80), a2);
  }
}
