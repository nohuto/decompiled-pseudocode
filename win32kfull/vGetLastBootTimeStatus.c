/*
 * XREFs of vGetLastBootTimeStatus @ 0x1C00B91AC
 * Callers:
 *     InitFNTCache @ 0x1C00B9300 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x1C00BAC20 (bQueryFntCacheReg.c)
 */

__int64 __fastcall vGetLastBootTimeStatus(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  *(_DWORD *)(*(_QWORD *)(v1 + 19392) + 12LL) = 0;
  if ( (unsigned int)bQueryFntCacheReg(*(HANDLE *)(v1 + 19408)) )
    *(_DWORD *)(*(_QWORD *)(v1 + 19392) + 12LL) = 0;
  v2 = *(_QWORD *)(v1 + 19392);
  result = *(unsigned int *)(v2 + 12);
  *(_DWORD *)(v2 + 16) = result;
  return result;
}
