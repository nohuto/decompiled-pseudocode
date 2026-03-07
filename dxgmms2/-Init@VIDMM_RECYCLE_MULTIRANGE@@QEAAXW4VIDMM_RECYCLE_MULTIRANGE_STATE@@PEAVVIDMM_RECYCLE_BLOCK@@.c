__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Init(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  CCHAR LeastSignificantBit; // al
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx

  WdLogSingleEntry1(4LL, a1);
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 40) = a5;
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 48) = a4;
  *(_DWORD *)(a1 + 216) = a2;
  *(_WORD *)(a1 + 128) = 0;
  ++*(_QWORD *)(a3 + 8);
  LeastSignificantBit = RtlFindLeastSignificantBit(*(_QWORD *)(a1 + 32));
  if ( LeastSignificantBit < 0 )
    result = 0LL;
  else
    result = 1LL << LeastSignificantBit;
  *(_QWORD *)(a1 + 56) = result;
  v11 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 88) = 3LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_BYTE *)(a1 + 130) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_WORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_BYTE *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 224) = 0LL;
  v12 = *(_QWORD *)(v11 + 136);
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 24) + 144LL * *(_QWORD *)(v12 + 32);
    *(_DWORD *)v13 = 0;
    *(_QWORD *)(v13 + 8) = a1;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v13 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v11 + 136) + 32LL);
    v14 = *(_QWORD *)(v11 + 136);
    result = *(_QWORD *)(v14 + 48);
    if ( *(_QWORD *)(v14 + 32) == result )
    {
      *(_QWORD *)(v14 + 32) = 0LL;
      result = *(_QWORD *)(v11 + 136);
      *(_BYTE *)(result + 40) = 1;
    }
  }
  return result;
}
