/*
 * XREFs of sub_18000FA80 @ 0x18000FA80
 * Callers:
 *     sub_18000FCBC @ 0x18000FCBC (sub_18000FCBC.c)
 *     sub_1800184CC @ 0x1800184CC (sub_1800184CC.c)
 *     sub_1800185F0 @ 0x1800185F0 (sub_1800185F0.c)
 *     sub_180018668 @ 0x180018668 (sub_180018668.c)
 *     sub_1800215B8 @ 0x1800215B8 (sub_1800215B8.c)
 *     sub_180027F34 @ 0x180027F34 (sub_180027F34.c)
 *     sub_180091250 @ 0x180091250 (sub_180091250.c)
 *     sub_1800912C8 @ 0x1800912C8 (sub_1800912C8.c)
 *     sub_18009E604 @ 0x18009E604 (sub_18009E604.c)
 *     sub_18009E694 @ 0x18009E694 (sub_18009E694.c)
 *     sub_18009E724 @ 0x18009E724 (sub_18009E724.c)
 *     sub_18009E7B4 @ 0x18009E7B4 (sub_18009E7B4.c)
 *     sub_18009EA00 @ 0x18009EA00 (sub_18009EA00.c)
 *     sub_1800A2F60 @ 0x1800A2F60 (sub_1800A2F60.c)
 *     sub_1800EEA5C @ 0x1800EEA5C (sub_1800EEA5C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18000FA80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rcx

  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 104);
    if ( !(v2 ? *(_DWORD *)(v2 + 8) : 0) )
    {
      v4 = *(volatile signed __int32 **)(a1 + 8);
      if ( v4 )
      {
        _InterlockedIncrement(v4 + 2);
        v4 = *(volatile signed __int32 **)(a1 + 8);
        if ( v4 )
          _InterlockedIncrement(v4 + 3);
      }
      v5 = *(volatile signed __int32 **)(a2 + 104);
      *(_QWORD *)(a2 + 96) = a2;
      *(_QWORD *)(a2 + 104) = v4;
      if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
  }
}
