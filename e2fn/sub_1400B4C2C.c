unsigned __int64 __fastcall sub_1400B4C2C(_QWORD *a1)
{
  volatile signed __int32 *v1; // rdi
  volatile signed __int32 *v3; // rdi
  _QWORD *v4; // rcx
  unsigned __int64 result; // rax
  volatile signed __int32 *v6; // rbx

  v1 = (volatile signed __int32 *)a1[9];
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
      if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 16LL))(v1);
    }
  }
  v3 = (volatile signed __int32 *)a1[7];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  v4 = (_QWORD *)a1[3];
  result = (unsigned __int64)off_1400D4BE0;
  a1[2] = off_1400D4BE0;
  if ( v4 )
  {
    result = (unsigned __int64)sub_1400A5BB4(v4, 3);
    a1[3] = 0LL;
  }
  a1[4] = 0LL;
  a1[5] = 0LL;
  v6 = (volatile signed __int32 *)a1[1];
  if ( v6 )
  {
    result = (unsigned int)_InterlockedDecrement(v6 + 2);
    if ( !(_DWORD)result )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return result;
}
