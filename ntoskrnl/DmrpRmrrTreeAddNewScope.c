/*
 * XREFs of DmrpRmrrTreeAddNewScope @ 0x14037C268
 * Callers:
 *     DmrEnumerateRmrrDomains @ 0x14037BD30 (DmrEnumerateRmrrDomains.c)
 * Callees:
 *     ExtEnvAllocateMemory @ 0x14037C828 (ExtEnvAllocateMemory.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall DmrpRmrrTreeAddNewScope(__int64 a1, __int16 a2, unsigned __int8 *a3)
{
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  ExtEnvAllocateMemory(a1, (unsigned int)a3[1] + 34, &v9);
  v6 = v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 24) = v9 + 16;
    *(_QWORD *)(v6 + 16) = v6 + 16;
    memmove((void *)(v6 + 34), a3, a3[1]);
    *(_WORD *)(v6 + 32) = a2;
    v7 = *(_QWORD **)(a1 + 16);
    if ( *v7 != a1 + 8 )
      __fastfail(3u);
    *(_QWORD *)v6 = a1 + 8;
    *(_QWORD *)(v6 + 8) = v7;
    *v7 = v6;
    *(_QWORD *)(a1 + 16) = v6;
    ++*(_DWORD *)a1;
  }
  return v6;
}
