__int64 __fastcall NtGdiSetVirtualResolution(HDC a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // ebp
  int v9; // ebx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  if ( a2 )
  {
    if ( !a3 )
      return v5;
    if ( !a4 )
      return v5;
    v9 = a5;
    if ( !a5 )
      return v5;
  }
  else
  {
    if ( a3 )
      return v5;
    if ( a4 )
      return v5;
    v9 = a5;
    if ( a5 )
      return v5;
  }
  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v5 = 1;
    *(_DWORD *)(*(_QWORD *)(v11[0] + 976LL) + 408LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v11[0] + 976LL) + 412LL) = a3;
    *(_DWORD *)(*(_QWORD *)(v11[0] + 976LL) + 416LL) = a4;
    *(_DWORD *)(*(_QWORD *)(v11[0] + 976LL) + 420LL) = v9;
    if ( v11[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  }
  return v5;
}
