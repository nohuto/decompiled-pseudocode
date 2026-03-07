__int64 __fastcall sub_140005D70(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, __int64, _QWORD, _DWORD, _QWORD, _QWORD, _DWORD); // r15
  __int64 (__fastcall **v14)(_QWORD, _QWORD, __int64, __int64, int, _QWORD, _QWORD, int); // rdi
  __int64 v15; // rax
  volatile signed __int32 *v16; // rdi
  volatile signed __int32 *v17; // rbx
  __int64 (__fastcall ***v18)(_QWORD, _QWORD, __int64, _QWORD, _DWORD, _QWORD, _QWORD, _DWORD); // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v19; // [rsp+58h] [rbp-50h]
  _BYTE v20[72]; // [rsp+60h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(a1 + 440);
  result = *(_QWORD *)(a1 + 472);
  v11 = v8;
  v12 = a1 + 432;
  if ( result )
    v11 = v12;
  for ( ; v8 != v11; v8 = *(_QWORD *)(v8 + 8) )
  {
    result = sub_1400A27D4(&v18, v8 + 16);
    v13 = v18;
    if ( v18 )
    {
      v14 = *v18;
      v15 = sub_1400A27D4(v20, a3);
      result = (*v14)(v13, a2, v15, a4, a5, a6, a7, a8);
    }
    if ( v19 )
    {
      result = (unsigned int)_InterlockedDecrement(v19 + 2);
      if ( !(_DWORD)result )
      {
        v16 = v19;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        result = (unsigned int)_InterlockedDecrement(v16 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
  }
  v17 = *(volatile signed __int32 **)(a3 + 8);
  if ( v17 )
  {
    result = (unsigned int)_InterlockedDecrement(v17 + 2);
    if ( !(_DWORD)result )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      result = (unsigned int)_InterlockedDecrement(v17 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  return result;
}
