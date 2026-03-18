/*
 * XREFs of ExCopyWakeTimerInfo @ 0x14060B5A0
 * Callers:
 *     PopHandleWakeSources @ 0x140AA0F1C (PopHandleWakeSources.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExCopyWakeTimerInfo(_QWORD *Src, _QWORD *a2)
{
  void *Pool2; // rax
  void *v5; // rdi
  __int64 result; // rax

  Pool2 = (void *)ExAllocatePool2(256LL, *Src, 1398239828LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, Src, *Src);
  result = 0LL;
  *a2 = v5;
  return result;
}
