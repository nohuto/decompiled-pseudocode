/*
 * XREFs of SmpGetCoreProcessIds @ 0x14000E518
 * Callers:
 *     wmain @ 0x140001850 (wmain.c)
 *     SmpStartCsr @ 0x140002100 (SmpStartCsr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpGetCoreProcessIds(unsigned int a1, volatile signed __int32 **a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  __int64 v5; // rbp
  unsigned int v6; // eax
  volatile signed __int32 **v7; // rdx
  __int64 v8; // rdi
  volatile signed __int32 *v9; // r8

  v2 = 0;
  v4 = SmpCoreProcessIds + 40LL * a1;
  v5 = v4 + 8;
  RtlAcquireSRWLockShared(v4 + 8);
  while ( !*(_DWORD *)(v4 + 4) )
    RtlSleepConditionVariableSRW(v4 + 16, v4 + 8, 0LL, 1LL);
  if ( *(_QWORD *)(v4 + 32) )
  {
    v6 = 0;
    v7 = a2;
    v8 = v4 - (_QWORD)a2;
    do
    {
      v9 = *(volatile signed __int32 **)((char *)v7 + v8 + 24);
      *v7 = v9;
      if ( !v6 && *a2 )
        _InterlockedIncrement(v9);
      ++v6;
      ++v7;
    }
    while ( v6 < 2 );
  }
  else
  {
    v2 = -1073741823;
  }
  RtlReleaseSRWLockShared(v5);
  return v2;
}
