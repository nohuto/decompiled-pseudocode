__int64 __fastcall MiMirrorOmitPagesFromCopy(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  volatile signed __int32 *v8; // rdi
  unsigned int v9; // eax
  unsigned __int64 v10; // rdx
  __int64 result; // rax
  unsigned __int64 v12; // rax
  void *v13; // r8
  unsigned __int64 v14; // rdx

  v3 = a3;
  v5 = a3;
  v6 = a2;
  v7 = a2 & 0x1F;
  v8 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 4 * (a2 >> 5));
  if ( v7 + v5 <= 0x20 )
  {
    if ( v5 == 32 )
    {
      *v8 = 0;
      goto LABEL_13;
    }
    v9 = ~(((1 << v5) - 1) << v7);
    goto LABEL_12;
  }
  if ( (a2 & 0x1F) != 0 )
  {
    _InterlockedAnd(v8, ~(((1 << (32 - (a2 & 0x1F))) - 1) << v7));
    v5 = v3 - (32 - (unsigned int)(a2 & 0x1F));
    ++v8;
  }
  if ( v5 >= 0x20 )
  {
    v10 = v5 >> 5;
    v5 += -32LL * (v5 >> 5);
    do
    {
      *v8++ = 0;
      --v10;
    }
    while ( v10 );
  }
  if ( v5 )
  {
    v9 = -1 << v5;
LABEL_12:
    _InterlockedAnd(v8, v9);
  }
LABEL_13:
  if ( *(_QWORD *)(a1 + 24) )
    RtlClearBitsEx((__int64)&xmmword_140C67B10, v6, v3);
  result = *(unsigned int *)(a1 + 32);
  if ( (result & 0x20) != 0 && v3 )
  {
    do
    {
      v12 = MiMapPageInHyperSpaceWorker(v6, 0LL, 0);
      v13 = (void *)v12;
      v14 = 1024LL;
      if ( (v12 & 4) != 0 )
      {
        *(_DWORD *)v12 = -2;
        v13 = (void *)(v12 + 4);
        v14 = 1023LL;
      }
      memset64(v13, 0xFFFFFFFEFFFFFFFEuLL, v14 >> 1);
      if ( (v14 & 1) != 0 )
        *((_DWORD *)v13 + v14 - 1) = -2;
      result = MiUnmapPageInHyperSpaceWorker(v12, 0x11u);
      ++v6;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
