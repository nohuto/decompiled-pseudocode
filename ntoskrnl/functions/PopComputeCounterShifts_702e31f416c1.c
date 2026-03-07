unsigned __int64 __fastcall PopComputeCounterShifts(unsigned __int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned __int64 result; // rax
  bool v4; // zf
  int v5; // r9d

  *a2 = 0;
  *a3 = 0;
  result = HIDWORD(a1);
  v4 = !_BitScanReverse((unsigned int *)&v5, HIDWORD(a1));
  if ( !v4 )
  {
    *a2 = v5 + 18;
    result = (unsigned int)(v5 + 13);
    goto LABEL_7;
  }
  v4 = !_BitScanReverse((unsigned int *)&a1, a1);
  if ( !v4 )
  {
    if ( (unsigned int)a1 > 0xE )
    {
      result = (unsigned int)(a1 - 14);
      *a2 = result;
    }
    if ( (unsigned int)a1 > 0x13 )
    {
      result = (unsigned int)(a1 - 19);
LABEL_7:
      *a3 = result;
    }
  }
  return result;
}
