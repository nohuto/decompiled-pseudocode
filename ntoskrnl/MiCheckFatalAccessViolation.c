/*
 * XREFs of MiCheckFatalAccessViolation @ 0x1402FCEDC
 * Callers:
 *     MiZeroFault @ 0x140266000 (MiZeroFault.c)
 *     MiUserFault @ 0x140268260 (MiUserFault.c)
 *     MiInPagePageTable @ 0x140345FA0 (MiInPagePageTable.c)
 * Callees:
 *     MiIsStoreProcess @ 0x140229574 (MiIsStoreProcess.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckFatalAccessViolation(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  ULONG_PTR v5; // r10

  result = BugCheckParameter2 - 0x10000;
  if ( BugCheckParameter2 - 0x10000 <= 0x7FFFFFFDFFFFLL && !a2 && (a3 & 2) != 0 )
  {
    if ( (*(_DWORD *)(a4 + 2172) & 0x1000) != 0 )
      KeBugCheckEx(0x1Au, 0x4477uLL, BugCheckParameter2, 0LL, 0LL);
    result = MiIsStoreProcess(a4);
    if ( (_DWORD)result )
      KeBugCheckEx(0x1Au, 0x4478uLL, v5, 0LL, 0LL);
  }
  return result;
}
