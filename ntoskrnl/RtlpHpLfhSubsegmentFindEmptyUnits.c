/*
 * XREFs of RtlpHpLfhSubsegmentFindEmptyUnits @ 0x14030A5A0
 * Callers:
 *     RtlpHpLfhSubsegmentFree @ 0x1402EB198 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14030A210 (RtlpHpLfhSubsegmentDecommitPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentFindEmptyUnits(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // r11
  __int64 v4; // r10
  unsigned __int64 v5; // r9
  _WORD *v6; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  bool v9; // zf
  _WORD *v10; // rdx
  __int64 v11; // rdx
  _WORD *i; // rax

  v3 = a1 + *(unsigned __int16 *)(a1 + 46);
  LODWORD(v4) = a2;
  v5 = v3 + 2LL * *(unsigned __int8 *)(a1 + 45);
  v6 = (_WORD *)(v3 + 2LL * a2);
  if ( *v6 )
  {
    if ( (unsigned __int64)v6 >= v5 )
      return 0xFFFFFFFFLL;
    while ( *v6 )
    {
      if ( (unsigned __int64)++v6 >= v5 )
        return 0xFFFFFFFFLL;
    }
    v4 = ((__int64)v6 - v3) >> 1;
  }
  else
  {
    for ( i = v6 - 1; !*i; --i )
      ;
    v6 = i + 1;
  }
  v8 = (unsigned int)v4 + 1LL;
  v9 = *(_WORD *)(v3 + 2 * v8) == 0;
  v10 = (_WORD *)(v3 + 2 * v8);
  if ( v9 )
  {
    do
    {
      if ( (unsigned __int64)v10 >= v5 )
        break;
      ++v10;
    }
    while ( !*v10 );
  }
  v11 = v10 - v6;
  result = (unsigned int)(((__int64)v6 - v3) >> 1);
  *a3 = v11;
  return result;
}
