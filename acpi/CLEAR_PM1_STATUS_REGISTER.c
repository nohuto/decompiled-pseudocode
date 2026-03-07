__int64 CLEAR_PM1_STATUS_REGISTER()
{
  __int64 result; // rax
  __int16 v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( (*(int (__fastcall **)(_QWORD))(PmHalDispatchTable + 120))(0LL) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
      0LL,
      0LL,
      &v1,
      2LL,
      0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
      0LL,
      0LL,
      &v1,
      2LL,
      0LL);
  }
  result = (*(__int64 (__fastcall **)(__int64))(PmHalDispatchTable + 120))(3LL);
  if ( (int)result >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
      3LL,
      0LL,
      &v1,
      2LL,
      0LL);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
             3LL,
             0LL,
             &v1,
             2LL,
             0LL);
  }
  return result;
}
