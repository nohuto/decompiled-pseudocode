void __fastcall MiGetExtendedStandbyPage(__int64 a1, __int16 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r11
  __int64 SpecialPurposeMemoryPartitionForCaching; // rax
  __int64 v8; // r11
  signed __int32 v9; // eax
  __int64 v10; // r11
  __int64 Page; // rax
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD **)a4;
  if ( !*(_QWORD *)a4 )
  {
    SpecialPurposeMemoryPartitionForCaching = MiGetSpecialPurposeMemoryPartitionForCaching(a1, 1LL);
    v4 = (_QWORD *)SpecialPurposeMemoryPartitionForCaching;
    if ( !SpecialPurposeMemoryPartitionForCaching )
    {
      *(_QWORD *)a4 = 1LL;
      return;
    }
    *(_QWORD *)a4 = SpecialPurposeMemoryPartitionForCaching;
  }
  if ( (unsigned __int64)v4 > 1
    && *(_QWORD *)(a4 + 8) == -1LL
    && (a2 & 0x2000) == 0
    && ((unsigned __int64)MiGetAvailablePagesBelowPriority(v4, 0) >= 0x100 || *(_QWORD *)(v8 + 17216) >= 0x4000uLL) )
  {
    v12 = 0LL;
    MiInitializePageColorBase(0LL, 0, (__int64)&v12);
    v9 = _InterlockedExchangeAdd((volatile signed __int32 *)v12, 1u);
    Page = MiGetPage(v10, HIDWORD(v12) | (unsigned int)v9 & DWORD2(v12), 0);
    if ( Page == -1 )
      *(_QWORD *)a4 = 1LL;
    *(_QWORD *)(a4 + 8) = Page;
  }
}
