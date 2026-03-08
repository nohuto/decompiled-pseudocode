/*
 * XREFs of ExSetHandleAttributes @ 0x140352D5C
 * Callers:
 *     ObSetHandleAttributes @ 0x1407D8910 (ObSetHandleAttributes.c)
 *     ExCreateHandleEx @ 0x1407D8ABC (ExCreateHandleEx.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetHandleAttributes(__int64 a1, unsigned int a2, char a3)
{
  int v3; // eax
  unsigned int v4; // eax

  if ( (a3 & 7) != 0 )
    *(_QWORD *)a1 = *(_QWORD *)a1 & ~((unsigned __int64)(a3 & 7) << 17) | ((unsigned __int64)(a3 & 7) << 17) & ((unsigned __int64)a2 << 17);
  if ( (a3 & 8) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 8);
    if ( (a2 & 8) != 0 )
      v4 = v3 | 0x2000000;
    else
      v4 = v3 & 0xFDFFFFFF;
    *(_DWORD *)(a1 + 8) = v4;
  }
}
