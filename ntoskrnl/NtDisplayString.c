/*
 * XREFs of NtDisplayString @ 0x1409F5C70
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     BgkDisplayStringEx @ 0x14054C9A4 (BgkDisplayStringEx.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtDisplayString(unsigned __int64 a1)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v4; // rax
  _WORD *v5; // rbx
  unsigned __int64 v6; // rcx
  _WORD *Pool2; // rax
  _WORD *v8; // rdi
  _WORD *v9; // rax
  __int64 v10; // rcx
  _WORD *v11; // rax
  char v12; // bl
  int P; // [rsp+40h] [rbp+8h]

  if ( !a1 )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( PreviousMode )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v4 = a1;
    P = *(_DWORD *)v4;
    v5 = *(_WORD **)(v4 + 8);
    if ( !v5 || !HIWORD(*(_DWORD *)v4) )
      return 0LL;
    v6 = (unsigned __int64)v5 + HIWORD(P);
    if ( v6 > 0x7FFFFFFF0000LL || v6 < (unsigned __int64)v5 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( !*v5 )
      return 0LL;
    Pool2 = (_WORD *)ExAllocatePool2(64LL, HIWORD(P) + 2LL, 1735554131LL);
    v8 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v5, HIWORD(P));
      v8[(unsigned __int64)HIWORD(P) >> 1] = 0;
      goto LABEL_24;
    }
    return 3221225495LL;
  }
  v9 = *(_WORD **)(a1 + 8);
  if ( !v9 )
    return 0LL;
  v10 = *(unsigned __int16 *)(a1 + 2);
  if ( !(_WORD)v10 || !*v9 )
    return 0LL;
  v11 = (_WORD *)ExAllocatePool2(64LL, v10 + 2, 1735554131LL);
  v8 = v11;
  if ( !v11 )
    return 3221225495LL;
  memmove(v11, *(const void **)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
  v8[(unsigned __int64)*(unsigned __int16 *)(a1 + 2) >> 1] = 0;
LABEL_24:
  v12 = BgkDisplayStringEx(v8);
  ExFreePoolWithTag(v8, 0);
  if ( !v12 )
    return 3221225473LL;
  return 0LL;
}
