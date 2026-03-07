bool __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  return !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24);
}
