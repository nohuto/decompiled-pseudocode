void __fastcall CMILPoolResource::FinalRelease(CMILPoolResource *this)
{
  void (__fastcall ***v2)(_QWORD, CMILPoolResource *); // rcx

  v2 = (void (__fastcall ***)(_QWORD, CMILPoolResource *))*((_QWORD *)this + 3);
  if ( v2 )
    (**v2)(v2, this);
}
