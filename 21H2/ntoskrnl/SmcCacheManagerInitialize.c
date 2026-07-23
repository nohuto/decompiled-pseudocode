/*
 * XREFs of SmcCacheManagerInitialize @ 0x140A4C660
 * Callers:
 *     SmGlobalsInitialize @ 0x140A4C528 (SmGlobalsInitialize.c)
 * Callees:
 *     ExInitializePushLock @ 0x140266E80 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     memset @ 0x140414300 (memset.c)
 */

struct _EX_RUNDOWN_REF *__fastcall SmcCacheManagerInitialize(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 v3; // rsi
  struct _EX_RUNDOWN_REF *result; // rax

  memset(a1, 0, 0x230uLL);
  v2 = a1 + 1;
  v3 = 16LL;
  do
  {
    ExInitializePushLock(&v2->Count);
    ExWaitForRundownProtectionRelease(v2);
    v2[1].Count = 0LL;
    v2 += 4;
    --v3;
  }
  while ( v3 );
  a1[65].Count = 0LL;
  result = a1 + 65;
  a1[66].Count = 0LL;
  a1[67].Count = 0LL;
  a1[68].Count = 0LL;
  a1[64].Count = 0LL;
  a1[66].Count = (unsigned __int64)&a1[65];
  a1[65].Count = (unsigned __int64)&a1[65];
  return result;
}
