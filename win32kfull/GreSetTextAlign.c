__int64 __fastcall GreSetTextAlign(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r8
  char v6; // dl
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( v8[0] )
  {
    v4 = *(_QWORD *)(v8[0] + 976LL);
    v3 = *(_DWORD *)(v4 + 276);
    *(_DWORD *)(v4 + 276) = a2;
    v5 = *(_QWORD *)(v8[0] + 976LL);
    v6 = a2 ^ 2;
    if ( (a2 & 6) == 6 || (*(_BYTE *)(v5 + 108) & 1) == 0 )
      v6 = a2;
    *(_DWORD *)(v5 + 272) = v6 & 0x1F;
    if ( v8[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  }
  return v3;
}
