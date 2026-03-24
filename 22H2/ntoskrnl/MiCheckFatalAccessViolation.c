/*
 * XREFs of MiCheckFatalAccessViolation @ 0x140318CBC
 * Callers:
 *     MiUserFault @ 0x14020D730 (MiUserFault.c)
 *     MiZeroFault @ 0x1402CF5F0 (MiZeroFault.c)
 * Callees:
 *     MiIsStoreProcess @ 0x1403334C0 (MiIsStoreProcess.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckFatalAccessViolation(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  ULONG_PTR v5; // r10

  result = BugCheckParameter2 - 0x10000;
  if ( BugCheckParameter2 - 0x10000 <= 0x7FFFFFFDFFFFLL && !a2 && (a3 & 2) != 0 )
  {
    if ( (*(_DWORD *)(a4 + 2172) & 0x1000) != 0 )
      KeBugCheckEx(0x1Au, 0x4477uLL, BugCheckParameter2, 0LL, 0LL);
    result = MiIsStoreProcess(a4, 0LL, a3, a4);
    if ( (_DWORD)result )
      KeBugCheckEx(0x1Au, 0x4478uLL, v5, 0LL, 0LL);
  }
  return result;
}
