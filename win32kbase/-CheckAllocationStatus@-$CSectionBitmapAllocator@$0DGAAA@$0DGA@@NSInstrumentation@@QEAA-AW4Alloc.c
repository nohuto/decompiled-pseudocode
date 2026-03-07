__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<221184,864>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = a1[1] ^ a1[2];
  if ( !a2 || a2 < v2 || a2 >= v2 + 221184 )
    return 0LL;
  if ( (a2 & 0xFFF) == 864 * ((a2 & 0xFFF) / 0x360) )
    return 2
         - (unsigned int)(RtlTestBit(
                            (PRTL_BITMAP)(a1[3] ^ a1[2]),
                            (a2 & 0xFFF) / 0x360
                          + 4 * (((unsigned int)a2 - ((unsigned int)a1[2] ^ *((_DWORD *)a1 + 2))) >> 12)) != 0);
  return 3LL;
}
