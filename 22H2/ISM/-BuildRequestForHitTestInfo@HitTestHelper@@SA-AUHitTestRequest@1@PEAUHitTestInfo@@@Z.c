/*
 * XREFs of ?BuildRequestForHitTestInfo@HitTestHelper@@SA?AUHitTestRequest@1@PEAUHitTestInfo@@@Z @ 0x180149244
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801386E0 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x18014930C (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 */

_DWORD *__fastcall HitTestHelper::BuildRequestForHitTestInfo(_DWORD *a1, unsigned int *a2)
{
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax

  memset_0(a1, 0, 0x88uLL);
  v5 = HitTestHelper::ConvertInputTypeToPointerType(*a2, v4);
  *a1 = v5;
  if ( v5 == 4 )
  {
    v6 = a2[8];
    v7 = 0;
    if ( (v6 & 0x180000) != 0 )
    {
      v7 = (((*((__int16 *)a2 + 18) >> 31) & 0xFFFFFFFE) + 3) | 4;
      if ( (v6 & 0x100000) == 0 )
        v7 = ((*((__int16 *)a2 + 18) >> 31) & 0xFFFFFFFE) + 3;
    }
    v8 = v7 | 8;
    if ( (v6 & 0x10000) == 0 )
      v8 = v7;
    v9 = v8 | 0x20;
    if ( !*((_BYTE *)a2 + 52) )
      v9 = v8;
    a1[29] = v9;
  }
  *(_QWORD *)(a1 + 1) = *(_QWORD *)(a2 + 11);
  a1[30] = a2[6];
  return a1;
}
