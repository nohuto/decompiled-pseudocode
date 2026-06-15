/*
 * XREFs of sub_18012D1F0 @ 0x18012D1F0
 * Callers:
 *     sub_180074FA0 @ 0x180074FA0 (sub_180074FA0.c)
 *     sub_180074FB0 @ 0x180074FB0 (sub_180074FB0.c)
 * Callees:
 *     sub_18005C250 @ 0x18005C250 (sub_18005C250.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18012C888 @ 0x18012C888 (sub_18012C888.c)
 */

__int64 __fastcall sub_18012D1F0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 *v3; // r8
  __int64 v4; // r9
  _DWORD *v5; // r10
  int v6; // ebx
  _QWORD *v7; // r8

  *a3 = 0LL;
  if ( sub_18005C250(a2, &stru_18015B900) )
  {
    *v3 = v4;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    return 0;
  }
  else
  {
    v6 = sub_18012C888(v4, v5);
    if ( v6 >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
  }
  return (unsigned int)v6;
}
