/*
 * XREFs of RtlpFreeAllAtom @ 0x180059D50
 * Callers:
 *     RtlpDereferenceAtom @ 0x1800591F8 (RtlpDereferenceAtom.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlpHashStringToAtom @ 0x1800597B0 (RtlpHashStringToAtom.c)
 *     RtlpFreeHandleForAtom @ 0x180059CB0 (RtlpFreeHandleForAtom.c)
 */

signed int __fastcall RtlpFreeAllAtom(wchar_t *a1, __int64 a2, __int64 a3)
{
  signed int result; // eax
  PVOID v5; // rdx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  BaseAddress = a1;
  result = RtlpHashStringToAtom(a2, a1 + 9, a3, &v7, 0LL, &v8, (__int64 *)&BaseAddress);
  if ( result >= 0 )
  {
    v5 = BaseAddress;
    if ( BaseAddress )
    {
      if ( v7 )
        *v7 = *(_QWORD *)BaseAddress;
      RtlpFreeHandleForAtom(a2, (__int64)v5);
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    }
  }
  return result;
}
