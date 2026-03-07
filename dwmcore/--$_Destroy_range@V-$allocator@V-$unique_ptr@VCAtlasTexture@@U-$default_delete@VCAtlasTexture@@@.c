void __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CAtlasTexture>>>(
        CAtlasTexture **a1,
        CAtlasTexture **a2)
{
  CAtlasTexture **v3; // rbx
  CAtlasTexture *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        CAtlasTexture::~CAtlasTexture(*v3);
        operator delete(v4, 0x28uLL);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
}
