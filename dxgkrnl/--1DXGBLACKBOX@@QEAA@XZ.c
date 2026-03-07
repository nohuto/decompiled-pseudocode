void __fastcall DXGBLACKBOX::~DXGBLACKBOX(void **this)
{
  operator delete(this[7]);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 1));
}
