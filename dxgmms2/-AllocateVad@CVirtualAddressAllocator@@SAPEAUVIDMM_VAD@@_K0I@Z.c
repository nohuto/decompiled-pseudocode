struct VIDMM_VAD *__fastcall CVirtualAddressAllocator::AllocateVad(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  int v8; // ecx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  v6 = operator new[](24 * (a3 + 4), 0x39346956u, 256LL);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 24) = a1;
    v8 = (*(_DWORD *)(v6 + 72) ^ (16 * a3)) & 0x7F0;
    *(_QWORD *)(v6 + 32) = a2;
    *(_DWORD *)(v6 + 72) ^= v8;
    if ( a3 )
    {
      v9 = (_QWORD *)(v6 + 96);
      v10 = a3;
      do
      {
        v9[1] = v9;
        *v9 = v9;
        v9[2] = 0LL;
        v9 += 3;
        --v10;
      }
      while ( v10 );
    }
    *(_QWORD *)(v7 + 88) = v7 + 80;
    *(_QWORD *)(v7 + 80) = v7 + 80;
  }
  return (struct VIDMM_VAD *)v7;
}
