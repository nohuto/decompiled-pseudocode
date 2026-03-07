__int64 __fastcall sub_14008CA20(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 result; // rax
  __int64 v13; // rax
  volatile signed __int32 *v14; // rbx
  signed __int32 v15; // eax
  bool v16; // zf
  __int64 v17; // [rsp+50h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( *(_QWORD *)(a1 + 16) && *(_QWORD *)(a1 + 24) )
  {
    v13 = sub_1400A27D4(&v17, a3);
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, __int64, __int64, int))(a1 + 24))(
               *(_QWORD *)(a1 + 16) + *(int *)(a1 + 32),
               a2,
               v13,
               a4,
               a5,
               a6,
               a7,
               a8);
  }
  v14 = *(volatile signed __int32 **)(a3 + 8);
  if ( v14 )
  {
    v15 = _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF);
    v16 = v15 == 1;
    result = (unsigned int)(v15 - 1);
    if ( v16 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      result = (unsigned int)_InterlockedDecrement(v14 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  return result;
}
