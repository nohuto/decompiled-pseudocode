/*
 * XREFs of SmpConfigureOneTimeExecute @ 0x14000AFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureOneTimeExecute(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v6; // r10
  _WORD *v7; // rax
  unsigned __int64 i; // rcx
  signed int v9; // edx
  __int64 v10; // r10

  v6 = 0LL;
  if ( a3 )
  {
    v7 = a3;
    for ( i = (unsigned __int64)a4 >> 1; i; --i )
    {
      if ( !*v7 )
        break;
      ++v7;
    }
    v9 = i == 0 ? 0xC000000D : 0;
    if ( i )
      v6 = ((unsigned __int64)a4 >> 1) - i;
    else
      v6 = 0LL;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
    v10 = 0LL;
  else
    v10 = 2 * v6;
  if ( v9 >= 0 && v10 )
    return SmpSaveRegistryValue(a6, a3, 0LL, 1LL, 0LL);
  else
    return 0LL;
}
