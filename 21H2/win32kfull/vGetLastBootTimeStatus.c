/*
 * XREFs of vGetLastBootTimeStatus @ 0x1C00E5D64
 * Callers:
 *     InitFNTCache @ 0x1C00E56F0 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x1C00E5BB8 (bQueryFntCacheReg.c)
 */

__int64 vGetLastBootTimeStatus()
{
  int v0; // eax
  __int64 v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *(_DWORD *)(qword_1C033ABE8 + 12) = 0;
  v0 = bQueryFntCacheReg(ghkeyGreInitialize, L"LastBootTimeFontCacheState", &v3);
  v1 = qword_1C033ABE8;
  if ( v0 )
    *(_DWORD *)(qword_1C033ABE8 + 12) = v3;
  result = *(unsigned int *)(v1 + 12);
  *(_DWORD *)(v1 + 16) = result;
  return result;
}
