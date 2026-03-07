__int64 *__fastcall Feedback::GetStore(__int64 *a1, __int64 a2)
{
  a1[1] = 0LL;
  *a1 = a2;
  *((_DWORD *)a1 + 2) = GetProp(a2, LOWORD(WPP_MAIN_CB.SecurityDescriptor), 1u);
  return a1;
}
