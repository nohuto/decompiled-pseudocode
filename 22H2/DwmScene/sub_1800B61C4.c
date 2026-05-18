/*
 * XREFs of sub_1800B61C4 @ 0x1800B61C4
 * Callers:
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 * Callees:
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_1800D816C @ 0x1800D816C (sub_1800D816C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800B61C4(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rcx
  volatile signed __int32 *v4; // rax
  __int64 v5; // r15
  char v6; // si
  char *v7; // rax
  volatile signed __int32 *v8; // rdi
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  void *v12; // [rsp+20h] [rbp-50h] BYREF
  char v13; // [rsp+28h] [rbp-48h] BYREF
  volatile signed __int32 *v14; // [rsp+30h] [rbp-40h]
  char v15; // [rsp+38h] [rbp-38h] BYREF
  volatile signed __int32 *v16; // [rsp+40h] [rbp-30h]
  int v17; // [rsp+48h] [rbp-28h]
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h]

  v17 = 0;
  v19 = 0LL;
  v12 = &Spectre::Engine::ImageProcessingEffectPlanarReflection `RTTI Type Descriptor';
  v18 = 0LL;
  sub_1800D816C(a1, &v18, &v12);
  v3 = (__int64 *)v18;
  if ( (__int64)(*((_QWORD *)&v18 + 1) - v18) >> 4 )
  {
    v4 = *(volatile signed __int32 **)(v18 + 8);
    if ( v4 )
    {
      _InterlockedIncrement(v4 + 2);
      v4 = (volatile signed __int32 *)v3[1];
    }
    v5 = *v3;
    v6 = 1;
    v16 = v4;
    v7 = &v15;
  }
  else
  {
    v14 = 0LL;
    v7 = &v13;
    v5 = 0LL;
    v6 = 2;
  }
  v8 = (volatile signed __int32 *)*((_QWORD *)v7 + 1);
  *((_QWORD *)v7 + 1) = 0LL;
  *(_QWORD *)v7 = 0LL;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        v9 = v14;
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
  }
  if ( (v6 & 1) != 0 )
  {
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        v10 = v16;
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v8 )
    _InterlockedIncrement(v8 + 2);
  *a2 = v5;
  a2[1] = v8;
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  sub_180012938((__int64 *)&v18);
  return a2;
}
