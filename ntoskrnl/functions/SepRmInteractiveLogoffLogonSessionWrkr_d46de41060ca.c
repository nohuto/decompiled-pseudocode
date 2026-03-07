__int64 __fastcall SepRmInteractiveLogoffLogonSessionWrkr(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = *(_QWORD *)(a1 + 44);
  result = SepDeleteLogonSessionTrack(&v4, a2);
  *(_DWORD *)(v2 + 40) = result;
  return result;
}
