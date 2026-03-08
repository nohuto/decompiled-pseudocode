/*
 * XREFs of BcdUtilGetBootOption @ 0x140840180
 * Callers:
 *     BcdUtilGetBootOptionString @ 0x14083FC4C (BcdUtilGetBootOptionString.c)
 *     BcdUtilGetBootOptionInteger @ 0x14083FC8C (BcdUtilGetBootOptionInteger.c)
 *     BcdUtilGetBootOptionBoolean @ 0x140840138 (BcdUtilGetBootOptionBoolean.c)
 *     BcdUtilGetBootOption @ 0x140840180 (BcdUtilGetBootOption.c)
 * Callees:
 *     BcdUtilGetBootOption @ 0x140840180 (BcdUtilGetBootOption.c)
 */

__int64 __fastcall BcdUtilGetBootOption(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  int v8; // ecx
  __int64 result; // rax

  if ( !a1 )
    return 0LL;
  v6 = 0;
  while ( 1 )
  {
    v7 = a1 + v6;
    if ( *(_DWORD *)v7 == a2 && !*(_BYTE *)(v7 + 20) )
      break;
    v8 = *(_DWORD *)(v7 + 12);
    if ( v8 )
    {
      result = BcdUtilGetBootOption(a1 + v6 + v8, a2, a3, a4);
      if ( result )
        return result;
    }
    v6 = *(_DWORD *)(v7 + 16);
    if ( !v6 )
      return 0LL;
  }
  return a1 + v6;
}
