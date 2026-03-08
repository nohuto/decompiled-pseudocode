/*
 * XREFs of SdbFindParentTagFromAncestors @ 0x140A4EE80
 * Callers:
 *     SdbMergeIsEntryUpdated @ 0x140A50A7C (SdbMergeIsEntryUpdated.c)
 * Callees:
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbFindParentTagFromAncestors(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 i; // rbx
  __int64 v6; // r8

  result = 0LL;
  for ( i = 0LL; i < 2; ++i )
  {
    v6 = *(unsigned __int16 *)(a2 + 2 * i);
    if ( !(_WORD)v6 )
      break;
    result = SdbFindFirstTag(a1, (unsigned int)result, v6);
    if ( !(_DWORD)result )
      break;
  }
  return result;
}
