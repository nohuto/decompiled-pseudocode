/*
 * XREFs of IvmdFindDeviceEntry @ 0x14052F1D8
 * Callers:
 *     HsaProcessIvmd @ 0x14052E53C (HsaProcessIvmd.c)
 * Callees:
 *     ExtEnvAllocateMemory @ 0x14037C828 (ExtEnvAllocateMemory.c)
 */

__int64 *__fastcall IvmdFindDeviceEntry(__int64 a1, __int16 a2)
{
  __int64 v2; // rbx
  __int64 *result; // rax
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v2 = a1 + 8;
  for ( result = *(__int64 **)(a1 + 8); result != (__int64 *)v2; result = (__int64 *)*result )
  {
    v8 = result;
    if ( *((_WORD *)result + 8) == a2 )
      return result;
  }
  if ( (int)ExtEnvAllocateMemory(a1, 0x28u, &v8) < 0 )
    return 0LL;
  v6 = v8;
  *((_WORD *)v8 + 8) = a2;
  *((_DWORD *)v6 + 5) = 0;
  v6[4] = (__int64)(v6 + 3);
  v6[3] = (__int64)(v6 + 3);
  v7 = *(__int64 ***)(v2 + 8);
  if ( *v7 != (__int64 *)v2 )
    __fastfail(3u);
  v6[1] = (__int64)v7;
  *v6 = v2;
  *v7 = v6;
  result = v6;
  *(_QWORD *)(v2 + 8) = v6;
  ++*(_DWORD *)a1;
  return result;
}
