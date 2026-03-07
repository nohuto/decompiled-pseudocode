__int64 __fastcall RtlPopulateHpatEntry(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int16 a8,
        char a9)
{
  __int64 result; // rax

  if ( a3 )
    *a2 = a3;
  *(_QWORD *)a1 = 0xCCCCCCCCCCCCCCCCuLL;
  if ( (a9 & 8) != 0 )
  {
    *(_BYTE *)a1 = -24;
    result = (unsigned int)(a6 - 5);
    *(_DWORD *)(a1 + 1) = result + a5 - a1;
  }
  else
  {
    result = 34404LL;
    *(_WORD *)a1 = 9727;
    if ( a8 == -31132 )
    {
      *(_DWORD *)(a1 + 2) = 4090;
    }
    else
    {
      result = (unsigned int)(a4 + 4096);
      *(_DWORD *)(a1 + 2) = result;
    }
  }
  return result;
}
