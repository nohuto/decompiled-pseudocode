/*
 * XREFs of sub_1403EBB94 @ 0x1403EBB94
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403DC948 (KiMarkBugCheckRegions.c)
 * Callees:
 *     KeKvaShadowingActive @ 0x14024D904 (KeKvaShadowingActive.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     MmIsAddressValid @ 0x140536DB0 (MmIsAddressValid.c)
 *     ExQueryBigPoolTag @ 0x1405B3D60 (ExQueryBigPoolTag.c)
 */

void __fastcall sub_1403EBB94(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // eax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  ULONG *v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  int v10; // edx
  int v11; // r9d
  int v12; // ebx
  __int64 v13; // rcx
  ULONG MaxDataSize[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( a4 == 7 && a3 == -1073741694 )
  {
    v4 = KeKvaShadowingActive();
    v5 = (unsigned __int64)KiSystemCall64Shadow;
    if ( !v4 )
      v5 = (unsigned __int64)KiSystemCall64;
    v6 = (v5 ^ *(_QWORD *)&KiMismatchSummary) & 0xFFFFFFFFFFFFF000uLL;
    IoAddTriageDumpDataBlock((v5 ^ KiMismatchSummary) & 0xFFFFF000, (PVOID)0x1000);
    _mm_lfence();
    if ( MmIsAddressValid((PVOID)v6) )
    {
      v7 = MaxDataSize;
      v8 = 4LL;
      v9 = MmPteBase + ((v6 >> 9) & 0x7FFFFFFFF8LL);
      do
      {
        *(_QWORD *)v7 = v9;
        v7 += 2;
        v9 = MmPteBase + ((v9 >> 9) & 0x7FFFFFFFF8LL);
        --v8;
      }
      while ( v8 );
      v10 = 3;
      do
      {
        v11 = v10;
        if ( (_DWORD)v8 )
        {
          *(_QWORD *)&MaxDataSize[2 * v10] = 0LL;
        }
        else
        {
          if ( !v10 )
            break;
          LODWORD(v8) = **(char **)&MaxDataSize[2 * v10] < 0;
        }
        --v10;
      }
      while ( v11 );
      v12 = 4;
      do
      {
        v13 = *(_QWORD *)&MaxDataSize[2 * (v12 - 1)];
        if ( !v13 )
          break;
        IoAddTriageDumpDataBlock(v13, (PVOID)8);
        --v12;
      }
      while ( v12 );
    }
    if ( (unsigned int)ExQueryBigPoolTag(v6, &KiSuspectPoolTag) )
      IoAddTriageDumpDataBlock((ULONG)&KiSuspectPoolTag, (PVOID)4);
  }
}
