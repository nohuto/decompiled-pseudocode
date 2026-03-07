void __fastcall Lockable::~Lockable(struct _KTHREAD **this)
{
  DXGFASTMUTEX *v1; // rbx

  *this = (struct _KTHREAD *)&Lockable::`vftable';
  v1 = (DXGFASTMUTEX *)(this + 3);
  if ( this[6] == KeGetCurrentThread() )
    DXGFASTMUTEX::Release(this + 3);
  DXGFASTMUTEX::~DXGFASTMUTEX(v1);
}
