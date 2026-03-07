unsigned __int8 __fastcall ValidateRect(const struct tagRECT *a1)
{
  if ( a1->left <= a1->right && a1->top <= a1->bottom )
    return 1;
  WdLogSingleEntry1(2LL, 2248LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid rect", 2248LL, 0LL, 0LL, 0LL, 0LL);
  return 0;
}
