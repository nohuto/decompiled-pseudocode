__int64 __fastcall IsSysFontAndDefaultMode(HDC a1)
{
  __int64 v2; // rbx
  int v3; // ebx
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(GetDPIServerInfo((__int64)a1) + 24);
  if ( GreGetHFONT(a1) != v2 )
    return 0LL;
  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v3 = *(_DWORD *)(*(_QWORD *)(v5[0] + 976LL) + 104LL);
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  result = 1LL;
  if ( v3 != 1 )
    return 0LL;
  return result;
}
