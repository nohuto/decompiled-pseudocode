/*
 * XREFs of sub_1800FA548 @ 0x1800FA548
 * Callers:
 *     sub_1800FB310 @ 0x1800FB310 (sub_1800FB310.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800FA548(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v3; // rdi
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rax
  char *v6; // rdx
  __int64 v7; // rax
  char v8; // si
  __int64 v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  char v13; // [rsp+28h] [rbp-30h] BYREF
  volatile signed __int32 *v14; // [rsp+30h] [rbp-28h]
  char v15; // [rsp+38h] [rbp-20h] BYREF
  volatile signed __int32 *v16; // [rsp+40h] [rbp-18h]

  v3 = *(volatile signed __int32 **)(a1 + 1920);
  if ( v3 )
  {
    _InterlockedIncrement(v3 + 2);
    v3 = *(volatile signed __int32 **)(a1 + 1920);
  }
  v4 = *(_QWORD *)(a1 + 1912);
  if ( v4 )
  {
    v5 = *(volatile signed __int32 **)(v4 + 144);
    if ( v5 )
    {
      _InterlockedIncrement(v5 + 2);
      v5 = *(volatile signed __int32 **)(v4 + 144);
    }
    v16 = v5;
    v6 = &v15;
    v7 = *(_QWORD *)(v4 + 136);
    v8 = 5;
  }
  else
  {
    v14 = 0LL;
    v6 = &v13;
    v7 = 0LL;
    v8 = 6;
  }
  *(_QWORD *)v6 = 0LL;
  *a2 = v7;
  v9 = *((_QWORD *)v6 + 1);
  *((_QWORD *)v6 + 1) = 0LL;
  a2[1] = v9;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        v10 = v14;
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
  }
  if ( (v8 & 1) != 0 )
  {
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        v11 = v16;
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
  }
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  return a2;
}
