/*
 * XREFs of SdbpFindFirstTagWithoutIndex @ 0x140A4DE80
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x1407A1A40 (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A4EEE0 (SdbpFindFirstNamedTagHelper.c)
 */

__int64 __fastcall SdbpFindFirstTagWithoutIndex(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        wchar_t *a4,
        __int64 a5)
{
  int v8; // ebp
  __int64 result; // rax

  v8 = a1;
  if ( (unsigned int)SdbFindFirstTag(a1, 0LL, 28673LL) )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  else
  {
    *(_QWORD *)(a5 + 32) = a4;
    *(_WORD *)(a5 + 12) = a3;
    result = SdbpFindFirstNamedTagHelper(v8, 0, a2, a3, a4, 0);
    *(_DWORD *)(a5 + 4) = result;
  }
  return result;
}
