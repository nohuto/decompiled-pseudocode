__int64 __fastcall VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v12; // eax
  __int64 result; // rax

  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 56) = a6;
  *(_QWORD *)(a1 + 72) = a7;
  *(_QWORD *)(a1 + 80) = a10;
  *(_QWORD *)(a1 + 88) = a9;
  *(_QWORD *)(a1 + 112) = a12;
  *(_QWORD *)(a1 + 120) = a11;
  v12 = *(_DWORD *)(a1 + 64);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 96) = a3;
  *(_QWORD *)(a1 + 104) = a4;
  *(_DWORD *)(a1 + 128) = 1;
  *(_DWORD *)(a1 + 64) = a8 & 0xF | v12 & 0xFFFFFC00 | (16 * (a5 & 0x3F));
  if ( a8 == 6 )
    *(_QWORD *)(a1 + 88) |= 4uLL;
  result = a1;
  *(_OWORD *)(a1 + 8) = 0LL;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a1 + 40) = 0LL;
  return result;
}
