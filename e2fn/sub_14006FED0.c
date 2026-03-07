__int64 __fastcall sub_14006FED0(__int64 a1, __int64 a2)
{
  __int64 Pool2; // rax
  __int64 v5; // rax
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 result; // rax
  signed __int32 v10; // eax
  bool v11; // zf
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  Pool2 = ExAllocatePool2(64LL, 32LL, 808466533LL);
  if ( Pool2
    && (v5 = sub_1400AF5C8(Pool2, a2), (v6 = (volatile signed __int32 *)v5) != 0LL)
    && (v7 = *(_QWORD *)(v5 + 16)) != 0 )
  {
    *((_QWORD *)&v12 + 1) = v6;
    *(_QWORD *)&v12 = v7;
  }
  else
  {
    v6 = 0LL;
    v12 = 0LL;
  }
  v8 = (_QWORD *)sub_1400A27D4(v13, &v12);
  result = sub_14006FDF0(a1, v8);
  if ( v6 )
  {
    v10 = _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF);
    v11 = v10 == 1;
    result = (unsigned int)(v10 - 1);
    if ( v11 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return result;
}
