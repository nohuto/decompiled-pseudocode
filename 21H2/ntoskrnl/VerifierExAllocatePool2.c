/*
 * XREFs of VerifierExAllocatePool2 @ 0x140A90090
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExpPoolFlagsToPoolType @ 0x140A6E0A0 (ExpPoolFlagsToPoolType.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     VfCheckPoolType @ 0x140A82F58 (VfCheckPoolType.c)
 */

__int64 __fastcall VerifierExAllocatePool2(__int64 a1, ULONG_PTR a2, ULONG a3)
{
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned int v8; // ebx
  unsigned int v9[4]; // [rsp+50h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]
  char v11; // [rsp+80h] [rbp+8h] BYREF
  char v12; // [rsp+98h] [rbp+20h] BYREF

  v9[0] = 0;
  v5 = a1 & 0x20;
  if ( (int)ExpPoolFlagsToPoolType(a1, 0, (int *)v9, &v12, &v11) < 0 )
    return ExAllocatePool2(a1, a2, a3);
  if ( (VfRuleClasses & 0x40000) != 0 && ViFnAutoFailInject && (unsigned __int8)ViFnAutoFailInject("ExAllocatePool2") )
  {
    if ( !v5 )
      return 0LL;
LABEL_17:
    RtlRaiseStatus(-1073741670);
  }
  v8 = v9[0];
  if ( (v9[0] & 8) != 0 )
    v8 = v9[0] & 0xFFFFFFF7;
  if ( (v8 & 0x10) != 0 )
    v8 &= ~0x10u;
  if ( (MmVerifierData & 0x2000000) != 0 )
    VfCheckPoolType(v8, retaddr, 0);
  if ( VfExAllocPoolInternal == pXdvExAllocatePool2 || !pXdvExAllocatePool2 )
    return ExAllocatePool2(a1, a2, a3);
  result = pXdvExAllocatePool2(
             v8 | 0x80,
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
