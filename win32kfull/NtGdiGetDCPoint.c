__int64 __fastcall NtGdiGetDCPoint(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int DCPoint; // r9d
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  DCPoint = GreGetDCPoint(a1, a2, &v6);
  if ( DCPoint )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_QWORD *)MmUserProbeAddress;
    *a3 = v6;
  }
  return DCPoint;
}
