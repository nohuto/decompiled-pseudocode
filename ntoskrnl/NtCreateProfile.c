/*
 * XREFs of NtCreateProfile @ 0x140A01750
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryGroupAffinity @ 0x140296080 (KeQueryGroupAffinity.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExpProfileCreate @ 0x140A01038 (ExpProfileCreate.c)
 */

__int64 __fastcall NtCreateProfile(
        __int64 *a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        volatile void *a6,
        unsigned int a7,
        int a8,
        KAFFINITY a9)
{
  USHORT Group; // cx
  KAFFINITY GroupAffinity; // rax
  KAFFINITY v16; // [rsp+60h] [rbp-48h] BYREF
  __int64 v17; // [rsp+68h] [rbp-40h]

  v17 = 0LL;
  Group = KeGetCurrentPrcb()->Group;
  GroupAffinity = a9;
  LOWORD(v17) = Group;
  if ( a9 == -1LL )
    GroupAffinity = KeQueryGroupAffinity(Group);
  v16 = GroupAffinity;
  return ExpProfileCreate(a1, a2, a3, a4, a5, a6, a7, a8, 1u, (unsigned __int64)&v16, 1);
}
