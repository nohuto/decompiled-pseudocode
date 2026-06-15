/*
 * XREFs of sub_180067B60 @ 0x180067B60
 * Callers:
 *     sub_1800752F0 @ 0x1800752F0 (sub_1800752F0.c)
 *     sub_180075300 @ 0x180075300 (sub_180075300.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CA2A0 @ 0x1800CA2A0 (sub_1800CA2A0.c)
 */

__int64 __fastcall sub_180067B60(__int64 a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rdx

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  v4 = *a2 - 0x402A552F495A7FCALL;
  if ( *a2 == 0x402A552F495A7FCALL )
    v4 = a2[1] - 0x7179A83EBF78788ELL;
  if ( !v4 )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64, _QWORD *, __int64 *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a1);
    return v3;
  }
  v6 = *a2 - 0x46CFF67A6E074D6ALL;
  if ( *a2 == 0x46CFF67A6E074D6ALL )
    v6 = a2[1] + 0x4D50C7799CC0B365LL;
  if ( !v6 )
  {
    v7 = (a1 + 8) & -(__int64)(a1 != 0);
    *a3 = v7;
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, v7, a1 + 8, a1);
    return v3;
  }
  return sub_1800CA2A0(a1 + 16, a2, a3, a1);
}
