/*
 * XREFs of IoGetGenericIrpExtension @ 0x1402CAC60
 * Callers:
 *     StRtlIoStorInfoSetNvCachePriority @ 0x140674868 (StRtlIoStorInfoSetNvCachePriority.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall IoGetGenericIrpExtension(__int64 a1, void *a2, unsigned __int16 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx

  result = 3221226021LL;
  if ( a3 > 4u )
    return 3221225485LL;
  v6 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 )
  {
    v7 = a1 + 196;
LABEL_7:
    memmove(a2, (const void *)(v7 + 4), a3);
    return 0LL;
  }
  if ( v6 && (*(_BYTE *)(v6 + 2) & 4) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 200);
    goto LABEL_7;
  }
  return result;
}
