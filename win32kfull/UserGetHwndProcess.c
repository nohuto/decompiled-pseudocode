__int64 __fastcall UserGetHwndProcess(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax

  v1 = ValidateHwnd(a1);
  if ( v1 && (v3 = *(_QWORD *)(v1 + 16)) != 0 )
    return **(_QWORD **)(v3 + 424);
  else
    return 0LL;
}
