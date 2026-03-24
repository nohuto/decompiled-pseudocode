/*
 * XREFs of ReferenceW32Process @ 0x1C01CC720
 * Callers:
 *     ?pvFontFile@UMPDOBJ@@QEAAXPEAX0K@Z @ 0x1C02B1FE4 (-pvFontFile@UMPDOBJ@@QEAAXPEAX0K@Z.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall ReferenceW32Process(__int64 a1)
{
  LONG_PTR result; // rax

  result = ObfReferenceObject(*(PVOID *)a1);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return result;
}
