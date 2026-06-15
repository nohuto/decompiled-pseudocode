/*
 * XREFs of sub_180131420 @ 0x180131420
 * Callers:
 *     sub_1800751C0 @ 0x1800751C0 (sub_1800751C0.c)
 *     sub_1800751D0 @ 0x1800751D0 (sub_1800751D0.c)
 *     sub_1800751E0 @ 0x1800751E0 (sub_1800751E0.c)
 *     sub_1800751F0 @ 0x1800751F0 (sub_1800751F0.c)
 *     sub_180075200 @ 0x180075200 (sub_180075200.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180131020 @ 0x180131020 (sub_180131020.c)
 */

__int64 __fastcall sub_180131420(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 *v3; // r8
  __int64 v4; // r9
  _DWORD *v5; // r10
  int v6; // ebx
  _QWORD *v7; // r8

  *a3 = 0LL;
  if ( sub_180027D40(a2, &stru_18015B900) )
  {
    *v3 = v4;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    return 0;
  }
  else
  {
    v6 = sub_180131020(v4, v5);
    if ( v6 >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
  }
  return (unsigned int)v6;
}
