__int64 __fastcall sub_140051A30(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  bool i; // zf
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rbx
  __int64 (__fastcall ***v7)(_QWORD); // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v8; // [rsp+28h] [rbp-10h]

  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 936));
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 360) + 40LL))(*(_QWORD *)(a1 + 360));
  v3 = result;
  for ( i = !_BitScanForward((unsigned int *)&v5, result); !i; i = !_BitScanForward((unsigned int *)&v5, v3) )
  {
    v3 &= ~(1 << v5);
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8 * v5 + 944));
    result = sub_1400A27D4(&v7, 16LL * (unsigned int)v5 + a1 + 424);
    if ( v7 )
      result = (**v7)(v7);
    if ( v8 )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        v6 = v8;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
        result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
  }
  return result;
}
