/*
 * XREFs of sub_180047F60 @ 0x180047F60
 * Callers:
 *     sub_180029348 @ 0x180029348 (sub_180029348.c)
 *     sub_180047E7C @ 0x180047E7C (sub_180047E7C.c)
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 *     sub_1800591C4 @ 0x1800591C4 (sub_1800591C4.c)
 *     sub_18005AC34 @ 0x18005AC34 (sub_18005AC34.c)
 *     sub_1800DFDC0 @ 0x1800DFDC0 (sub_1800DFDC0.c)
 *     sub_180116778 @ 0x180116778 (sub_180116778.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180047F60(__int64 a1)
{
  void (__fastcall ***v1)(_QWORD, void *, __int64 *); // r9
  __int64 v2; // rcx
  unsigned int v3; // ebx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v1 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 16);
  v2 = 0LL;
  v6 = 0LL;
  if ( v1 )
  {
    (**v1)(v1, &unk_18015B040, &v6);
    v2 = v6;
  }
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 88LL))(v2, &v5);
    v2 = v6;
  }
  v3 = v5;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return v3;
}
