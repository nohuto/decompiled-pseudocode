/*
 * XREFs of HalpInterruptFindBestRouting @ 0x1403791C4
 * Callers:
 *     HalpInterruptRemap @ 0x140378D78 (HalpInterruptRemap.c)
 *     HalpInterruptSetLineState @ 0x1403793AC (HalpInterruptSetLineState.c)
 *     HalpInterruptSetDestinationInternal @ 0x1405023EC (HalpInterruptSetDestinationInternal.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x14028EEE0 (HalpInterruptLookupController.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptFindBestRouting(int *a1, __int64 a2)
{
  ULONG_PTR *v2; // rax
  __int64 v3; // r9
  _DWORD *v4; // r10
  unsigned int v5; // ecx
  int v6; // ebx
  ULONG_PTR *v7; // rdx
  int v8; // r11d
  ULONG_PTR v9; // r8
  ULONG_PTR i; // rax
  int v12; // [rsp+4Ch] [rbp+14h]

  v12 = HIDWORD(a2);
  v2 = HalpInterruptLookupController(*a1);
  v5 = 0;
  v6 = (int)v2;
  if ( v2 )
  {
    v7 = v2 + 35;
    v8 = 0;
    v9 = v2[35];
    for ( i = v9; (ULONG_PTR *)i != v7; i = *(_QWORD *)i )
    {
      ++v8;
      if ( *(_DWORD *)(i + 16) == (_DWORD)v3 && *(_DWORD *)(i + 20) <= v12 && *(_DWORD *)(i + 24) > v12 )
        break;
    }
    if ( (ULONG_PTR *)i == v7 )
    {
      if ( v8 == 1 )
      {
        *v4 = *(_DWORD *)(v9 + 16);
        v4[1] = *(_DWORD *)(v9 + 20);
      }
      else
      {
        HalpInterruptSetProblemEx(v6, 23, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 3572);
        return (unsigned int)-1073741823;
      }
    }
    else
    {
      *(_QWORD *)v4 = v3;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
