/*
 * XREFs of MiWaitForSystemCacheViewFlush @ 0x14037F6E0
 * Callers:
 *     MiReleaseSystemCacheView @ 0x14029037C (MiReleaseSystemCacheView.c)
 *     MiObtainSystemCacheView @ 0x140292B80 (MiObtainSystemCacheView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiGetPteLink @ 0x140293260 (MiGetPteLink.c)
 */

unsigned __int64 __fastcall MiWaitForSystemCacheViewFlush(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int i; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0; ; KeYieldProcessorEx(&i, v3, v4, v5) )
  {
    result = MiGetPteLink(*(_QWORD *)(a1 + 24));
    if ( !result )
      break;
  }
  return result;
}
