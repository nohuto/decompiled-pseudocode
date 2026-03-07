__int64 __fastcall sub_1400A5AC4(_QWORD *a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = (volatile signed __int32 *)a1[13];
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
      if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 16LL))(v1);
    }
  }
  return sub_1400A5924(a1);
}
