/*
 * XREFs of WbReEncryptWarbirdEncryptionSegment @ 0x1407D2D44
 * Callers:
 *     WbReEncryptEncryptionSegment @ 0x1407D2464 (WbReEncryptEncryptionSegment.c)
 * Callees:
 *     sub_140764D58 @ 0x140764D58 (sub_140764D58.c)
 *     sub_140A4E01C @ 0x140A4E01C (sub_140A4E01C.c)
 */

__int64 __fastcall WbReEncryptWarbirdEncryptionSegment(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  __int64 v4; // rax
  int v5; // edi
  int v6; // eax
  int v7; // eax

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  if ( v1 )
  {
    v4 = v1 - 1;
    *(_QWORD *)(a1 + 64) = v4;
    if ( !v4 )
    {
      v5 = *(_DWORD *)(a1 + 72);
      while ( --v5 >= 0 )
      {
        v6 = *(_DWORD *)(a1 + 48);
        if ( v6 == 1 )
        {
          v7 = sub_140A4E01C(a1, 16LL * v5 + *(_QWORD *)(a1 + 56) + 248LL);
        }
        else
        {
          if ( v6 )
            return (unsigned int)-1073741811;
          v7 = sub_140764D58(a1, (unsigned int *)(*(_QWORD *)(a1 + 56) + 4 * (3LL * v5 + 61)));
        }
        v2 = v7;
        if ( v7 < 0 )
          return v2;
        --*(_DWORD *)(a1 + 72);
      }
    }
  }
  return v2;
}
