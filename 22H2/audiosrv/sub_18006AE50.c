/*
 * XREFs of sub_18006AE50 @ 0x18006AE50
 * Callers:
 *     sub_18006AE44 @ 0x18006AE44 (sub_18006AE44.c)
 *     sub_18006B66B @ 0x18006B66B (sub_18006B66B.c)
 *     sub_18006B67D @ 0x18006B67D (sub_18006B67D.c)
 *     sub_18006B71A @ 0x18006B71A (sub_18006B71A.c)
 *     sub_18006B72C @ 0x18006B72C (sub_18006B72C.c)
 *     sub_18006B73E @ 0x18006B73E (sub_18006B73E.c)
 *     sub_18006B750 @ 0x18006B750 (sub_18006B750.c)
 *     sub_18006B762 @ 0x18006B762 (sub_18006B762.c)
 *     sub_18006B774 @ 0x18006B774 (sub_18006B774.c)
 *     sub_18006B786 @ 0x18006B786 (sub_18006B786.c)
 *     sub_18006B798 @ 0x18006B798 (sub_18006B798.c)
 *     sub_18006B7BC @ 0x18006B7BC (sub_18006B7BC.c)
 *     sub_18006B9C6 @ 0x18006B9C6 (sub_18006B9C6.c)
 *     sub_18006B9D8 @ 0x18006B9D8 (sub_18006B9D8.c)
 *     sub_18006B9EA @ 0x18006B9EA (sub_18006B9EA.c)
 *     sub_18006C62C @ 0x18006C62C (sub_18006C62C.c)
 *     sub_18006C64C @ 0x18006C64C (sub_18006C64C.c)
 *     sub_18006C66C @ 0x18006C66C (sub_18006C66C.c)
 *     sub_18006C68C @ 0x18006C68C (sub_18006C68C.c)
 *     sub_18006C6AC @ 0x18006C6AC (sub_18006C6AC.c)
 *     sub_18006C6CC @ 0x18006C6CC (sub_18006C6CC.c)
 *     sub_18006C6EC @ 0x18006C6EC (sub_18006C6EC.c)
 *     sub_18006C70C @ 0x18006C70C (sub_18006C70C.c)
 *     sub_18006C72C @ 0x18006C72C (sub_18006C72C.c)
 *     sub_18006C74C @ 0x18006C74C (sub_18006C74C.c)
 *     sub_18006C76C @ 0x18006C76C (sub_18006C76C.c)
 *     sub_18006C78C @ 0x18006C78C (sub_18006C78C.c)
 *     sub_18006C7AC @ 0x18006C7AC (sub_18006C7AC.c)
 *     sub_18006C7CC @ 0x18006C7CC (sub_18006C7CC.c)
 *     sub_18006C7EC @ 0x18006C7EC (sub_18006C7EC.c)
 *     sub_18006C80C @ 0x18006C80C (sub_18006C80C.c)
 * Callees:
 *     sub_180046570 @ 0x180046570 (sub_180046570.c)
 */

__int64 __fastcall sub_18006AE50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180046570(
                                                                     (__int64)&OLEAUT32_dll_import_table,
                                                                     v4);
  return v5(a1, a2, a3, a4);
}
