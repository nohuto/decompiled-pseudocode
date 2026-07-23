/*
 * XREFs of VerifierExAllocatePool3 @ 0x1409D4B20
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ExpPoolFlagsToPoolType @ 0x1409B4010 (ExpPoolFlagsToPoolType.c)
 *     ExAllocatePool3 @ 0x1409B4270 (ExAllocatePool3.c)
 *     VfCheckPoolType @ 0x1409C7D74 (VfCheckPoolType.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D45E0 (VeAllocatePoolWithTagPriority.c)
 */

PVOID __fastcall VerifierExAllocatePool3(__int64 a1, SIZE_T a2, ULONG a3, __int64 a4, unsigned int a5)
{
  __int64 v9; // rcx
  PVOID result; // rax
  unsigned int v11; // ebx
  POOL_TYPE v12; // ebx
  char v13; // [rsp+40h] [rbp-18h] BYREF
  _BYTE v14[3]; // [rsp+41h] [rbp-17h] BYREF
  int v15[5]; // [rsp+44h] [rbp-14h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v15[0] = 0;
  if ( (int)ExpPoolFlagsToPoolType(a1, 0, v15, v14, &v13) < 0 )
    return ExAllocatePool3(v9, a2, a3, a4, a5);
  if ( (MmVerifierData & 0x400000) != 0 && (VfRuleClasses & 0x800000000LL) == 0 && (MmVerifierData & 1) == 0 )
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(v15[0], retaddr, 0);
    v9 = a1;
    return ExAllocatePool3(v9, a2, a3, a4, a5);
  }
  v11 = v15[0] & 0xFFFFFFE7;
  VfCheckPoolType(v15[0] & 0xFFFFFFE7, retaddr, 0);
  v12 = v11 | 0x80;
  if ( XdvEnabled )
    result = (PVOID)pXdvExAllocatePool3[0](v12, a2, a3, 32, retaddr, (__int64)VeAllocatePoolWithTagPriority);
  else
    result = VeAllocatePoolWithTagPriority(v12, a2, a3, HighPoolPriority, retaddr);
  if ( !result && (a1 & 0x20) != 0 )
    RtlRaiseStatus(-1073741670);
  return result;
}
