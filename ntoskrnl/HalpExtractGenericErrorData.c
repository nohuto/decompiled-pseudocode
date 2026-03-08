/*
 * XREFs of HalpExtractGenericErrorData @ 0x1405166F4
 * Callers:
 *     HalpCheckAndReportGhes @ 0x14029AA2C (HalpCheckAndReportGhes.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

void *__fastcall HalpExtractGenericErrorData(__int64 a1)
{
  _DWORD *v1; // rdx
  __int64 v3; // rdi
  size_t v4; // r8
  void *v5; // rcx
  void *result; // rax

  v1 = *(_DWORD **)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(unsigned int *)(a1 + 48);
  v5 = (void *)(v3 + *(unsigned int *)(v3 + 64));
  *(_DWORD *)(v3 + 20) = v1[4];
  result = memmove(v5, v1, v4);
  if ( *(_DWORD *)(a1 + 96) == 12 && !*(_DWORD *)(v3 + 20) && !*(_QWORD *)(v3 + 48) )
    *(_QWORD *)(v3 + 48) = v3;
  return result;
}
