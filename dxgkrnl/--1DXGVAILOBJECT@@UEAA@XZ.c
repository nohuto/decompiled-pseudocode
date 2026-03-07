void __fastcall DXGVAILOBJECT::~DXGVAILOBJECT(DXGVAILOBJECT *this)
{
  *(_QWORD *)this = &DXGVAILOBJECT::`vftable';
  DXGVAILOBJECT::DestroyVmBusHostSubscribers(this);
  DXGVAILOBJECT::SetVmBusChannel(this, 0LL);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGVAILOBJECT *)((char *)this + 40));
  *(_QWORD *)this = &SetElement::`vftable';
}
