bool tlgKeywordOn()
{
  return (qword_140016010 & 0x800000000000LL) != 0 && (qword_140016018 & 0x800000000000LL) == qword_140016018;
}
