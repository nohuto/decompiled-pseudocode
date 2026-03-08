/*
 * XREFs of HalpTranslateToLegacyMcaException @ 0x140501E70
 * Callers:
 *     HalpMcaReportError @ 0x140501778 (HalpMcaReportError.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall HalpTranslateToLegacyMcaException(__int64 a1, __int64 a2)
{
  void *result; // rax

  memset((void *)(a2 + 8), 0, 0xF8uLL);
  *(_DWORD *)a2 = 1;
  *(_DWORD *)(a2 + 4) = 1;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 16);
  *(_BYTE *)(a2 + 24) = *(_BYTE *)(a1 + 36);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 48);
  result = *(void **)(a1 + 56);
  *(_QWORD *)(a2 + 48) = result;
  if ( *(_DWORD *)(a1 + 64) )
  {
    *(_DWORD *)a2 = 2;
    *(_DWORD *)(a2 + 56) = *(_DWORD *)(a1 + 64);
    return memmove((void *)(a2 + 64), (const void *)(a1 + 72), 8LL * *(unsigned int *)(a1 + 64));
  }
  return result;
}
