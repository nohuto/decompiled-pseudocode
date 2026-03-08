/*
 * XREFs of VerifierExInitializeLookasideListEx @ 0x140ADEE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x140AC08F0 (VfCheckPoolType.c)
 */

__int64 __fastcall VerifierExInitializeLookasideListEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int16 a8)
{
  __int16 v8; // bp
  __int64 result; // rax
  __int16 v14; // [rsp+38h] [rbp-40h]
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]

  v8 = 0;
  if ( (VfRuleClasses & 1) == 0 )
    v8 = a8;
  if ( (VfRuleClasses & 0x2000000) != 0 )
    VfCheckPoolType(a4, retaddr, a7);
  v14 = v8;
  result = pXdvExInitializeLookasideListEx(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             v14,
             1,
             (__int64)ExInitializeLookasideListExInternal);
  if ( (int)result >= 0
    && (VfRuleClasses & 1) != 0
    && *(PVOID (__fastcall **)(int, SIZE_T, ULONG))(a1 + 48) == ExAllocatePoolZero
    && *(void (__stdcall **)(PPRIVILEGE_SET))(a1 + 56) == CmSiFreeMemory )
  {
    *(_QWORD *)(a1 + 48) = VerifierExAllocatePoolEx;
    *(_QWORD *)(a1 + 56) = VerifierExFreePoolEx;
  }
  return result;
}
