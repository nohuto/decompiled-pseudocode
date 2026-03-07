void __fastcall DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(void **this)
{
  operator delete(this[4]);
}
