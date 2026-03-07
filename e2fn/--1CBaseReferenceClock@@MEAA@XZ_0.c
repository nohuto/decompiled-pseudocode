void __fastcall CBaseReferenceClock::~CBaseReferenceClock(CBaseReferenceClock *this)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx

  *(_QWORD *)this = &off_1400D7F40;
  *((_QWORD *)this + 7) = off_1400D7F70;
  *((_QWORD *)this + 25) = off_1400D7FA0;
  *((_QWORD *)this + 47) = off_1400D7FE8;
  sub_1400A2980((char *)this + 440);
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 54);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 52);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 50);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  *((_QWORD *)this + 47) = &off_1400D47C0;
  *(_QWORD *)this = &off_1400D7DD8;
  *((_QWORD *)this + 7) = off_1400D7E08;
  *((_QWORD *)this + 25) = off_1400D7E38;
  sub_14007134C(this);
}
