void __fastcall CManipulation::~CManipulation(CManipulation *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CManipulation::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 9) = &CManipulation::`vftable'{for `IManipulationResource'};
  v2 = *((_QWORD *)this + 90);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 90) = 0LL;
  }
  `vector destructor iterator'(
    (char *)this + 488,
    8LL,
    5LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<ID2D1Bitmap1>::~ComPtr<ID2D1Bitmap1>);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
