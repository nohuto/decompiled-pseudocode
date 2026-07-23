/*
 * XREFs of WbProcessStartup @ 0x140621D08
 * Callers:
 *     WbDispatchOperation @ 0x140643C44 (WbDispatchOperation.c)
 * Callees:
 *     WbAlloc @ 0x140642A24 (WbAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbProcessStartup(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v5; // ebx
  unsigned __int64 v6; // rax
  int v7; // eax

  if ( a3 >= 0x10 && *a2 == 8LL )
  {
    v5 = WbAlloc(0x18uLL);
    if ( v5 >= 0 )
    {
      v6 = a2[1];
      if ( v6 + 24 > 0x7FFFFFFF0000LL || v6 + 24 < v6 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v6 = a2[1];
      }
      MEMORY[0] = *(_OWORD *)v6;
      MEMORY[0x10] = *(_QWORD *)(v6 + 16);
      if ( MEMORY[0] )
      {
        return (unsigned int)-1073741811;
      }
      else if ( *(_DWORD *)(a1 + 56) )
      {
        v7 = 60;
        if ( MEMORY[4] < 0x3Cu )
          v7 = MEMORY[4];
        *(_DWORD *)(a1 + 56) = v7;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
