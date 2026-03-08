/*
 * XREFs of EtwpCovSampLookasideInitialize @ 0x1409EF844
 * Callers:
 *     EtwpCovSampCaptureContextStart @ 0x1409EDC1C (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     InitializeSListHead @ 0x1402A8B90 (InitializeSListHead.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall EtwpCovSampLookasideInitialize(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  __int64 result; // rax

  memset((void *)a2, 0, 0x40uLL);
  v6 = a1 + 944;
  v7 = (_QWORD *)(a2 + 16);
  v8 = *(_QWORD **)(v6 + 8);
  if ( *v8 != v6 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 24) = v8;
  *v7 = v6;
  *v8 = v7;
  *(_QWORD *)(v6 + 8) = v7;
  InitializeSListHead((PSLIST_HEADER)a2);
  *(_QWORD *)(a2 + 32) = a3;
  *(_DWORD *)(a2 + 56) = a3[15];
  ++a3[16];
  result = (unsigned int)a3[15];
  a3[17] += result;
  return result;
}
