__int64 __fastcall zzzHideCaret(struct tagWND *a1)
{
  __int64 result; // rax

  result = UT_CaretSet(a1);
  if ( (_DWORD)result )
  {
    zzzInternalHideCaret();
    return 1LL;
  }
  return result;
}
