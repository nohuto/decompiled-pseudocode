/*
 * XREFs of EtwpCovSampLookasideControlInitialize @ 0x1409EF7B0
 * Callers:
 *     EtwpCovSampCaptureContextStart @ 0x1409EDC1C (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     InitializeSListHead @ 0x1402A8B90 (InitializeSListHead.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall EtwpCovSampLookasideControlInitialize(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 result; // rax

  memset((void *)a2, 0, 0x50uLL);
  v9 = a1 + 960;
  v10 = (_QWORD *)(a2 + 16);
  v11 = *(_QWORD **)(v9 + 8);
  if ( *v11 != v9 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 24) = v11;
  *v10 = v9;
  *v11 = v10;
  *(_QWORD *)(v9 + 8) = v10;
  InitializeSListHead((PSLIST_HEADER)a2);
  *(_QWORD *)(a2 + 40) = a2 + 32;
  *(_QWORD *)(a2 + 32) = a2 + 32;
  result = a5;
  *(_QWORD *)(a2 + 48) = a3;
  *(_DWORD *)(a2 + 56) = a4;
  *(_DWORD *)(a2 + 60) = a5;
  return result;
}
