__int64 __fastcall ViFreeMapRegistersToFile(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r10d
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rbx

  v3 = *(_DWORD *)(a1 + 32);
  if ( a3 )
  {
    v5 = ((a2 & 0xFFF) + (unsigned __int64)a3 + 4095) >> 12;
    if ( (unsigned int)v5 >= v3 )
      LODWORD(v5) = *(_DWORD *)(a1 + 32);
  }
  else
  {
    if ( v3 > 1 )
      v3 = 1;
    LODWORD(v5) = v3;
  }
  result = (__int64)ViFindMappedRegisterInFile(a1, a2, 0LL);
  if ( result )
  {
    if ( (_DWORD)v5 )
    {
      v7 = result + 12;
      do
      {
        if ( !*(_QWORD *)(v7 - 12) )
          break;
        ViCheckTag(*(_QWORD *)(v7 + 4) + 4096LL + (*(_DWORD *)(v7 - 12) & 0xFFF), *(_DWORD *)(v7 - 4), 1, 3);
        *(_DWORD *)v7 &= 0xFFFFFFFC;
        *(_QWORD *)(v7 - 12) = 0LL;
        *(_DWORD *)(v7 - 4) = 0;
        v7 += 32LL;
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 32));
        LODWORD(v5) = v5 - 1;
      }
      while ( (_DWORD)v5 );
    }
    return 1LL;
  }
  return result;
}
