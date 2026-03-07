__int64 __fastcall HalpIommuDomainGetLogicalAddressRange(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 (__fastcall ***v6)(_QWORD, _QWORD *, __int64, __int64, __int64, _QWORD *); // rcx

  v6 = *(__int64 (__fastcall ****)(_QWORD, _QWORD *, __int64, __int64, __int64, _QWORD *))(a1 + 64);
  if ( v6 )
    return (**v6)(v6, a2, a3, a4, a5, a6);
  if ( !a2 )
    return 3221225659LL;
  if ( (*a2 & 0xFFFLL) != 0 )
    return 3221225712LL;
  *a6 = *a2;
  return 0LL;
}
