__int64 __fastcall IvtClearPendingFaults(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // r9d
  int v3; // r11d
  int v4; // r8d
  __int64 v5; // r10
  unsigned int v6; // r11d
  __int64 v7; // rax
  __int64 result; // rax
  __int128 v9; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0;
  v3 = *(unsigned __int8 *)(a1 + 221);
  v9 = 0LL;
  v4 = *(_DWORD *)(v1 + 52);
  v5 = *(_QWORD *)(a1 + 8) + 16 * ((*(_QWORD *)(a1 + 216) >> 24) & 0x3FFLL);
  v6 = v3 + 1;
  if ( v6 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 16LL * ((v2 + BYTE1(v4)) % v6) + 8);
      *((_QWORD *)&v9 + 1) = v7;
      if ( v7 >= 0 )
        break;
      *(_QWORD *)(v5 + 16LL * ((v2 + BYTE1(v4)) % v6) + 8) = v7;
      _InterlockedOr((volatile signed __int32 *)&v9, 0);
      ++v2;
    }
    while ( v2 < v6 );
  }
  result = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(result + 52) = v4 | 1;
  _InterlockedOr((volatile signed __int32 *)&v9, 0);
  return result;
}
