__int64 __fastcall sub_14006FDF0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 result; // rax
  volatile signed __int32 *v6; // rbx
  signed __int32 v7; // eax
  bool v8; // zf

  if ( *a2 )
  {
    v4 = *(_QWORD *)(a1 + 344);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    while ( *(_QWORD *)(a1 + 400) >= *(_QWORD *)(a1 + 144) )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 232));
      if ( *(_QWORD *)(a1 + 400) )
        sub_1400A2D78(a1 + 360);
    }
    sub_1400A440C(a1 + 360, *(_QWORD *)(a1 + 368), a2);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  }
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF);
    v8 = v7 == 1;
    result = (unsigned int)(v7 - 1);
    if ( v8 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return result;
}
