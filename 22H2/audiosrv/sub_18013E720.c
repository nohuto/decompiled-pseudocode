/*
 * XREFs of sub_18013E720 @ 0x18013E720
 * Callers:
 *     sub_180075360 @ 0x180075360 (sub_180075360.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18013E720(__int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  v4 = *a2 - 0x44A57F94D4097DF1LL;
  if ( *a2 == 0x44A57F94D4097DF1LL )
    v4 = a2[1] + 0x5542B222B9EEDD67LL;
  if ( !v4 )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return v3;
  }
  return sub_1800CA2A0(a1 + 8, a2, a3);
}
