__int64 __fastcall HalpInterruptRestoreController(__int64 a1, char a2)
{
  int v3; // eax
  __int64 result; // rax
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  int v10; // r14d
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v3 = *(_DWORD *)(a1 + 248);
  if ( (v3 & 2) != 0 )
    return 3221225473LL;
  if ( (v3 & 1) == 0 )
    return 3221225860LL;
  v6 = (_QWORD *)(a1 + 264);
  v7 = *(_QWORD **)(a1 + 264);
  while ( v7 != v6 )
  {
    v8 = v7;
    v7 = (_QWORD *)*v7;
    v9 = v8[5];
    if ( v9 && (!a2 || ((*((_DWORD *)v8 + 8) - 3) & 0xFFFFFFFD) == 0) )
    {
      v10 = 0;
      if ( *((_DWORD *)v8 + 6) - *((_DWORD *)v8 + 5) > 0 )
      {
        v11 = 0LL;
        v12 = 0LL;
        do
        {
          if ( (*(_DWORD *)(v12 + v9 + 12) & 0x10) != 0 || *(_BYTE *)(v11 + v8[6]) )
          {
            LODWORD(v13) = *(_DWORD *)(a1 + 256);
            HIDWORD(v13) = v10 + *((_DWORD *)v8 + 5);
            result = HalpInterruptSetLineStateInternal(a1, (__int64)&v13, v8[5] + 56LL * v10);
            if ( (int)result < 0 )
              return result;
            v9 = v8[5];
          }
          ++v10;
          v12 += 56LL;
          v11 += 16LL;
        }
        while ( v10 < *((_DWORD *)v8 + 6) - *((_DWORD *)v8 + 5) );
      }
    }
  }
  return 0LL;
}
