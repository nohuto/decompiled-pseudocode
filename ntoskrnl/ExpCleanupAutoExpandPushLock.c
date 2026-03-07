struct _KTHREAD *__fastcall ExpCleanupAutoExpandPushLock(__int64 a1)
{
  struct _KTHREAD *result; // rax

  result = (struct _KTHREAD *)*(unsigned int *)(a1 + 8);
  if ( ((unsigned __int8)result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8);
  return result;
}
