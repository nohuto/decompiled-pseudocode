/*
 * XREFs of MiFindLargeNodePage @ 0x14061B228
 * Callers:
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A416B8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiConvertEntireLargePageToSmall @ 0x140277140 (MiConvertEntireLargePageToSmall.c)
 *     MiSetPfnOwnedAndActive @ 0x14034591C (MiSetPfnOwnedAndActive.c)
 *     MiGetPfnPageSizeIndex @ 0x14034D770 (MiGetPfnPageSizeIndex.c)
 *     MiUpdateLargePageBitMap @ 0x14034D79C (MiUpdateLargePageBitMap.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x14034DF94 (MiGetLargePagesDemoteAsNeeded.c)
 */

__int64 __fastcall MiFindLargeNodePage(__int64 a1, unsigned int a2, int *a3, int a4, int a5, char a6, unsigned int a7)
{
  unsigned __int64 v9; // r11
  unsigned int *v10; // rbx
  __int64 v11; // rbp
  int v12; // r8d
  unsigned __int64 v13; // rax
  int v14; // r14d
  __int64 LargePagesDemoteAsNeeded; // rax
  __int64 v16; // rdi
  int PfnPageSizeIndex; // eax
  unsigned __int64 v19; // r14
  __int64 v20; // rbx
  unsigned __int64 v21; // rbp
  __int64 v22; // [rsp+40h] [rbp-38h]
  unsigned __int64 v23; // [rsp+90h] [rbp+18h]

  v9 = MiLargePageSizes[*a3];
  v23 = v9;
  if ( a2 >= (unsigned __int16)KeNumberNodes )
  {
    a2 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 33364);
    v10 = (unsigned int *)(qword_140C65718 + 4LL * a2 * (unsigned __int16)KeNumberNodes);
    v11 = (__int64)&v10[(unsigned __int16)KeNumberNodes];
  }
  else
  {
    v10 = 0LL;
    v11 = 4LL;
  }
  v12 = (4 * ((a5 & 1) == 0) + 2) | 1;
  v13 = MiLargePageSizes[a4];
  if ( (a5 & 0x8000) == 0 )
    v12 = 4 * ((a5 & 1) == 0) + 2;
  v22 = MiLargePageSizes[a4];
  v14 = v12 | 0x80;
  if ( (a5 & 8) != 0 )
    v14 = v12;
  while ( 1 )
  {
    LargePagesDemoteAsNeeded = MiGetLargePagesDemoteAsNeeded(a1, a2, v9, v13, 0LL, 0, v14, a7);
    v16 = LargePagesDemoteAsNeeded;
    if ( LargePagesDemoteAsNeeded )
      break;
    if ( ++v10 == (unsigned int *)v11 )
      return 0LL;
    a2 = *v10;
    v9 = v23;
    v13 = v22;
  }
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(LargePagesDemoteAsNeeded);
  *a3 = PfnPageSizeIndex;
  v19 = MiLargePageSizes[PfnPageSizeIndex];
  MiUpdateLargePageBitMap(a1, 0xAAAAAAAAAAAAAAABuLL * ((v16 + 0x220000000000LL) >> 4), v19, 1, 1);
  MiConvertEntireLargePageToSmall(v16, *a3, 0, 1, 0LL, 0LL, 0LL);
  if ( (a5 & 0x40000000) == 0 )
  {
    v20 = *(_QWORD *)(v16 + 16);
    v21 = v19;
    do
    {
      MiSetPfnOwnedAndActive(v16, a6, -8LL, a7, ((a5 & 0x100000) != 0) + 1);
      *(_QWORD *)(v16 + 16) = v20;
      v16 += 48LL;
      --v21;
    }
    while ( v21 );
    v16 += -48LL * v19;
  }
  return v16;
}
