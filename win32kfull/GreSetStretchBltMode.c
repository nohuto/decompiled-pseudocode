__int64 __fastcall GreSetStretchBltMode(HDC a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  char v5; // r8
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+2Ch] [rbp-Ch]

  v2 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v7, a1);
  if ( v7 )
  {
    v4 = *(_QWORD *)(v7 + 976);
    v5 = 2;
    if ( a2 <= 4 )
      v5 = a2;
    v2 = *(_DWORD *)(v4 + 232);
    *(_DWORD *)(v4 + 232) = a2;
    *(_BYTE *)(*(_QWORD *)(v7 + 976) + 215LL) = v5;
    if ( v7 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v7);
  }
  return v2;
}
