__int64 __fastcall HvlQueryEnlightenmentInfo(_OWORD *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  __int128 v5; // [rsp+0h] [rbp-18h]

  if ( a2 == 16 )
  {
    DWORD1(v5) = 0;
    LOBYTE(v5) = HvlHypervisorConnected != 0;
    BYTE1(v5) = (HvlpRootFlags & 8) != 0;
    BYTE2(v5) = (HvlpFlags & 0x1000) != 0;
    BYTE3(v5) = HvlpSchedulerType;
    *((_QWORD *)&v5 + 1) = (unsigned int)HvlEnlightenments;
    result = 0LL;
    *a1 = v5;
    *a4 = 16;
  }
  else
  {
    result = 3221225712LL;
    *a4 = 0;
  }
  return result;
}
