__int64 __fastcall EtwpCovSampCaptureBufferOptimizeIP(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int v5; // ecx

  result = *(unsigned int *)(a1 + 56);
  if ( (result & 8) != 0 )
  {
    v3 = *(unsigned __int16 *)(a1 + 62);
    v4 = *(_QWORD *)(a1 + 64);
    v5 = 1;
    if ( (unsigned __int16)v3 > 1u )
    {
      while ( 1 )
      {
        result = v5;
        if ( v4 == *(_QWORD *)(a1 + 8LL * v5 + 64) )
          break;
        if ( ++v5 >= (unsigned int)v3 )
          return result;
      }
      memmove((void *)(a1 + 64), (const void *)(a1 + 72), 8 * v3 - 8);
      result = 0xFFFFLL;
      --*(_WORD *)(a1 + 62);
      *(_DWORD *)(a1 + 56) &= ~8u;
    }
  }
  return result;
}
