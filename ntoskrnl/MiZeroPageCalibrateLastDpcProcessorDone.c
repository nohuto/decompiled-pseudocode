__int64 __fastcall MiZeroPageCalibrateLastDpcProcessorDone(__int64 a1)
{
  LARGE_INTEGER v2; // rax
  unsigned int v3; // edi
  LARGE_INTEGER v4; // r8
  LARGE_INTEGER v5; // rcx
  bool v7; // zf
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 28) )
  {
    _InterlockedOr(v8, 0);
    PerformanceFrequency.QuadPart = 0LL;
    v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( PerformanceFrequency.QuadPart != 10000000 )
      v2.QuadPart = 10000000 * v2.QuadPart / PerformanceFrequency.QuadPart;
    v3 = 1;
    v4 = *(LARGE_INTEGER *)(a1 + 16);
    v5 = v4;
    if ( v2.QuadPart >= (unsigned __int64)v4.QuadPart )
      v5 = v2;
    *(_QWORD *)(16LL * (unsigned int)(*(_DWORD *)(a1 + 128))++ + *(_QWORD *)(a1 + 56) + 8LL * *(int *)(a1 + 8)) = v5.QuadPart - v4.QuadPart;
    if ( (unsigned int)MiZeroInflectionPointReached(a1) || *(_DWORD *)(a1 + 128) == *(_DWORD *)(a1 + 32) )
    {
      v7 = *(_DWORD *)(a1 + 8) == 0;
      *(_DWORD *)(a1 + 128) = 0;
      if ( v7 )
        *(_DWORD *)(a1 + 8) = 1;
      else
        return 2;
    }
  }
  else
  {
    v3 = 1;
    *(_BYTE *)(a1 + 28) = 1;
  }
  return v3;
}
