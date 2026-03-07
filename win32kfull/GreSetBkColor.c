__int64 __fastcall GreSetBkColor(HDC a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+2Ch] [rbp-Ch]

  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v3 = -1;
  XDCOBJ::vLock((XDCOBJ *)&v8, a1);
  if ( v8 )
  {
    v4 = *(_QWORD *)(v8 + 976);
    v3 = *(_DWORD *)(v4 + 180);
    *(_DWORD *)(v4 + 180) = a2;
    v5 = a2 & 0x13FFFFFF;
    v6 = v8;
    if ( v5 != v3 )
    {
      *(_DWORD *)(*(_QWORD *)(v8 + 976) + 176LL) = v5;
      *(_DWORD *)(*(_QWORD *)(v8 + 976) + 152LL) |= 0xBu;
      v6 = v8;
    }
    if ( v6 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v8);
  }
  return v3;
}
