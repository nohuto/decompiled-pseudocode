/*
 * XREFs of sub_18013BFA0 @ 0x18013BFA0
 * Callers:
 *     sub_1800F5B0C @ 0x1800F5B0C (sub_1800F5B0C.c)
 *     sub_1800F5F10 @ 0x1800F5F10 (sub_1800F5F10.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013C520 @ 0x18013C520 (sub_18013C520.c)
 */

__int64 __fastcall sub_18013BFA0(_DWORD *a1, __int64 a2)
{
  int v4; // ecx

  if ( a1[34] < 0x20u )
  {
    if ( !a1[35]
      || (v4 = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)a1 + 32LL))(
                 *(_QWORD *)a1,
                 ", ",
                 2LL),
          v4 >= 0) )
    {
      v4 = sub_18013C520(a1, a2);
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)a1 + 32LL))(
               *(_QWORD *)a1,
               " : {",
               4LL);
        if ( v4 >= 0 )
        {
          a1[a1[34]++ + 2] = 0;
          a1[35] = 0;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147209213;
  }
  return (unsigned int)v4;
}
