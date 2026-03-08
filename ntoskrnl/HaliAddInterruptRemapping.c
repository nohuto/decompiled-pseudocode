/*
 * XREFs of HaliAddInterruptRemapping @ 0x14080BD00
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptRemap @ 0x140378D78 (HalpInterruptRemap.c)
 */

__int64 __fastcall HaliAddInterruptRemapping(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        unsigned int *a5,
        unsigned int a6)
{
  _DWORD *v6; // rax
  __int64 v7; // r10

  if ( a6 )
  {
    v6 = a5 + 10;
    v7 = a6;
    do
    {
      *v6 &= ~0x40000000u;
      v6 += 22;
      --v7;
    }
    while ( v7 );
  }
  return HalpInterruptRemap(a1, a2, a3, a4, a5, a6);
}
