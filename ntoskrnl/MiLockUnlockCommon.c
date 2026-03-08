/*
 * XREFs of MiLockUnlockCommon @ 0x1407D27F8
 * Callers:
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1403479C0 (NtUnlockVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MiLockUnlockCommon(
        ULONG_PTR BugCheckParameter1,
        void **a2,
        __int64 *a3,
        int a4,
        _QWORD *a5,
        _QWORD *a6,
        PVOID *a7)
{
  char v7; // si
  char PreviousMode; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v13; // rdi
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 result; // rax
  PVOID Object[3]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v18; // [rsp+60h] [rbp-18h]

  v7 = a4;
  Object[0] = 0LL;
  if ( (a4 & 0xFFFFFFFC) != 0 || (a4 & 3) == 0 )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v11 = 0x7FFFFFFF0000LL;
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a2;
    *(_QWORD *)v12 = *(_QWORD *)v12;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v11 = (__int64)a3;
    *(_QWORD *)v11 = *(_QWORD *)v11;
  }
  v13 = *a2;
  Object[2] = v13;
  v18 = *a3;
  v14 = v18;
  if ( !v18 )
    return 3221225485LL;
  v15 = (unsigned __int64)v13 + v18 - 1;
  if ( v15 < (unsigned __int64)v13 || v15 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             8,
             (__int64)PsProcessType,
             PreviousMode,
             0x6D566D4Du,
             Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    if ( (v7 & 2) == 0 || SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    {
      *a5 = v13;
      *a6 = v14;
      *a7 = Object[0];
      return 0LL;
    }
    else
    {
      ObfDereferenceObjectWithTag(Object[0], 0x6D566D4Du);
      return 3221225569LL;
    }
  }
  return result;
}
