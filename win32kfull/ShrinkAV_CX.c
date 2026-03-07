__int64 __fastcall ShrinkAV_CX(__int64 a1)
{
  __int64 result; // rax
  _BYTE *v2; // r8
  int v3; // ebx
  _BYTE *v4; // rdi
  unsigned __int16 *v5; // r11
  unsigned __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // r9
  unsigned int v9; // edx
  int v10; // r10d

  result = *(_QWORD *)(a1 + 304);
  v2 = *(_BYTE **)(a1 + 352);
  v3 = *(_DWORD *)a1 & 0x2000;
  v4 = *(_BYTE **)(a1 + 360);
  v5 = *(unsigned __int16 **)(result + 216);
  v6 = *(_QWORD *)(result + 224);
  v7 = *(int *)(a1 + 368);
  v8 = *(_QWORD *)(a1 + 248);
  do
  {
    LOBYTE(v9) = -1;
    if ( (unsigned __int64)v5 < v6 )
    {
      v9 = *(unsigned __int8 *)(v8 + 3);
      if ( v3 )
        v9 = ((unsigned __int8)*v2 + v9 + 1) >> 1;
      v10 = *v5;
      v8 += 4LL;
      ++v5;
      while ( --v10 )
      {
        v9 = (*(unsigned __int8 *)(v8 + 3) + (unsigned int)(unsigned __int8)v9 + 1) >> 1;
        v8 += 4LL;
      }
    }
    *v2 = v9;
    v2 += v7;
  }
  while ( v2 != v4 );
  return result;
}
