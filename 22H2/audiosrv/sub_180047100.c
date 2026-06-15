/*
 * XREFs of sub_180047100 @ 0x180047100
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 */

__int64 __fastcall sub_180047100(__int64 a1, __int64 a2)
{
  char v3; // di
  __int64 *v4; // rax
  __int64 v5; // rdx

  v3 = a1;
  v4 = sub_180008448(a1, sub_1800B6240);
  LOBYTE(v5) = v3;
  return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v4 + 16))(v4, v5, a2);
}
