/*
 * XREFs of MiCheckRelevantKernelShadows @ 0x1403CA158
 * Callers:
 *     MiCheckProcessShadow @ 0x14025F210 (MiCheckProcessShadow.c)
 * Callees:
 *     KeQueryKvaShadowRegion @ 0x1403CA1C8 (KeQueryKvaShadowRegion.c)
 *     MiCheckKernelShadow @ 0x1403CA298 (MiCheckKernelShadow.c)
 */

__int64 __fastcall MiCheckRelevantKernelShadows(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  v1 = 0xFFFFFFFFLL;
  for ( i = 0LL; (unsigned int)KeQueryKvaShadowRegion(i, &v6, &v5); ++i )
  {
    v1 = MiCheckKernelShadow(a1, v6, v5);
    if ( v1 != 0xFFFFFFFFLL )
      break;
  }
  return v1;
}
