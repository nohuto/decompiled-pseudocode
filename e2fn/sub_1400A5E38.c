__int64 __fastcall sub_1400A5E38(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
    result = (unsigned int)_InterlockedExchangeAdd(a1 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return result;
}
