/*
 * XREFs of HalpMcaReadErrorUncorrectedAMD @ 0x140504068
 * Callers:
 *     HalpMcaReadError @ 0x1405014E0 (HalpMcaReadError.c)
 * Callees:
 *     HalpWheaWriteMsrStatus @ 0x14037D018 (HalpWheaWriteMsrStatus.c)
 */

__int64 __fastcall HalpMcaReadErrorUncorrectedAMD(__int64 *a1, _BYTE *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  result = *a1 & 0x2000100000000000LL;
  if ( result == 0x2000000000000000LL )
  {
    if ( (v2 & 0x1000000000000000LL) != 0 )
    {
      *a2 = 1;
      if ( (v2 & 0x200000000000000LL) == 0 )
      {
        if ( *((_BYTE *)a1 + 8) )
          a2[1] = 1;
      }
    }
    else
    {
      return HalpWheaWriteMsrStatus(a1[2], *((_DWORD *)a1 + 3));
    }
  }
  return result;
}
