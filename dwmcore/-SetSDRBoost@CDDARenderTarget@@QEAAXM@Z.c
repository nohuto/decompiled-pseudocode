void __fastcall CDDARenderTarget::SetSDRBoost(CDDARenderTarget *this, float a2)
{
  __int64 v3; // rcx

  if ( *((float *)this + 48) != a2 )
  {
    *((float *)this + 48) = a2;
    v3 = *((_QWORD *)this + 20);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
    *((_BYTE *)this + 141) = 1;
  }
}
