/*
 * XREFs of sub_1405D7628 @ 0x1405D7628
 * Callers:
 *     WbDecryptEncryptionSegment @ 0x1405D6EA4 (WbDecryptEncryptionSegment.c)
 * Callees:
 *     sub_1403F9834 @ 0x1403F9834 (sub_1403F9834.c)
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405D772C (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_140963F28 @ 0x140963F28 (sub_140963F28.c)
 */

__int64 __fastcall sub_1405D7628(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v6; // ebp
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // r14d
  int v10; // eax

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  if ( v1 != -1 )
  {
    v4 = v1 + 1;
    *(_QWORD *)(a1 + 64) = v4;
    if ( v4 == 1 )
    {
      if ( *(_DWORD *)(a1 + 48) == 1 )
      {
        v5 = *(_QWORD *)(a1 + 56);
      }
      else
      {
        sub_1403F9834();
        if ( *(_DWORD *)(a1 + 48) )
          return (unsigned int)-1073741811;
        v5 = *(_QWORD *)(a1 + 56);
      }
      v6 = *(_DWORD *)(v5 + 240);
      v7 = *(_DWORD *)(a1 + 72);
      if ( v7 < v6 )
      {
        v8 = *(_DWORD *)(a1 + 76);
        do
        {
          v9 = v7 >= v8;
          if ( *(_DWORD *)(a1 + 48) == 1 )
          {
            v10 = sub_140963F28(a1, v7 >= v8, 16LL * v7 + *(_QWORD *)(a1 + 56) + 248LL);
          }
          else
          {
            sub_1403F9834();
            if ( *(_DWORD *)(a1 + 48) )
              return (unsigned int)-1073741811;
            v10 = WbDecryptWarbirdEncryptionSegmentBlockV0(a1, v9, *(_QWORD *)(a1 + 56) + 4 * (3LL * v7 + 61));
          }
          v2 = v10;
          if ( v10 < 0 )
            break;
          *(_DWORD *)(a1 + 76) += v9;
          ++v7;
          ++*(_DWORD *)(a1 + 72);
          v8 = *(_DWORD *)(a1 + 76);
        }
        while ( v7 < v6 );
      }
    }
  }
  return v2;
}
