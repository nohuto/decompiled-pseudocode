void __fastcall CBaseReferenceClock::~CBaseReferenceClock(CBaseReferenceClock *this)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rbx

  *(_QWORD *)this = &off_1400DA470;
  *((_QWORD *)this + 7) = off_1400DA498;
  *((_QWORD *)this + 25) = off_1400DA4C8;
  *((_QWORD *)this + 44) = &off_1400DA510;
  sub_1400A2980((char *)this + 400);
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 49);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 47);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  *((_QWORD *)this + 44) = &off_1400D47C0;
  sub_14007134C(this);
}
