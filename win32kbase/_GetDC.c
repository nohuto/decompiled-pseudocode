__int64 __fastcall GetDC(__int64 a1)
{
  __int64 v1; // r8
  __int64 v3; // rcx

  if ( a1 )
  {
    v1 = 0x10000LL;
    return GetDCEx(a1, 0LL, v1);
  }
  v3 = *((_QWORD *)PtiCurrentShared() + 57);
  if ( v3 )
  {
    v1 = 3LL;
    a1 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 24LL);
    return GetDCEx(a1, 0LL, v1);
  }
  return 0LL;
}
