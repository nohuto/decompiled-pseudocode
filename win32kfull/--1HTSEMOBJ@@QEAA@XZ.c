void __fastcall HTSEMOBJ::~HTSEMOBJ(HTSEMOBJ *this)
{
  HTSEMOBJ::vRelease(this);
}
