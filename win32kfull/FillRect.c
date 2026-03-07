int __stdcall FillRect(HDC a1, LPCRECT a2, HBRUSH a3)
{
  int v4; // [rsp+20h] [rbp-38h]

  return GrePolyPatBlt(a1, v4);
}
