/*
 * XREFs of sub_18013ED70 @ 0x18013ED70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18013ED70(__int64 a1, __int64 *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  unsigned int (__fastcall *v7)(__int64 *, __int128 *); // rax
  unsigned int (__fastcall *v8)(__int64 *, __int128 *); // rax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      *a3 = 0;
      v6 = *a2;
      v10 = xmmword_180178EA0;
      if ( (*(unsigned int (__fastcall **)(__int64 *, __int128 *))(v6 + 64))(a2, &v10)
        || (v7 = *(unsigned int (__fastcall **)(__int64 *, __int128 *))(*a2 + 64), v10 = xmmword_18015D1A0, v7(a2, &v10))
        || (v8 = *(unsigned int (__fastcall **)(__int64 *, __int128 *))(*a2 + 64), v10 = xmmword_180178E90, v8(a2, &v10)) )
      {
        *a3 = 1;
      }
    }
    else
    {
      return (unsigned int)-2147467261;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
