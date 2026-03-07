__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<28672,112>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  int v2; // r8d
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // rdx

  v2 = a2;
  v3 = a1[1] ^ a1[2];
  if ( !a2 || a2 < v3 || a2 >= v3 + 28672 )
    return 0LL;
  v4 = a2 & 0xFFF;
  v5 = ((a2 & 0xFFF) * (unsigned __int128)0x2492492492492493uLL) >> 64;
  if ( v4 == 112 * ((v5 + (((unsigned __int64)(unsigned int)v4 - v5) >> 1)) >> 6) )
    return 2
         - (unsigned int)(RtlTestBit(
                            (PRTL_BITMAP)(a1[3] ^ a1[2]),
                            v4 / 0x70 + 36 * ((v2 - ((unsigned int)a1[2] ^ *((_DWORD *)a1 + 2))) >> 12)) != 0);
  else
    return 3LL;
}
