_QWORD *__fastcall std::wstring::wstring(_QWORD *a1)
{
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 7LL;
  std::wstring::assign(a1);
  return a1;
}
