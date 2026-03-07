void __fastcall sub_1403ED56C(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  ULONG *v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  int v9; // edx
  int v10; // r9d
  int v11; // ebx
  __int64 v12; // rcx
  ULONG MaxDataSize[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( a4 == 7 && a3 == -1073741694 )
  {
    v4 = (unsigned __int64)KiSystemCall64Shadow;
    if ( !(unsigned int)KeKvaShadowingActive() )
      v4 = (unsigned __int64)KiSystemCall64;
    v5 = (*(_QWORD *)&KiMismatchSummary ^ v4) & 0xFFFFFFFFFFFFF000uLL;
    IoAddTriageDumpDataBlock(v5, (PVOID)0x1000);
    _mm_lfence();
    if ( MmIsAddressValid((PVOID)v5) )
    {
      v6 = MaxDataSize;
      v7 = 4LL;
      v8 = MmPteBase + ((v5 >> 9) & 0x7FFFFFFFF8LL);
      do
      {
        *(_QWORD *)v6 = v8;
        v6 += 2;
        v8 = MmPteBase + ((v8 >> 9) & 0x7FFFFFFFF8LL);
        --v7;
      }
      while ( v7 );
      v9 = 3;
      do
      {
        v10 = v9;
        if ( (_DWORD)v7 )
        {
          *(_QWORD *)&MaxDataSize[2 * v9] = 0LL;
        }
        else
        {
          if ( !v9 )
            break;
          LODWORD(v7) = **(char **)&MaxDataSize[2 * v9] < 0;
        }
        --v9;
      }
      while ( v10 );
      v11 = 4;
      do
      {
        v12 = *(_QWORD *)&MaxDataSize[2 * (v11 - 1)];
        if ( !v12 )
          break;
        IoAddTriageDumpDataBlock(v12, (PVOID)8);
        --v11;
      }
      while ( v11 );
    }
    if ( (unsigned int)ExQueryBigPoolTag(v5, &KiSuspectPoolTag) )
      IoAddTriageDumpDataBlock((ULONG)&KiSuspectPoolTag, (PVOID)4);
  }
}
