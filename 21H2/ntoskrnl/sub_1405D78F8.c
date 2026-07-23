/*
 * XREFs of sub_1405D78F8 @ 0x1405D78F8
 * Callers:
 *     WbReEncryptEncryptionSegment @ 0x1405D6F68 (WbReEncryptEncryptionSegment.c)
 * Callees:
 *     sub_1403F9834 @ 0x1403F9834 (sub_1403F9834.c)
 *     sub_1405D7994 @ 0x1405D7994 (sub_1405D7994.c)
 *     sub_140964118 @ 0x140964118 (sub_140964118.c)
 */

__int64 __fastcall sub_1405D78F8(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // edi
  int v6; // eax

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    v4 = v3 - 1;
    *(_QWORD *)(a1 + 64) = v4;
    if ( !v4 )
    {
      v5 = *(_DWORD *)(a1 + 72);
      while ( --v5 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 48) == 1 )
        {
          v6 = sub_140964118(a1, 16LL * v5 + *(_QWORD *)(a1 + 56) + 248LL);
        }
        else
        {
          sub_1403F9834();
          if ( *(_DWORD *)(a1 + 48) )
            return (unsigned int)-1073741811;
          v6 = sub_1405D7994(a1, *(_QWORD *)(a1 + 56) + 4 * (3LL * v5 + 61));
        }
        v2 = v6;
        if ( v6 < 0 )
          return v2;
        --*(_DWORD *)(a1 + 72);
      }
    }
  }
  return v2;
}
