/*
 * XREFs of sub_1800FA70C @ 0x1800FA70C
 * Callers:
 *     sub_1800FB310 @ 0x1800FB310 (sub_1800FB310.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800FA70C(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v3; // rdi
  __int64 v4; // rcx
  __int64 *v5; // rcx
  char v6; // si
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  char v11; // [rsp+28h] [rbp-40h] BYREF
  volatile signed __int32 *v12; // [rsp+30h] [rbp-38h]
  __int128 v13; // [rsp+38h] [rbp-30h]
  _BYTE v14[8]; // [rsp+48h] [rbp-20h] BYREF
  volatile signed __int32 *v15; // [rsp+50h] [rbp-18h]

  v13 = 0LL;
  v3 = *(volatile signed __int32 **)(a1 + 160);
  if ( v3 )
  {
    _InterlockedIncrement(v3 + 2);
    v3 = *(volatile signed __int32 **)(a1 + 160);
  }
  v4 = *(_QWORD *)(a1 + 152);
  *(_QWORD *)&v13 = v4;
  *((_QWORD *)&v13 + 1) = v3;
  if ( v4 )
  {
    v5 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 48LL))(v4, v14);
    v6 = 5;
    v7 = *v5;
  }
  else
  {
    v12 = 0LL;
    v5 = (__int64 *)&v11;
    v6 = 6;
    v7 = 0LL;
  }
  *a2 = v7;
  a2[1] = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v12 )
    {
      if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
      {
        v8 = v12;
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
  }
  if ( (v6 & 1) != 0 )
  {
    v9 = v15;
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
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
