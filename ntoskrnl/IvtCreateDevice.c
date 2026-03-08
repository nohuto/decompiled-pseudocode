/*
 * XREFs of IvtCreateDevice @ 0x14037C4C0
 * Callers:
 *     <none>
 * Callees:
 *     IvtpGetNextInternalDeviceScope @ 0x14037C09C (IvtpGetNextInternalDeviceScope.c)
 *     HalpIvtCheckIdPathMatch @ 0x14037C118 (HalpIvtCheckIdPathMatch.c)
 *     ExtEnvAllocateMemory @ 0x14037C828 (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x14051D13C (ExtEnvFreeMemory.c)
 */

__int64 __fastcall IvtCreateDevice(__int64 a1, __int64 a2, char a3, __int64 a4, _QWORD *a5)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  char *NextInternalDeviceScope; // rax
  char *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  int Memory; // ebx
  _QWORD *v15; // r14
  __int64 v17; // rdx
  _QWORD *v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = 0LL;
  v7 = a1;
  if ( *(_DWORD *)a2 != 1 || *(_DWORD *)(a1 + 252) != *(unsigned __int16 *)(a2 + 8) )
    return (unsigned int)-1073741275;
  if ( (a3 & 1) == 0 || !*(_BYTE *)(a1 + 268) )
  {
    v8 = 0LL;
    while ( 1 )
    {
      NextInternalDeviceScope = (char *)IvtpGetNextInternalDeviceScope(a1, v8);
      v10 = NextInternalDeviceScope;
      if ( !NextInternalDeviceScope )
        return (unsigned int)-1073741275;
      if ( HalpIvtCheckIdPathMatch(a2, NextInternalDeviceScope) )
        break;
      v8 = (__int64)v10;
      a1 = v7;
    }
  }
  v11 = ExtEnvAllocateMemory(a1, 80LL, &v18);
  v13 = v18;
  Memory = v11;
  if ( v11 < 0 || (v15 = v18 + 7, Memory = ExtEnvAllocateMemory(v12, 8LL, v18 + 7), Memory < 0) )
  {
    if ( v13 )
    {
      v17 = v13[7];
      if ( v17 )
        ExtEnvFreeMemory(v12, v17);
      ExtEnvFreeMemory(v12, v13);
    }
  }
  else
  {
    *v13 = a4;
    *(_DWORD *)*v15 = *(unsigned __int16 *)(a2 + 12);
    Memory = 0;
    *(_DWORD *)(*v15 + 4LL) = *(_WORD *)(a2 + 10) & 3;
    *a5 = v13;
  }
  return (unsigned int)Memory;
}
