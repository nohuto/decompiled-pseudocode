__int64 __fastcall sub_1400A2980(_QWORD *a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rbx
  signed __int32 v4; // eax
  bool v5; // zf

  for ( ; a1[5]; result = sub_1400A2D78(a1) )
    ;
  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = (volatile signed __int32 *)a1[3];
  if ( v3 )
  {
    v4 = _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF);
    v5 = v4 == 1;
    result = (unsigned int)(v4 - 1);
    if ( v5 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      result = (unsigned int)_InterlockedDecrement(v3 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  return result;
}
