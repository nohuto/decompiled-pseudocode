__int64 __fastcall ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(volatile signed __int32 *a1)
{
  int v1; // ebx
  int v2; // edi
  unsigned __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // r9
  char v6; // r10
  int v7; // r11d
  unsigned __int64 v8; // rax

  v1 = 0;
  v2 = (int)a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v3 = __rdtsc();
    v1 = v3;
  }
  result = TRY_ACQUIRE_EXLOCK_EXCLUSIVE(a1);
  if ( (_DWORD)result )
  {
    ++*(_DWORD *)(v5 + 35008);
    if ( v6 )
    {
      v8 = __rdtsc();
      PerfLogSpinLockAcquire(v2, v8, v8 - v1, 0, v7, 3);
    }
    return 1LL;
  }
  return result;
}
