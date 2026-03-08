/*
 * XREFs of CmpKeyFullNameLength @ 0x1407B0580
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1407AFAA0 (CmpCreateKeyControlBlock.c)
 *     CmpConstructNameFromKeyNodes @ 0x1407B0C90 (CmpConstructNameFromKeyNodes.c)
 *     CmpDoWritethroughReparse @ 0x1407B6860 (CmpDoWritethroughReparse.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140A142C8 (CmpConstructNameFromKcbNameBlocks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpKeyFullNameLength(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 *v2; // rdx
  __int64 v3; // rax
  int v4; // ecx

  v1 = 0;
  if ( a1 )
  {
    do
    {
      while ( 1 )
      {
        v2 = (__int64 *)(a1 + 72);
        if ( (*(_DWORD *)(a1 + 184) & 0x40000) == 0 || !*v2 )
          break;
        a1 = *v2;
      }
      v3 = *(_QWORD *)(a1 + 80);
      v4 = *(unsigned __int16 *)(v3 + 24);
      if ( (*(_DWORD *)v3 & 1) != 0 )
        v4 *= 2;
      v1 += v4 + 2;
      a1 = *v2;
    }
    while ( *v2 );
  }
  return v1;
}
