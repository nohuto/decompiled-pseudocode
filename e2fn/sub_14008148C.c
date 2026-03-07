__int64 __fastcall sub_14008148C(__int64 a1, __int64 a2)
{
  __int64 Pool2; // rax
  __int64 v5; // rax
  volatile signed __int32 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 result; // rax
  signed __int32 v11; // eax
  bool v12; // zf
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF

  Pool2 = ExAllocatePool2(64LL, 32LL, 808477491LL);
  if ( Pool2
    && (v5 = sub_1400B1D70(Pool2, a2), (v6 = (volatile signed __int32 *)v5) != 0LL)
    && (v7 = *(_QWORD *)(v5 + 16)) != 0 )
  {
    *((_QWORD *)&v13 + 1) = v6;
    *(_QWORD *)&v13 = v7;
  }
  else
  {
    v6 = 0LL;
    v13 = 0LL;
  }
  v8 = *(_QWORD *)(a1 + 440);
  v9 = (_QWORD *)sub_1400A27D4(v14, &v13);
  result = sub_14006FDF0(v8, v9);
  if ( v6 )
  {
    v11 = _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF);
    v12 = v11 == 1;
    result = (unsigned int)(v11 - 1);
    if ( v12 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return result;
}
