/*
 * XREFs of xxxUnloadKeyboardLayout @ 0x1C01E4660
 * Callers:
 *     NtUserUnloadKeyboardLayout @ 0x1C01642C0 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     HKLtoPKL @ 0x1C003FF30 (HKLtoPKL.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C004E28C (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 */

struct tagKL *__fastcall xxxUnloadKeyboardLayout(struct tagKL **a1, __int64 a2)
{
  struct tagKL *result; // rax
  __int64 v4; // r9

  result = (struct tagKL *)HKLtoPKL((__int64)gptiCurrent, a2);
  if ( result )
    return (struct tagKL *)xxxInternalUnloadKeyboardLayout(a1, result, 0LL, v4);
  return result;
}
