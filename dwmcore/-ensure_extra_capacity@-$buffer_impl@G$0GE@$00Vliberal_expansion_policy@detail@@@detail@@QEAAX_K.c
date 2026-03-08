/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800B08CC
 * Callers:
 *     ?reserve_region@?$vector_facade@GV?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAG_K0@Z @ 0x1800B2E68 (-reserve_region@-$vector_facade@GV-$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@deta.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x1800B3140 (--$uninitialized_move@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        void **a1,
        unsigned __int64 a2)
{
  _BYTE *v3; // rcx
  _BYTE *v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  LPVOID v8; // rax
  void *v9; // r8
  void *v10; // rdx
  LPVOID v11; // rbx
  void *v12; // rcx
  bool v13; // zf
  void *v14; // rcx
  _QWORD v15[4]; // [rsp+20h] [rbp-48h] BYREF
  char v16[32]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1[2];
  v4 = a1[1];
  result = (v3 - v4) >> 1;
  if ( result < a2 )
  {
    v6 = (v4 - (_BYTE *)*a1) >> 1;
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x180177C02LL);
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - (_BYTE *)*a1) >> 1),
           (v3 - (_BYTE *)*a1) >> 1,
           v6 + a2);
    v8 = operator new(saturated_mul(v7, 2uLL));
    v9 = a1[1];
    v10 = *a1;
    v15[0] = v8;
    v15[2] = 0LL;
    v11 = v8;
    v15[1] = v6;
    ((void (__fastcall *)(char *, void *, void *, _QWORD *))std::uninitialized_move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>)(
      v16,
      v10,
      v9,
      v15);
    v12 = *a1;
    v13 = *a1 == a1 + 3;
    *a1 = v11;
    if ( v13 )
      v12 = 0LL;
    operator delete(v12);
    v14 = *a1;
    a1[1] = (char *)*a1 + 2 * v6;
    result = (unsigned __int64)v14 + 2 * v7;
    a1[2] = (void *)result;
  }
  return result;
}
