__int64 __fastcall sub_14007C500(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rsi
  const struct _GUID *v9; // rdi
  __int64 v10; // rax
  volatile signed __int32 *v11; // rdi
  CMediaType *v12; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v13; // [rsp+38h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = *(_QWORD *)(a1 + 392);
  v4 = v3;
  if ( *(_QWORD *)(a1 + 424) )
    v4 = a1 + 384;
  if ( v3 != v4 )
  {
    v6 = a1 + 56;
    do
    {
      sub_1400A27D4(&v12, v3 + 16);
      v7 = *a2;
      v8 = sub_14009E60C(v12);
      v9 = CMediaType::Subtype(v12);
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      result = (*(__int64 (__fastcall **)(__int64 *, __int64, const struct _GUID *, __int64))(v7 + 8))(a2, v10, v9, v8);
      if ( v13 )
      {
        result = (unsigned int)_InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
        {
          v11 = v13;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          result = (unsigned int)_InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF);
          if ( (_DWORD)result == 1 )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
      v3 = *(_QWORD *)(v3 + 8);
    }
    while ( v3 != v4 );
  }
  return result;
}
