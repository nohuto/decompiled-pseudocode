/*
 * XREFs of VerifierExAllocatePool2 @ 0x140ACD9E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExpPoolFlagsToPoolType @ 0x140AAB010 (ExpPoolFlagsToPoolType.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     VfCheckPoolType @ 0x140AC08F0 (VfCheckPoolType.c)
 */

__int64 __fastcall VerifierExAllocatePool2(__int64 a1, ULONG_PTR a2, ULONG a3)
{
  __int64 v5; // rdi
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned int v10[4]; // [rsp+50h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]
  char v12; // [rsp+80h] [rbp+8h] BYREF
  char v13; // [rsp+98h] [rbp+20h] BYREF

  v10[0] = 0;
  v5 = a1 & 0x20;
  if ( (int)ExpPoolFlagsToPoolType(a1, 0, (int *)v10, &v13, &v12) < 0 )
    return ExAllocatePool2(v7, a2, a3);
  if ( (VfRuleClasses & 0x40000) != 0 && ViFnAutoFailInject && (unsigned __int8)ViFnAutoFailInject("ExAllocatePool2") )
  {
    if ( !v5 )
      return 0LL;
LABEL_17:
    RtlRaiseStatus(-1073741670);
  }
  v9 = v10[0];
  if ( (v10[0] & 8) != 0 )
    v9 = v10[0] & 0xFFFFFFF7;
  if ( (v9 & 0x10) != 0 )
    v9 &= ~0x10u;
  if ( (MmVerifierData & 0x2000000) != 0 )
    VfCheckPoolType(v9, retaddr, 0);
  if ( VfExAllocPoolInternal == pXdvExAllocatePool2 || !pXdvExAllocatePool2 )
  {
    v7 = a1;
    return ExAllocatePool2(v7, a2, a3);
  }
  result = pXdvExAllocatePool2(
             v9 | 0x80,
             0LL,
             a2,
             a3,
             32,
             0LL,
             0,
             retaddr,
             (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))VfHandlePoolAlloc);
  if ( !result && v5 )
    goto LABEL_17;
  return result;
}
