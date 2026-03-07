void __fastcall HMGRTABLE::~HMGRTABLE(void **this)
{
  operator delete(*this);
}
