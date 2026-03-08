/*
 * XREFs of WbProcessStartup @ 0x140798900
 * Callers:
 *     WbDispatchOperation @ 0x1406AECD0 (WbDispatchOperation.c)
 * Callees:
 *     WbAlloc @ 0x1406AF510 (WbAlloc.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbProcessStartup(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v5; // ebx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  PVOID v8; // rcx
  unsigned int v9; // ecx
  int v10; // eax
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  if ( a3 >= 0x10 && *a2 == 8LL )
  {
    v5 = WbAlloc(0x18u, &P);
    if ( v5 >= 0 )
    {
      v6 = a2[1];
      if ( v6 + 24 > 0x7FFFFFFF0000LL || v6 + 24 < v6 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v7 = a2[1];
      v8 = P;
      *(_OWORD *)P = *(_OWORD *)v7;
      *((_QWORD *)v8 + 2) = *(_QWORD *)(v7 + 16);
      if ( *(_DWORD *)v8 )
      {
        v5 = -1073741811;
      }
      else if ( *(_DWORD *)(a1 + 56) )
      {
        v9 = *((_DWORD *)v8 + 1);
        v10 = 60;
        if ( v9 < 0x3C )
          v10 = v9;
        *(_DWORD *)(a1 + 56) = v10;
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v5;
}
