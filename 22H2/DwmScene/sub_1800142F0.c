/*
 * XREFs of sub_1800142F0 @ 0x1800142F0
 * Callers:
 *     sub_1800153B0 @ 0x1800153B0 (sub_1800153B0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800139A8 @ 0x1800139A8 (sub_1800139A8.c)
 *     sub_180013BE8 @ 0x180013BE8 (sub_180013BE8.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800142F0(__int64 a1)
{
  __int64 v1; // rax
  volatile signed __int32 *v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbx
  __int64 result; // rax
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rbx
  __int128 v11; // [rsp+28h] [rbp-19h]
  __int128 v12; // [rsp+38h] [rbp-9h] BYREF
  __int128 v13; // [rsp+48h] [rbp+7h]
  _QWORD v14[2]; // [rsp+58h] [rbp+17h] BYREF
  __int64 v15; // [rsp+68h] [rbp+27h] BYREF
  volatile signed __int32 *v16; // [rsp+70h] [rbp+2Fh]
  __int128 v17; // [rsp+80h] [rbp+3Fh] BYREF

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  v13 = 0LL;
  v2 = *(volatile signed __int32 **)(v1 + 40);
  if ( v2 )
  {
    _InterlockedIncrement(v2 + 2);
    v2 = *(volatile signed __int32 **)(v1 + 40);
  }
  v3 = *(_QWORD *)(v1 + 32);
  *(_QWORD *)&v13 = v3;
  *((_QWORD *)&v13 + 1) = v2;
  v17 = 0LL;
  v11 = 0LL;
  v4 = *(_QWORD *)(v3 + 80);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
      {
        v11 = *(_OWORD *)(v3 + 72);
        break;
      }
    }
  }
  sub_1800615B4(v11 + 16, &v17);
  if ( *((_QWORD *)&v11 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  v12 = 0LL;
  sub_180013BE8(v13, &v12);
  v6 = qword_180218700;
  v7 = *(volatile signed __int32 **)(qword_180218700 + 104);
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = *(volatile signed __int32 **)(v6 + 104);
  }
  v14[0] = *(_QWORD *)(v6 + 96);
  v14[1] = v7;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v12 + 88), v14);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  result = (__int64)sub_1800139A8(v13, &v15);
  if ( v16 )
  {
    result = (unsigned int)_InterlockedDecrement(v16 + 2);
    if ( !(_DWORD)result )
    {
      v9 = v16;
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      result = (unsigned int)_InterlockedDecrement(v9 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  if ( *((_QWORD *)&v12 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v10 = *((_QWORD *)&v12 + 1);
      (***((void (__fastcall ****)(_QWORD))&v12 + 1))(*((_QWORD *)&v12 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v12 + 1) + 8LL))(*((_QWORD *)&v12 + 1));
    }
  }
  if ( BYTE8(v17) )
    result = sub_180061A34(v17);
  if ( v2 )
  {
    result = (unsigned int)_InterlockedDecrement(v2 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      result = (unsigned int)_InterlockedDecrement(v2 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  return result;
}
