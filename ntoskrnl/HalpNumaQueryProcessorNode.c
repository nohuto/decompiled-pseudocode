/*
 * XREFs of HalpNumaQueryProcessorNode @ 0x140377F90
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptGetIdentifiers @ 0x140379900 (HalpInterruptGetIdentifiers.c)
 */

__int64 __fastcall HalpNumaQueryProcessorNode(__int64 a1, int *a2, _WORD *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 result; // rax
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  unsigned int v10; // edx
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a2;
  v4 = 0;
  v11 = 0;
  if ( v3 == -1 )
  {
    result = HalpInterruptGetIdentifiers(a1, &v11, 0LL);
    if ( (int)result < 0 )
      return result;
    v3 = v11;
    *a2 = v11;
  }
  if ( HalpAcpiSrat )
  {
    v8 = 0;
    v9 = *(_DWORD *)(HalpNumaConfig + 60);
    if ( !v9 )
      return 3221226021LL;
    while ( *(_DWORD *)(*(_QWORD *)HalpNumaConfig + 4LL * v8) != v3 )
    {
      if ( ++v8 >= v9 )
        return 3221226021LL;
    }
    v10 = *(_DWORD *)(HalpNumaConfig + 56);
    if ( !v10 )
      return 3221226021LL;
    while ( *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 24) + 4LL * v4) != *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 16)
                                                                                  + 4LL * v8) )
    {
      if ( ++v4 >= v10 )
        return 3221226021LL;
    }
    *a3 = v4;
  }
  else
  {
    *a3 = -1;
  }
  return 0LL;
}
