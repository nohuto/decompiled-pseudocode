/*
 * XREFs of HvpEnlistFreeCells @ 0x1407A4A50
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x1407A488C (HvpRemapAndEnlistHiveBins.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407FF548 (HvpBuildMapForMemoryBackedHive.c)
 * Callees:
 *     SetFailureLocation @ 0x140243E5C (SetFailureLocation.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvpEnlistFreeCell @ 0x1407A6D78 (HvpEnlistFreeCell.c)
 *     HvpMarkDirty @ 0x1407D25D0 (HvpMarkDirty.c)
 */

__int64 __fastcall HvpEnlistFreeCells(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, int a4)
{
  char v4; // r12
  unsigned int v5; // r10d
  unsigned int v6; // edi
  __int64 v7; // rbp
  unsigned int *v10; // rsi
  unsigned int v11; // ebx
  int v13; // eax
  unsigned int v14; // r12d
  __int64 v15; // [rsp+70h] [rbp+8h]

  *(_DWORD *)(BugCheckParameter2 + 144) += 32;
  v4 = 0;
  v5 = *(_DWORD *)(a2 + 8);
  v6 = 32;
  v7 = *(_QWORD *)(BugCheckParameter2 + 56);
  v15 = v7;
  if ( v5 <= 0x20 )
    return 0LL;
  do
  {
    v10 = (unsigned int *)(a2 + v6);
    v11 = *v10;
    if ( (*v10 & 0x80000000) != 0 )
      v11 = -v11;
    if ( v11 + v6 < v6 || v11 + v6 > v5 || (v11 & 7) != 0 || !v11 )
    {
      SetFailureLocation(v7, 1, 26, -1073741492, 8);
      if ( (a4 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v7, 0, 26, -1073741492, 0);
        return 3221225804LL;
      }
      v11 = *(_DWORD *)(a2 + 8) - v6;
      v13 = HvpMarkDirty(BugCheckParameter2);
      v14 = v13;
      if ( v13 < 0 )
      {
        SetFailureLocation(v15, 0, 26, v13, 16);
        return v14;
      }
      memset((void *)(a2 + v6), 0, v11);
      *v10 = v11;
      v4 = 1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      SetFailureLocation(v15, 1, 26, 1073741833, 32);
    }
    else if ( (*v10 & 0x80000000) != 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 152) += v11;
      goto LABEL_10;
    }
    *(_DWORD *)(BugCheckParameter2 + 148) += v11;
    HvpEnlistFreeCell(BugCheckParameter2);
LABEL_10:
    v5 = *(_DWORD *)(a2 + 8);
    v6 += v11;
    v7 = v15;
  }
  while ( v6 < v5 );
  if ( !v4 )
    return 0LL;
  return 1073741833LL;
}
