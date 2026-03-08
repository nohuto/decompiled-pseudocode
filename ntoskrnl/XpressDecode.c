/*
 * XREFs of XpressDecode @ 0x140677638
 * Callers:
 *     CMFReadCompressedSegment @ 0x1409FF980 (CMFReadCompressedSegment.c)
 * Callees:
 *     do_decode @ 0x1406777B0 (do_decode.c)
 */

__int64 __fastcall XpressDecode(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rax

  if ( !a1 || *(_DWORD *)(a1 + 104) != 903790814 )
    return 0xFFFFFFFFLL;
  if ( a6 == a3 )
    return (unsigned int)a4;
  if ( a6 > a3 || a6 < 0 || a3 <= 8 || a6 < 8 )
    return 0xFFFFFFFFLL;
  if ( a3 > 0x10000 || a4 <= 0 )
    return (unsigned int)a4;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = a2 + a3;
  *(_QWORD *)(a1 + 24) = a4 + a2;
  v8 = a5 + a6;
  *(_QWORD *)(a1 + 40) = v8;
  *(_QWORD *)(a1 + 64) = v8 - 1;
  *(_QWORD *)(a1 + 72) = v8 - 3;
  *(_QWORD *)(a1 + 80) = v8 - 1;
  *(_QWORD *)(a1 + 16) = a2;
  if ( (unsigned __int64)a4 > 0x108 )
    *(_QWORD *)(a1 + 16) = a4 + a2 - 264;
  v9 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 56) = v9;
  if ( (unsigned __int64)(v8 - v9) > 0xE8 )
    *(_QWORD *)(a1 + 56) = v8 - 232;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_QWORD *)(a1 + 48) = a5;
  do_decode(a1);
  if ( *(_DWORD *)(a1 + 96)
    && (v10 = *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32) <= v10)
    && (v10 != *(_QWORD *)a1 || *(_DWORD *)(a1 + 100)) )
  {
    return (unsigned int)a4;
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}
