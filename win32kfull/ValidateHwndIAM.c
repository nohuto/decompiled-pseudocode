__int64 __fastcall ValidateHwndIAM(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  struct tagTHREADINFO *v4; // rdi
  int v5; // ebx

  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
    return ValidateHwnd(a1);
  v4 = PtiCurrentShared(v2);
  v5 = *((_DWORD *)v4 + 387);
  *((_DWORD *)v4 + 387) = 0;
  result = ValidateHwnd(a1);
  *((_DWORD *)v4 + 387) = v5;
  return result;
}
