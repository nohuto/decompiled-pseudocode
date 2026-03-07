__int64 __fastcall sub_14005FB80(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  bool v9; // zf
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2[1];
  v3 = a1 - 376;
  a2[1] = 0LL;
  v10[1] = v2;
  v5 = *a2;
  *a2 = 0LL;
  v10[0] = v5;
  sub_140060AC8(a1 - 376, v10);
  result = sub_14005FC4C(v3);
  v7 = (volatile signed __int32 *)a2[1];
  if ( v7 )
  {
    v8 = _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
    v9 = v8 == 1;
    result = (unsigned int)(v8 - 1);
    if ( v9 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return result;
}
