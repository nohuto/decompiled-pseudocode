/*
 * XREFs of sub_180115398 @ 0x180115398
 * Callers:
 *     sub_180071E44 @ 0x180071E44 (sub_180071E44.c)
 *     sub_1800CB9E8 @ 0x1800CB9E8 (sub_1800CB9E8.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     _o___std_exception_copy @ 0x18011DFC3 (_o___std_exception_copy.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180115398(__int64 a1, int a2, _QWORD *a3, char a4)
{
  __int64 v5; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v11; // [rsp+38h] [rbp-30h] BYREF
  char v12; // [rsp+40h] [rbp-28h]

  v5 = (__int64)a3;
  v8 = a3;
  if ( a3[3] >= 0x10uLL )
    v8 = (_QWORD *)*a3;
  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_OWORD *)(a1 + 8) = 0LL;
  v11 = v8;
  v12 = 1;
  o___std_exception_copy(&v11);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  sub_18001CDF8((_QWORD *)(a1 + 24), v5);
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = a2;
  if ( a4 )
  {
    if ( *(_QWORD *)(v5 + 24) >= 0x10uLL )
      v5 = *(_QWORD *)v5;
    v9 = 4LL;
  }
  else
  {
    if ( *(_QWORD *)(v5 + 24) >= 0x10uLL )
      v5 = *(_QWORD *)v5;
    v9 = 3LL;
  }
  sub_1801163DC(
    &unk_18020DC80,
    v9,
    "Throwing SpectreException with message '%s' and HRESULT error 0x%.8x",
    (const char *)v5,
    a2);
  return a1;
}
