__int64 __fastcall EtwpCovSampCaptureBufferQueue(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v7; // esi
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  v3 = a1;
  v4 = *(unsigned __int16 *)(a2 + 62);
  if ( !(_WORD)v4 )
  {
    v5 = *(_QWORD *)(a2 + 48);
    return EtwpCovSampCaptureReleaseToLookaside(a1, v5, a2);
  }
  v7 = 8 * v4;
  v8 = EtwpCovSampSampleBufferReserve(a1, (unsigned __int16)(8 * v4), &v10);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 4) ^ (*(_DWORD *)(v8 + 4) ^ (*(unsigned __int16 *)(a2 + 62) << 16)) & 0x7FFF0000;
    *(_DWORD *)(v8 + 4) = v9;
    *(_DWORD *)(v8 + 4) = (*(_DWORD *)(a2 + 56) << 29) ^ (v9 ^ (*(_DWORD *)(a2 + 56) << 29)) & 0x7FFFFFFF;
    memmove((void *)(v8 + 8), (const void *)(a2 + 64), v7);
    EtwpCovSampSampleBufferDecRef(v3, v10);
    v5 = *(_QWORD *)(a2 + 48);
    a1 = v3;
    return EtwpCovSampCaptureReleaseToLookaside(a1, v5, a2);
  }
  return EtwpCovSampCaptureQueueBuffer(v3, a2);
}
