/*
 * XREFs of sub_18011A728 @ 0x18011A728
 * Callers:
 *     sub_180070EC0 @ 0x180070EC0 (sub_180070EC0.c)
 * Callees:
 *     sub_18011BFEC @ 0x18011BFEC (sub_18011BFEC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _Mtx_init_in_situ @ 0x18011F9A6 (_Mtx_init_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18011A728(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  volatile signed __int32 *v7; // rbx

  sub_18011BFEC();
  *(_QWORD *)a1 = &Spectre::Utils::JsonConfigurationManager::`vftable';
  Mtx_init_in_situ((_Mtx_t)(a1 + 64), 2);
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  v5 = operator new(0xC0uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *(_QWORD *)(a1 + 144) = v5;
  Mtx_init_in_situ((_Mtx_t)(a1 + 160), 2);
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v6 = operator new(0x68uLL);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *(_QWORD *)(a1 + 240) = v6;
  *(_DWORD *)(a1 + 256) = 0;
  v7 = *(volatile signed __int32 **)(a3 + 8);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return a1;
}
