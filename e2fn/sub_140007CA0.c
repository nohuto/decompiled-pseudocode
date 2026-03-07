__int64 __fastcall sub_140007CA0(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v4; // rbx

  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 8LL))(*a2, a1);
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  return a1;
}
