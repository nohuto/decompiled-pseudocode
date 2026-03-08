/*
 * XREFs of xxxActivateKeyboardLayout @ 0x1C0082330
 * Callers:
 *     NtUserActivateKeyboardLayout @ 0x1C00823E0 (NtUserActivateKeyboardLayout.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C003B460 (ThreadUnlock1.c)
 *     HKLtoPKL @ 0x1C0081F10 (HKLtoPKL.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0082990 (xxxInternalActivateKeyboardLayout.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C0213FA8 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 */

struct tagKL *__fastcall xxxActivateKeyboardLayout(
        struct tagWINDOWSTATION *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v4; // rbp
  struct tagKL *result; // rax
  struct tagKL *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  struct tagKL *v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-18h]

  v4 = gptiCurrent;
  v17 = 0LL;
  result = (struct tagKL *)HKLtoPKL((__int64)gptiCurrent, a2);
  v9 = result;
  if ( result )
  {
    if ( (a3 & 8) != 0 )
      ReorderKeyboardLayouts(a1, result);
    v15 = *((_QWORD *)v4 + 52);
    *((_QWORD *)v4 + 52) = &v15;
    v16 = v9;
    _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
    v10 = xxxInternalActivateKeyboardLayout(a1, v9, a3, a4, v15, v16, v17);
    ThreadUnlock1(v12, v11, v13, v14);
    return (struct tagKL *)v10;
  }
  return result;
}
