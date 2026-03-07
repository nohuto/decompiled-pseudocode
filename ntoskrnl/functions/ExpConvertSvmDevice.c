__int64 __fastcall ExpConvertSvmDevice(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v4)(_QWORD, int *); // rax
  __int64 result; // rax
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v6 = 0;
  v4 = (__int64 (__fastcall *)(_QWORD, int *))a2[9];
  if ( !v4 )
    return 3221225659LL;
  result = v4(a2[6], &v6);
  if ( (int)result >= 0 )
  {
    if ( (v6 & 1) != 0
      && (v6 & 2) != 0
      && (v6 & 4) != 0
      && 1 << ((unsigned __int8)v6 >> 3) >= (unsigned int)ExpSvmAgents )
    {
      _InterlockedIncrement(&ExTbFlushActive);
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *, __int64 *))(HalIommuDispatch + 24))(
                 a1,
                 a2[21],
                 a2[3],
                 &v6,
                 &v7);
      if ( (int)result < 0 )
        _InterlockedDecrement(&ExTbFlushActive);
    }
    else
    {
      return 3221225711LL;
    }
  }
  return result;
}
