__int64 __fastcall NtGdiSetTextJustification(HDC a1, int a2, int a3)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v5 = v8[0];
  if ( v8[0] )
  {
    v6 = 1;
    *(_DWORD *)(*(_QWORD *)(v8[0] + 976LL) + 284LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v8[0] + 976LL) + 288LL) = a3;
    v5 = v8[0];
  }
  else
  {
    v6 = 0;
  }
  if ( v5 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  return v6;
}
