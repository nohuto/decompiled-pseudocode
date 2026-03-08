/*
 * XREFs of HalpValidateInterface @ 0x14085AFC8
 * Callers:
 *     HalpRegisterSecondaryIcInterface @ 0x1403AA98C (HalpRegisterSecondaryIcInterface.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpValidateInterface(__int64 a1)
{
  char v1; // r8
  int v2; // eax
  unsigned int v3; // r9d

  v1 = 0;
  if ( *(_WORD *)(a1 + 2) == 1 )
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      if ( *(_QWORD *)(a1 + 40) )
      {
        if ( *(_QWORD *)(a1 + 48) )
        {
          if ( *(_QWORD *)(a1 + 56) )
          {
            if ( *(_QWORD *)(a1 + 64) )
            {
              if ( *(_QWORD *)(a1 + 24) )
              {
                v2 = *(unsigned __int16 *)(a1 + 20);
                if ( (_WORD)v2 )
                {
                  v3 = *(_DWORD *)(a1 + 16);
                  if ( v3 >= SecondaryGsivRangeStart )
                    return v3 + v2 <= SecondaryGsivRangeSize + SecondaryGsivRangeStart;
                }
              }
            }
          }
        }
      }
    }
  }
  return v1;
}
