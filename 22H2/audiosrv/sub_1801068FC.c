/*
 * XREFs of sub_1801068FC @ 0x1801068FC
 * Callers:
 *     sub_180105D90 @ 0x180105D90 (sub_180105D90.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801068FC(__int64 a1, void (__fastcall ***a2)(_QWORD, _DWORD *, __int64 *))
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  v3 = 0LL;
  if ( a2 )
  {
    (**a2)(a2, dword_18015C150, &v3);
    return v3;
  }
  return result;
}
