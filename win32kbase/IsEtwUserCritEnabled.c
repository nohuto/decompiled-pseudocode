_BOOL8 IsEtwUserCritEnabled()
{
  return dword_1C02C93D8 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL)
      || ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
      && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
      || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x200000010000000LL) != 0
      && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058;
}
