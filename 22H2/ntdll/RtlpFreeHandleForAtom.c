/*
 * XREFs of RtlpFreeHandleForAtom @ 0x180059CB0
 * Callers:
 *     RtlpFreeAllAtom @ 0x180059D50 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x18008ADC0 (RtlEmptyAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x180059990 (RtlIsValidIndexHandle.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

char __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(v3) = RtlIsValidIndexHandle(a1 + 16, *(unsigned __int16 *)(a2 + 8), &v6);
  if ( (_BYTE)v3 )
  {
    v4 = v6;
    memset(v6, 0, *(unsigned int *)(a1 + 20));
    v3 = *(_QWORD *)(a1 + 32);
    *v4 = v3;
    *(_QWORD *)(a1 + 32) = v4;
  }
  return v3;
}
