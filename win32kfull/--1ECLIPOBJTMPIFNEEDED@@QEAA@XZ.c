void __fastcall ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(ECLIPOBJTMPIFNEEDED *this)
{
  REGION **v1; // rbx

  v1 = (REGION **)((char *)this + 56);
  if ( *((_DWORD *)this + 38) )
    REGION::vDeleteREGION(*v1);
  *v1 = 0LL;
}
