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
