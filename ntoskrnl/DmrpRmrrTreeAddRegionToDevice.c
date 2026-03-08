/*
 * XREFs of DmrpRmrrTreeAddRegionToDevice @ 0x14037C308
 * Callers:
 *     DmrEnumerateRmrrDomains @ 0x14037BD30 (DmrEnumerateRmrrDomains.c)
 * Callees:
 *     ExtEnvAllocateMemory @ 0x14037C828 (ExtEnvAllocateMemory.c)
 */

__int64 __fastcall DmrpRmrrTreeAddRegionToDevice(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rax
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 + 2;
  v5 = (_QWORD *)a1[2];
  while ( v5 != v3 )
  {
    a1 = v5;
    v5 = (_QWORD *)*v5;
    if ( a1[2] == a2 && a1[3] == a3 )
      return 0;
  }
  v7 = 0;
  v11 = 0LL;
  ExtEnvAllocateMemory(a1, 32LL, &v11);
  v8 = v11;
  if ( v11 )
  {
    v11[2] = a2;
    v8[3] = a3;
    v9 = (_QWORD *)v3[1];
    if ( (_QWORD *)*v9 != v3 )
      __fastfail(3u);
    *v8 = v3;
    v8[1] = v9;
    *v9 = v8;
    v3[1] = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
