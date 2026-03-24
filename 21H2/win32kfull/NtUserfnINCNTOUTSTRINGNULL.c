/*
 * XREFs of NtUserfnINCNTOUTSTRINGNULL @ 0x1C0205350
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINCNTOUTSTRINGNULL(
        __int64 a1,
        SIZE_T a2,
        SIZE_T a3,
        volatile void *a4,
        __int64 a5,
        char a6,
        int a7)
{
  unsigned int v8; // esi
  int v10; // ecx
  __int64 v11; // rbx
  __int128 v13; // [rsp+40h] [rbp-18h] BYREF

  v8 = a2;
  v13 = 0LL;
  v10 = (a7 << 31) | a3 & 0x7FFFFFFF;
  DWORD1(v13) = v10;
  v11 = 0LL;
  if ( !a7 )
  {
    v10 ^= (v10 ^ (2 * v10)) & 0x7FFFFFFF;
    DWORD1(v13) = v10;
  }
  if ( (v10 & 0x7FFFFFFFu) < 2 || (a2 = v10 & 0x7FFFFFFF, a2 < a3) )
  {
    UserSetLastError(87LL, a2, 0x7FFFFFFFLL);
  }
  else
  {
    LODWORD(v13) = 0;
    *((_QWORD *)&v13 + 1) = a4;
    ProbeForWrite(a4, a2, (v10 >> 31) + 2);
    **((_WORD **)&v13 + 1) = 0;
    return ((__int64 (__fastcall *)(__int64, _QWORD, SIZE_T, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             v8,
             a3,
             &v13,
             a5);
  }
  return v11;
}
