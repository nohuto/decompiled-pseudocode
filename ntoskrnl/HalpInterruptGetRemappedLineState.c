/*
 * XREFs of HalpInterruptGetRemappedLineState @ 0x14028EBCC
 * Callers:
 *     HalpInterruptSetRemappedDestination @ 0x14028EB08 (HalpInterruptSetRemappedDestination.c)
 * Callees:
 *     HalpInterruptFindControllerAndLineState @ 0x14028EDE8 (HalpInterruptFindControllerAndLineState.c)
 */

__int64 __fastcall HalpInterruptGetRemappedLineState(unsigned int *a1, _DWORD *a2, _QWORD *a3, __int64 a4)
{
  int v5; // eax
  __int64 result; // rax
  _OWORD *v7; // rcx
  _OWORD *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == 3 )
    {
      *(_OWORD *)a4 = 0LL;
      *(_OWORD *)(a4 + 16) = 0LL;
      *(_OWORD *)(a4 + 32) = 0LL;
      *(_QWORD *)(a4 + 48) = 0LL;
      *(_DWORD *)a4 = a2[3];
      v5 = a2[4];
      *(_DWORD *)(a4 + 16) = -1;
      *(_DWORD *)(a4 + 8) = v5;
      *(_DWORD *)(a4 + 12) = 16;
      *(_DWORD *)(a4 + 20) = 1;
      *(_DWORD *)(a4 + 48) = a2[1];
      *a3 = HalpInterruptController;
      return 0LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  else
  {
    result = HalpInterruptFindControllerAndLineState(*a1, a3, &v8);
    if ( (int)result >= 0 )
    {
      v7 = v8;
      *(_OWORD *)a4 = *v8;
      *(_OWORD *)(a4 + 16) = v7[1];
      *(_OWORD *)(a4 + 32) = v7[2];
      *(_QWORD *)(a4 + 48) = *((_QWORD *)v7 + 6);
      *(_DWORD *)(a4 + 12) |= 0x10u;
    }
  }
  return result;
}
