/*
 * XREFs of SdbpFindNextTagWithoutIndex @ 0x140A50CA4
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x1407571D0 (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x140757EB4 (SdbFindFirstTag.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A51C90 (SdbpFindNextNamedTagHelper.c)
 */

__int64 __fastcall SdbpFindNextTagWithoutIndex(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 result; // rax

  v3 = a1;
  if ( (unsigned int)SdbFindFirstTag(a1, 0LL, 28673LL) )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  else
  {
    result = SdbpFindNextNamedTagHelper(
               v3,
               0,
               *(_DWORD *)(a2 + 4),
               *(unsigned __int16 *)(a2 + 12),
               *(wchar_t **)(a2 + 32),
               0);
    *(_DWORD *)(a2 + 4) = result;
  }
  return result;
}
