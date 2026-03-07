__int64 READ_PM1_ENABLE()
{
  unsigned __int16 v0; // bx
  unsigned __int16 v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v0 = 0;
  if ( (*(int (__fastcall **)(_QWORD))(PmHalDispatchTable + 120))(0LL) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, unsigned __int16 *))(PmHalDispatchTable + 128))(0LL, 2LL, &v2);
    v0 = v2;
  }
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(3LL) >= 0 )
  {
    (*(void (__fastcall **)(__int64, __int64, unsigned __int16 *))(PmHalDispatchTable + 128))(3LL, 2LL, &v2);
    v0 |= v2;
  }
  return v0;
}
